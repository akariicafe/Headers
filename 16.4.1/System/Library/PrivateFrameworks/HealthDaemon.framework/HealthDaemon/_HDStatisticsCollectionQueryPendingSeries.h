@class NSNumber, NSMutableArray, HKQuantitySample;

@interface _HDStatisticsCollectionQueryPendingSeries : NSObject {
    HKQuantitySample *_series;
    NSNumber *_anchor;
    NSMutableArray *_quantities;
}

- (void).cxx_destruct;

@end
