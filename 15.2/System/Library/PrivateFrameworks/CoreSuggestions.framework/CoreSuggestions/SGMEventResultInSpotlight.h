@class PETScalarEventTracker;

@interface SGMEventResultInSpotlight : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 visible:(struct SGMTypeSafeBool_ { unsigned long long x0; })a1;

@end
