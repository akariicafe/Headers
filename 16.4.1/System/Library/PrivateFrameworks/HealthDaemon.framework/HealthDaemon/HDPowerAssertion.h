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

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
