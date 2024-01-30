@class NSMutableDictionary, NSSet, NSDateComponents, NSDate, NSLock;

@interface HKStatisticsCollection : NSObject {
    id /* block */ _emptyStatisticsConstructor;
    double _approximateStatisticsInterval;
    NSMutableDictionary *_statisticsByIndex;
    NSSet *_cachedSources;
    NSLock *_statisticsLock;
}

@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *statisticsInterval;

- (id)statistics;
- (id)init;
- (void).cxx_destruct;
- (id)sources;
- (id)_mostRecentQuantityDateInterval;
- (void)_resetStatistics:(id)a0;
- (id)_initWithAnchorDate:(id)a0 statisticsInterval:(id)a1 emptyStatisticsConstructor:(id /* block */)a2;
- (BOOL)_insertStatistics:(id)a0;
- (id)_statisticsDateIntervalAndIndex:(long long *)a0 forDate:(id)a1;
- (id)_statisticsForIndex:(long long)a0;
- (id)_statisticsForLastIndex;
- (void)_clearSourcesCache;
- (void)_enumerateStatisticsIndexesFromDate:(id)a0 toDate:(id)a1 withBlock:(id /* block */)a2;
- (void)_timePeriodForStatisticsAtIndex:(long long)a0 startDate:(id *)a1 endDate:(id *)a2;
- (id)_statisticsDateIntervalAtIndex:(long long)a0;
- (id)_initWithAnchorDate:(id)a0 statisticsInterval:(id)a1;
- (id)statisticsForDate:(id)a0;
- (void)enumerateStatisticsFromDate:(id)a0 toDate:(id)a1 withBlock:(id /* block */)a2;
- (id)_maxSumQuantityStatistics;
- (id)_minSumQuantityStatistics;
- (id)_mostRecentQuantityStatistics;
- (void)_enumerateTimePeriodsFromDate:(id)a0 toDate:(id)a1 withBlock:(id /* block */)a2;

@end
