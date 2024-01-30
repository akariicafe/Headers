@class SBDisplayItem, NSString, SBAppLayout, SBFFluidBehaviorSettings;

@interface SBMutableSwitcherTransitionRequest : SBSwitcherTransitionRequest

@property (retain, nonatomic) SBAppLayout *appLayout;
@property (retain, nonatomic) SBDisplayItem *activatingDisplayItem;
@property (nonatomic) long long appLayoutEnvironment;
@property (nonatomic) long long unlockedEnvironmentMode;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic) long long floatingSwitcherVisible;
@property (nonatomic) long long animationDisabled;
@property (nonatomic) long long autoPIPDisabled;
@property (nonatomic) long long source;
@property (nonatomic) long long peekConfiguration;
@property (copy, nonatomic) NSString *bundleIdentifierForAppExpose;
@property (nonatomic) long long entityInsertionPolicy;
@property (nonatomic) BOOL sceneUpdatesOnly;
@property (nonatomic) BOOL fenceSceneUpdate;
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings;

@end
