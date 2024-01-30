@class NSMutableDictionary;

@interface ATXCorrelationMatrixGuardedData : NSObject {
    NSMutableDictionary *_correlationMatrix;
    NSMutableDictionary *_locationTotals;
}

- (id)initWithCorrelationMatrix:(id)a0 locationTotals:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
