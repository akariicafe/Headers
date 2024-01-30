@class HKUnit, _HKDateIntervalCollection, NSArray, NSMutableDictionary, NSDateInterval, NSMutableArray, NSNumber, HKQuantityType;

@interface HDValueHistogramCollectionCalculator : NSObject {
    HKUnit *_canonicalUnit;
    NSArray *_valueRangesInCanonicalUnit;
    NSMutableArray *_currentIntervalCountsByValueRange;
    NSDateInterval *_currentInterval;
    NSNumber *_currentIntervalIndex;
    NSMutableDictionary *_finalizedHistogramsByDateIntervalIndex;
}

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (readonly, copy, nonatomic) NSArray *quantityRanges;
@property (readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection;

- (void).cxx_destruct;
- (id)result;
- (id)initWithQuantityType:(id)a0 quantityRanges:(id)a1 intervalCollection:(id)a2;
- (void)addSampleValue:(double)a0 startTime:(double)a1;

@end
