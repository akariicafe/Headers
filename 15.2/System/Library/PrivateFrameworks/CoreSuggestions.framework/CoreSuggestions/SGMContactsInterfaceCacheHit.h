@class PETScalarEventTracker;

@interface SGMContactsInterfaceCacheHit : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 cacheHit:(struct SGMTypeSafeBool_ { unsigned long long x0; })a1;

@end
