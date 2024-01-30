@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface HDPowerAssertion : NSObject {
    unsigned int _assertionID;
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _timeoutHandler;
    _Atomic BOOL _invalidated;
}

@property (readonly) BOOL invalidated;
@property (readonly, copy) NSString *identifier;
@property (readonly) double timeout;

+ (id)powerAssertionWithIdentifier:(id)a0 timeout:(double)a1 timeoutHandler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_scheduleTimer;
- (void)invalidate;
- (void)_timerDidFire;
- (id)_initWithIdentifier:(id)a0 timeout:(double)a1 timeoutHandler:(id /* block */)a2;

@end
