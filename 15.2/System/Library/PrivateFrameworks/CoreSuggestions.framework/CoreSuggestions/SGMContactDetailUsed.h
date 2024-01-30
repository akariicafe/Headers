@class PETScalarEventTracker;

@interface SGMContactDetailUsed : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 app:(struct SGMContactDetailUsedApp_ { unsigned long long x0; })a1 type:(struct SGMContactDetailType_ { unsigned long long x0; })a2;

@end
