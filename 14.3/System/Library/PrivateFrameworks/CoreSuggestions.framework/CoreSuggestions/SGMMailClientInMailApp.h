@class PETScalarEventTracker;

@interface SGMMailClientInMailApp : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 isSynced:(struct SGMTypeSafeBool_ { unsigned long long x0; })a1 service:(struct SGMEventICSSourceType_ { unsigned long long x0; })a2;

@end
