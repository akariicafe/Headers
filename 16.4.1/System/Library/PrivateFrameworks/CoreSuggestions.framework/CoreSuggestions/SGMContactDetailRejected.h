@class PETScalarEventTracker;

@interface SGMContactDetailRejected : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 type:(struct SGMContactDetailType_ { unsigned long long x0; })a1 extracted:(struct SGMDetailExtractionType_ { unsigned long long x0; })a2 extractionModelVersion:(unsigned long long)a3;

@end
