@class PETScalarEventTracker;

@interface SGMContactDetailConfirmed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 type:(struct SGMContactDetailType_ { unsigned long long x0; })a1 extracted:(struct SGMDetailExtractionType_ { unsigned long long x0; })a2 extractionModelVersion:(unsigned long long)a3;

@end
