@class NSArray, NSMutableDictionary, NSDateInterval;

@interface _HKSleepQueryResultBuilder : NSObject {
    NSDateInterval *_resultInterval;
    NSArray *_sourceOrder;
    NSMutableDictionary *_samplesByCategoryValue;
    NSMutableDictionary *_samplesBySource;
}

- (id)_categorySampleBufferForCategoryValue:(long long)a0;
- (id)_categorySampleBufferForSource:(id)a0;
- (id)_organizeSamplesBySource:(id)a0;
- (id)_createDateIntervalsFromSamples:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)initWithResultInterval:(id)a0 sourceOrder:(id)a1;
- (void)addSleepSamples:(id)a0;
- (id)calculateResult;
- (void).cxx_destruct;

@end
