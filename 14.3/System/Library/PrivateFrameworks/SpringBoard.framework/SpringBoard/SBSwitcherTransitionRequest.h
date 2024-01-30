@class NSString, SBAppLayout;

@interface SBSwitcherTransitionRequest : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) long long appLayoutEnvironment;
@property (nonatomic) long long unlockedEnvironmentMode;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic) long long floatingSwitcherVisible;
@property (nonatomic) long long dismissInlineAppExpose;
@property (nonatomic) long long animationDisabled;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestForActivatingAppLayout:(id)a0;
+ (id)requestForActivatingHomeScreen;
+ (id)requestForActivatingAppSwitcher;
+ (id)requestForActivatingFloatingSwitcher;
+ (id)requestForDeactivatingFloatingSwitcher;
+ (id)requestForStashingFloatingApplication;
+ (id)requestForDismissingInlineSwitcher;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
