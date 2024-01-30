@class NSString, NSObject;
@protocol OS_dispatch_source, BSInvalidatable;

@interface FigDisplaySleepAssertion : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSString *_reason;
    id<BSInvalidatable> _idleTimerAssertion;
    long long _lastIdleTimerResetTime;
}

- (unsigned char)resetIdleTimer;
- (id)initWithReason:(id)a0 queue:(id)a1 expirationHandler:(id /* block */)a2;
- (void)dealloc;

@end
