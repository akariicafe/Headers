@class NSArray;
@protocol CKThrottleObserver;

@interface CKThrottleManager : NSObject {
    NSArray *_throttleList;
    id<CKThrottleObserver> _observer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _throttleLock;
}

+ (id)sharedManager;

- (id)CKStatusReportArray;
- (void)resetThrottles;
- (BOOL)addThrottle:(id)a0;
- (void)throttleWillBeRemoved:(id)a0;
- (void)setThrottleObserver:(id)a0;
- (id)_init;
- (void)noteDataChangeForThrottle:(id)a0;
- (id)enforcedThrottleForCriteria:(id)a0 willSendRequest:(BOOL)a1 outThrottleError:(id *)a2;
- (id)allThrottles;
- (void)throttleWasAdded:(id)a0;
- (void)throttleListBecameEmpty;
- (void).cxx_destruct;

@end
