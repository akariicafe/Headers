@class PETScalarEventTracker;

@interface SGMDDLinkShown : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 interface:(struct SGMNLEventInterface_ { unsigned long long x0; })a1;

@end
