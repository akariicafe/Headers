@class SBHIDInterface, NSString;

@interface SBHIDUILockAssertion : NSObject <BSInvalidatable>

@property (nonatomic) BOOL suspendProximitySensor;
@property (nonatomic) BOOL suspendMultitouch;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (nonatomic) BOOL disableTapToWake;
@property (nonatomic) long long source;
@property (weak, nonatomic) SBHIDInterface *HIDInterface;
@property (copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)invalidateForSource:(long long)a0;

@end
