@class PETScalarEventTracker;

@interface SGMContactResultInSpotlight : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 visible:(struct SGMTypeSafeBool_ { unsigned long long x0; })a1;

@end
