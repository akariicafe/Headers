@class PETScalarEventTracker;

@interface SGMBundleIdsTrackedAsOther : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 bundleId:(id)a1;

@end
