@class CXCallObserver, HMFUnfairLock, NSString;

@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate>

@property (readonly) CXCallObserver *observer;
@property (readonly) HMFUnfairLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPhoneCallObserver;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)startObserving;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasActiveCalls;
- (BOOL)isActiveCall:(id)a0;

@end
