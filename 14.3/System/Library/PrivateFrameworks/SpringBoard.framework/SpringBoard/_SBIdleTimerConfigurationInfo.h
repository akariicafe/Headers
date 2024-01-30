@class SBIdleTimerRequestConfiguration, NSString;

@interface _SBIdleTimerConfigurationInfo : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) SBIdleTimerRequestConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithConfiguration:(id)a0 reason:(id)a1;

@end
