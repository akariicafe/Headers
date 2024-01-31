@class NSArray;
@protocol CKThrottleObserver;

@interface CKThrottleManager : NSObject {
    NSArray *_throttleList;
    id<CKThrottleObserver> _observer;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _throttleLock;
}

+ (id)sharedManager;

- (void)resetThrottles;
- (id)CKStatusReportArray;
- (BOOL)addThrottle:(id)a0;
- (void)throttleListBecameEmpty;
- (id)initInternal;
- (id)enforcedThrottleForCriteria:(id)a0 willSendRequest:(BOOL)a1 outThrottleError:(id *)a2;
- (void)noteDataChangeForThrottle:(id)a0;
- (void)throttleWillBeRemoved:(id)a0;
- (void)throttleWasAdded:(id)a0;
- (id)allThrottles;
- (void).cxx_destruct;
- (void)setThrottleObserver:(id)a0;

@end
