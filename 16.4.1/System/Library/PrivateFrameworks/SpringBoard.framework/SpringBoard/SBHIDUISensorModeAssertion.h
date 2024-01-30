@class NSString, SBHIDUISensorModeController;

@interface SBHIDUISensorModeAssertion : NSObject <BSInvalidatable>

@property (weak, nonatomic) SBHIDUISensorModeController *sensorModeController;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) long long source;
@property (nonatomic) long long displayState;
@property (nonatomic) long long digitizerMode;
@property (nonatomic) BOOL suspendProximitySensor;
@property (nonatomic) BOOL pocketTouchesExpected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
