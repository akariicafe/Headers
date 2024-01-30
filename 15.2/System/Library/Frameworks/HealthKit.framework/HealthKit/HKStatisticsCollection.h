@class NSMutableDictionary, NSSet, NSDateComponents, NSDate;

@interface HKStatisticsCollection : NSObject {
    id /* block */ _emptyStatisticsConstructor;
    double _approximateStatisticsInterval;
    NSMutableDictionary *_statisticsByIndex;
    NSSet *_cachedSources;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, nonatomic) unsigned long long statisticsCount;
@property (readonly, copy, nonatomic) NSDateComponents *statisticsInterval;

- (id)sources;
- (id)statistics;
- (void).cxx_destruct;
- (id)init;
- (void)_resetStatistics:(id)a0;
- (id)initWithAnchorDate:(id)a0 statisticsInterval:(id)a1 emptyStatisticsConstructor:(id /* block */)a2;
- (BOOL)_insertStatistics:(id)a0;
- (id)_statisticsForIndex:(long long)a0;
- (id)initWithAnchorDate:(id)a0 statisticsInterval:(id)a1;
- (id)_statisticsDateIntervalAndIndex:(long long *)a0 forDate:(id)a1;
- (void)_enumerateStatisticsIndexesFromDate:(id)a0 toDate:(id)a1 withBlock:(id /* block */)a2;
- (id)_statisticsForLastIndex;
- (void)_clearSourcesCache;
- (id)statisticsForDate:(id)a0;
- (void)_timePeriodForStatisticsAtIndex:(long long)a0 startDate:(id *)a1 endDate:(id *)a2;
- (id)_initWithAnchorDate:(id)a0 statisticsInterval:(id)a1;
- (id)_initWithAnchorDate:(id)a0 statisticsInterval:(id)a1 emptyStatisticsConstructor:(id /* block */)a2;
- (void)enumerateStatisticsFromDate:(id)a0 toDate:(id)a1 withBlock:(id /* block */)a2;
- (id)_maxSumQuantityStatistics;
- (id)_minSumQuantityStatistics;
- (id)_mostRecentQuantityStatistics;
- (id)_statisticsDateIntervalAtIndex:(long long)a0;
- (void)_enumerateTimePeriodsFromDate:(id)a0 toDate:(id)a1 withBlock:(id /* block */)a2;
- (void)enumeratePopulatedStatisticsWithBlock:(id /* block */)a0;
- (id)_mostRecentQuantityDateInterval;

@end
