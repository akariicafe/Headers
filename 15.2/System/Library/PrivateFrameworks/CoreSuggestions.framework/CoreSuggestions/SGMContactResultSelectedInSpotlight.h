@class PETScalarEventTracker;

@interface SGMContactResultSelectedInSpotlight : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0;

@end
