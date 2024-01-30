@class NSString, SBAppLayout;

@interface SBSwitcherTransitionRequest : NSObject <BSDescriptionProviding, NSMutableCopying>

@property (retain, nonatomic) SBAppLayout *appLayout;
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
@property (nonatomic) BOOL sceneUpdatesOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestForActivatingAppLayout:(id)a0;
+ (id)requestForActivatingHomeScreen;
+ (id)requestForActivatingAppSwitcher;
+ (id)requestForActivatingFloatingSwitcher;
+ (id)requestForDeactivatingFloatingSwitcher;
+ (id)requestForStashingFloatingApplicationWithFloatingConfiguration:(long long)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
