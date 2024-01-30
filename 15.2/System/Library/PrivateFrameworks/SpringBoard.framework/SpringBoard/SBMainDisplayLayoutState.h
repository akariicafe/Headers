@class NSString, SBAppLayout;

@interface SBMainDisplayLayoutState : SBLayoutState {
    SBAppLayout *_cachedAppLayoutIfAny;
    SBAppLayout *_cachedFloatingAppLayoutIfAny;
}

@property (readonly, nonatomic) long long spaceConfiguration;
@property (readonly, nonatomic) long long floatingConfiguration;
@property (readonly, nonatomic) long long centerConfiguration;
@property (readonly, nonatomic) long long peekConfiguration;
@property (readonly, nonatomic) long long unlockedEnvironmentMode;
@property (readonly, nonatomic) NSString *bundleIDShowingAppExpose;
@property (readonly, nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible;
@property (readonly, nonatomic, getter=isCenterEntityModal) BOOL centerEntityModal;
@property (readonly, nonatomic) long long windowPickerRole;

+ (long long)_defaultInterfaceOrientation;

- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 elementInterfaceOrientation:(long long)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4 unlockedEnvironmentMode:(long long)a5 floatingSwitcherVisible:(BOOL)a6 centerConfiguration:(long long)a7 centerEntityModal:(BOOL)a8 peekConfiguration:(long long)a9 bundleIDShowingAppExpose:(id)a10 windowPickerRole:(long long)a11;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 elementInterfaceOrientation:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)visibleFloatingItem;
- (id)floatingItem;
- (id)floatingAppLayout;
- (unsigned long long)hash;
- (long long)interfaceOrientation;

@end
