@class SBDisplayItem, NSString, SBAppLayout, SBFFluidBehaviorSettings;

@interface SBSwitcherTransitionRequest : NSObject <BSDescriptionProviding, NSMutableCopying>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestForActivatingAppSwitcher;
+ (id)requestForStashingFloatingApplicationWithFloatingConfiguration:(long long)a0;
+ (id)requestForActivatingAppLayout:(id)a0;
+ (id)requestForActivatingFloatingSwitcher;
+ (id)requestForActivatingHomeScreen;
+ (id)requestForDeactivatingFloatingSwitcher;
+ (id)requestForTapAppLayoutEvent:(id)a0;
+ (id)requestForTapAppLayoutHeaderEvent:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
