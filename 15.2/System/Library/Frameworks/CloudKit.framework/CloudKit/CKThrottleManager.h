@class NSArray;
@protocol CKThrottleObserver;

@interface CKThrottleManager : NSObject {
    NSArray *_throttleList;
    id<CKThrottleObserver> _observer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _throttleLock;
}

+ (id)sharedManager;

- (void)setThrottleObserver:(id)a0;
- (void)resetThrottles;
- (id)CKStatusReportArray;
- (BOOL)addThrottle:(id)a0;
- (id)allThrottles;
- (id)enforcedThrottleForCriteria:(id)a0 willSendRequest:(BOOL)a1 outThrottleError:(id *)a2;
- (void).cxx_destruct;
- (id)_init;
- (void)throttleWillBeRemoved:(id)a0;
- (void)noteDataChangeForThrottle:(id)a0;

@end
