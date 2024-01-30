@class CKDLogicalDeviceContext;

@interface CKDThrottleManager : CKThrottleManager

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (BOOL)addThrottle:(id)a0;
- (void)invalidateAdopterThrottles;
- (id)initWithDeviceContext:(id)a0;
- (void)loadThrottlesFromCache;
- (void).cxx_destruct;
- (void)throttleWillBeRemoved:(id)a0;
- (void)noteDataChangeForThrottle:(id)a0;
- (id)metadataCache;

@end
