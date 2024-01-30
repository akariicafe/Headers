@class NSString, SAUIElementView, UIView;
@protocol SAUIElementViewProviding;

@interface SAUIElementViewController : SAUILayoutSpecifyingElementViewController <SAUIElementViewDelegate, SAUIElementLayoutAxisObserving> {
    SAUIElementView *_elementView;
    UIView *_snapshotView;
    long long _appliedLayoutModeForSquishTransition;
}

@property (readonly, nonatomic) id<SAUIElementViewProviding> elementViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long layoutAxis;

- (id)_containerView;
- (id)_contentView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)handleTap:(id)a0;
- (long long)maximumSupportedLayoutModeForTargetWithOverrider:(id)a0 isDefaultValue:(BOOL *)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2 forTargetWithOverrider:(id)a3 isDefaultValue:(BOOL *)a4;
- (id)_effectiveProvidedMinimalView;
- (id)_elementView;
- (BOOL)_isTrackingExpansionOrContractionTransition;
- (void)_performAppearanceTransitionInitialization;
- (void)_performContentAppearanceTransition:(BOOL)a0;
- (void)_performContentViewCustomContentTransition:(BOOL)a0;
- (void)_performCustomContentTransition:(BOOL)a0 forTransformView:(id)a1;
- (void)_performLeadingTrailingViewCustomContentTransitions;
- (void)_performLeadingTrailingViewSquishTransitions;
- (void)_performLeadingViewCustomContentTransition:(BOOL)a0;
- (void)_performLeadingViewSquishTransition:(BOOL)a0;
- (void)_performMinimalViewCustomContentTransition:(BOOL)a0;
- (void)_performMinimalViewSquishTransition:(BOOL)a0;
- (void)_performSquishTransition:(BOOL)a0 forProvidedView:(id)a1 transformView:(id)a2;
- (void)_performTrailingViewCustomContentTransition:(BOOL)a0;
- (void)_performTrailingViewSquishTransition:(BOOL)a0;
- (BOOL)elementViewShouldCenterProvidedContent:(id)a0;
- (double)fixedHeightForElementView:(id)a0;
- (id)initWithElementViewProvider:(id)a0;
- (BOOL)isMinimalViewIsolatedForElementView:(id)a0;
- (long long)layoutModeForElementView:(id)a0;

@end
