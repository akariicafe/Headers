@class PETDistributionEventTracker;

@interface SGMContactsInterfaceCacheCount : NSObject

@property (readonly, nonatomic) PETDistributionEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(double)a0;

@end
