@class NSMutableDictionary;

@interface ATXCorrelationMatrixGuardedData : NSObject {
    NSMutableDictionary *_correlationMatrix;
    NSMutableDictionary *_locationTotals;
}

- (id)initWithCorrelationMatrix:(id)a0 locationTotals:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
