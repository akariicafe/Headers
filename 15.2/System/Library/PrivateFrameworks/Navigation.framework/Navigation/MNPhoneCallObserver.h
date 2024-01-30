@class CXCallObserver;

@interface MNPhoneCallObserver : NSObject {
    CXCallObserver *_observer;
}

+ (id)sharedPhoneCallObserver;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_startObserving;
- (BOOL)hasActiveCalls;
- (BOOL)_isActiveCall:(id)a0;

@end
