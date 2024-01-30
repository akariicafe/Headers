@class SBAppLayout;

@interface SBMutableSwitcherTransitionRequest : SBSwitcherTransitionRequest

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) long long appLayoutEnvironment;
@property (nonatomic) long long unlockedEnvironmentMode;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic) long long floatingSwitcherVisible;
@property (nonatomic) long long dismissInlineAppExpose;
@property (nonatomic) long long animationDisabled;
@property (nonatomic) long long source;

@end
