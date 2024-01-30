@class NSString;

@interface SBIdleTimerConfigurationDisablesTimerSetting : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) unsigned long long precedence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithPrecedence:(unsigned long long)a0;

@end
