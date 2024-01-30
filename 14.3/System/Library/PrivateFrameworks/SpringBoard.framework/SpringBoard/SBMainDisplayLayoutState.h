@class NSString, NSSet;

@interface SBMainDisplayLayoutState : SBLayoutState

@property (readonly, nonatomic) long long spaceConfiguration;
@property (readonly, nonatomic) long long floatingConfiguration;
@property (readonly, nonatomic) long long unlockedEnvironmentMode;
@property (readonly, nonatomic) NSString *bundleIDShowingAppExpose;
@property (readonly, nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible;
@property (readonly, nonatomic) NSSet *inlineAppExposeOverlayElements;

+ (long long)_defaultInterfaceOrientation;

- (void).cxx_destruct;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 elementInterfaceOrientation:(long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)visibleFloatingItem;
- (unsigned long long)hash;
- (long long)interfaceOrientation;
- (id)_initWithLayoutElements:(id)a0 interfaceOrientation:(long long)a1 elementInterfaceOrientation:(long long)a2 spaceConfiguration:(long long)a3 floatingConfiguration:(long long)a4 unlockedEnvironmentMode:(long long)a5 floatingSwitcherVisible:(BOOL)a6 bundleIDShowingAppExpose:(id)a7 inlineAppExposeOverlayElements:(id)a8;
- (BOOL)isEqual:(id)a0;
- (id)_transitionContextForDismissingLeftApplication;
- (id)_transitionContextForResizingToSpaceConfiguration:(long long)a0;
- (id)inlineAppExposeOverlayElementWithRole:(long long)a0;
- (id)_transitionContextForDismissingRightApplication;
- (id)floatingItem;

@end
