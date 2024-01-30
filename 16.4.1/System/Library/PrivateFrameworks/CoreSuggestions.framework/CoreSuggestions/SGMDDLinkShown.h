@class PETScalarEventTracker;

@interface SGMDDLinkShown : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 interface:(struct SGMNLEventInterface_ { unsigned long long x0; })a1;

@end
