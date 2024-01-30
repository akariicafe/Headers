@class CXCallObserver;

@interface MNPhoneCallObserver : NSObject {
    CXCallObserver *_observer;
}

+ (id)sharedPhoneCallObserver;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_startObserving;
- (BOOL)hasActiveCalls;
- (BOOL)_isActiveCall:(id)a0;

@end
