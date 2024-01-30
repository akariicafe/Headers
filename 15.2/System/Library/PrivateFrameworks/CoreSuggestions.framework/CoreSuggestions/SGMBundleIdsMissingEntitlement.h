@class PETScalarEventTracker;

@interface SGMBundleIdsMissingEntitlement : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 bundleId:(id)a1 entitlement:(id)a2;

@end
