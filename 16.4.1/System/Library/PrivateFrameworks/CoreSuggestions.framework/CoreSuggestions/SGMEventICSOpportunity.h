@class PETScalarEventTracker;

@interface SGMEventICSOpportunity : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 source:(struct SGMEventICSSourceType_ { unsigned long long x0; })a1 recipient:(struct SGMEventICSSourceType_ { unsigned long long x0; })a2 accountSetup:(struct SGMTypeSafeBool_ { unsigned long long x0; })a3;

@end
