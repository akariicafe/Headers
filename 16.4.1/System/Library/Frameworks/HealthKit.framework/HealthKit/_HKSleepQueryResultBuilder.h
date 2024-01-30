@class NSArray, NSMutableDictionary, NSDateInterval;

@interface _HKSleepQueryResultBuilder : NSObject {
    NSDateInterval *_resultInterval;
    NSArray *_sourceOrder;
    NSMutableDictionary *_samplesByCategoryValue;
    NSMutableDictionary *_samplesBySource;
}

- (void).cxx_destruct;
- (id)_categorySampleBufferForSource:(id)a0;
- (id)calculateResult;
- (id)_categorySampleBufferForCategoryValue:(long long)a0;
- (id)_createDateIntervalsFromSamples:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (id)_organizeSamplesBySource:(id)a0;
- (void)addSleepSamples:(id)a0;
- (id)initWithResultInterval:(id)a0 sourceOrder:(id)a1;

@end
