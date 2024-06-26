@class UIBarButtonItem, UILabel, _UINavigationBarTitleRenamerSession, _UIBarBackground, _UINavigationBarTransitionContext, _UINavigationBarModernPromptView, _UINavigationBarLargeTitleView, _UIPointerInteractionAssistant, UIView, NSString, _UINavigationBarContentView, _UIBarCustomizer, _UIBarCustomizationSession, UIFocusContainerGuide, _UINavigationBarTitleRenamer, _UINavigationControllerRefreshControlHost;

@interface _UINavigationBarVisualProviderModernIOS : _UINavigationBarVisualProvider <_UINavigationBarTitleRenamerDelegate, _UIBarCustomizerDelegate, _UINavigationBarContentViewDelegate, _UINavigationItemChangeObserver, _UIBarAppearanceChangeObserver, _UINavigationControllerRefreshControlHostDelegate, _UIBasicAnimationFactory> {
    _UIBarBackground *_backgroundView;
    _UINavigationBarContentView *_contentView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarModernPromptView *_promptView;
    _UIPointerInteractionAssistant *_assistant;
    UILabel *_weeTitleLabel;
    _UINavigationBarTransitionContext *_transitionContext;
    struct CGSize { double width; double height; } _previousBarSize;
    double _backgroundAlpha;
    double _titleAlpha;
    double _shadowAlpha;
    BOOL _hasIdiom;
    BOOL _runningPaletteBasedSearchPresentation;
    BOOL _useInlineBackgroundHeightWhenLarge;
    BOOL _backgroundTransparentWhenNotCollapsed;
    BOOL _providesExtraSpaceForExcessiveLineHeights;
    BOOL _isObservingDidEncounterFirstTitleWithExcessiveHeightChanged;
    BOOL _useModernAppearanceAPI;
    BOOL _forceScrollEdgeAppearance;
    long long _appearanceAPIVersion;
    UIBarButtonItem *_staticNavBarButtonItem;
    UIFocusContainerGuide *_contentFocusContainerGuide;
    _UIBarCustomizer *_customizer;
    _UIBarCustomizationSession *_currentCustomizationSession;
    UIView *_customizationContainerView;
    _UINavigationBarTitleRenamer *_titleRenamer;
    _UINavigationBarTitleRenamerSession *_titleRenamerSession;
    BOOL _usesBarBackground;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_enforceLayoutOrdering;
- (void)_updateBackground;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedLargeTitleMargins;
- (BOOL)isInCustomization;
- (void)changeLayout;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (void)updateBackgroundGroupName;
- (BOOL)_isInnerNavigationBarOfNestedNavigationController;
- (void)titleRenamer:(id)a0 didCancelSession:(id)a1;
- (void)_setUpContentFocusContainerGuide;
- (BOOL)shouldFadeStaticNavBarButton;
- (id)appearanceObserver;
- (void)setForceScrollEdgeAppearance:(BOOL)a0;
- (BOOL)scrollEdgeAppearanceHasChromelessBehavior;
- (id)alternateBarBackground;
- (void)navigationItemUpdatedAdditionalOverflowItems:(id)a0;
- (id)traitCollectionForChild:(id)a0 baseTraitCollection:(id)a1;
- (void)navigationBarContentViewDidChangeTintColor:(id)a0;
- (void)_updateLegacyLayout:(id)a0 forNavigationItem:(id)a1;
- (double)_contentBackgroundExtension;
- (void)presentHostedSearchWithTransitionCoordinator:(id)a0;
- (void)_postDidEncounterFirstTitleWithExcessiveHeightChanged;
- (void)setRefreshControlHost:(id)a0;
- (id)refreshControlHost;
- (void)navigationItemUpdatedBottomPalette:(id)a0 oldPalette:(id)a1;
- (void)provideViewsForContents:(id)a0 topItem:(id)a1 backItem:(id)a2;
- (double)heightForRestoringFromCancelledTransition;
- (BOOL)useManualScrollEdgeAppearanceForItem:(id)a0;
- (void)setShouldFadeStaticNavBarButton:(BOOL)a0;
- (void)navigationBarContentViewDidTriggerCustomization:(id)a0;
- (void)navigationItemUpdatedLargeTitleContent:(id)a0;
- (BOOL)_shim_hasCustomBackgroundView;
- (void)navigationItemUpdatedBackgroundAppearance:(id)a0;
- (void)navigationItemUpdatedSearchController:(id)a0 oldSearchController:(id)a1;
- (long long)statusBarStyle;
- (void)navigationItem:(id)a0 appearance:(id)a1 categoriesChanged:(long long)a2;
- (BOOL)alwaysEvaluateChromelessTransitionProgress;
- (void)beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (id)_barCustomizationItemWithBarButtonGroup:(id)a0;
- (void)barCustomizer:(id)a0 willEndSession:(id)a1 didReset:(BOOL)a2;
- (void)navigationItemSearchControllerReadyForDeferredAutomaticShowsScopeBar:(id)a0;
- (BOOL)wantsLargeTitleDisplayed;
- (void)_invalidateIntrinsicContentSizeAndNotifySizeChanged;
- (id)_shim_compatibilityBackgroundView;
- (void)navigationItemUpdatedLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (BOOL)updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)a0;
- (void)_popToItem:(id)a0;
- (void)_endRenaming;
- (void)navigationBarInvalidatedResolvedLayoutMargins;
- (void)_upgradeAppearanceAPIForItemIfNecessary:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateSearchBarForPlacementChangeIfApplicable;
- (id)_updateBackgroundLayout:(id)a0 forNavigationItem:(id)a1 compact:(BOOL)a2;
- (void)changeAppearance;
- (void)_endTransitionCompleted:(BOOL)a0;
- (BOOL)isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)_updateWithCompletion:(id /* block */)a0;
- (void)navigationItemUpdatedLargeTitleDisplayMode:(id)a0;
- (id)_centerBarButtonGroupWithIdentifier:(id)a0;
- (void)navigationControllerRefreshControlHostDidUpdateLayout:(id)a0;
- (void)_updatePromptViewAndActuallyHide:(BOOL)a0;
- (void)setStaticNavBarButtonLingers:(BOOL)a0;
- (void)_shim_setShadowAlpha:(double)a0;
- (void)_setupAccessibilityLimitsForView:(id)a0;
- (id)presentationSourceForContent:(long long)a0 navigationItem:(id)a1;
- (id)barCustomizer:(id)a0 parentTraitEnvironmentForSession:(id)a1;
- (void)_computeProvidesExtraSpaceForExcessiveLineHeightsForTopItem:(id)a0;
- (BOOL)_allowLargeTitleView;
- (void)safeAreaInsetsDidChange;
- (void)setNeedsStaticNavBarButtonUpdate;
- (void)animateForSearchPresentation:(BOOL)a0;
- (BOOL)isContentViewHidden;
- (void)navigationBarContentViewDidTriggerTitleRenameAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barCustomizer:(id)a0 overflowControlBoundsForSession:(id)a1;
- (struct CGPoint { double x0; double x1; })contentViewLayoutFrameOrigin;
- (BOOL)useInlineBackgroundHeightWhenLarge;
- (void)barDidAddSubview:(id)a0;
- (id)_backgroundLayoutOfClass:(Class)a0 fromLayout:(id)a1;
- (void)navigationBarContentViewDidChangeDesiredHeight:(id)a0;
- (void)navigationItemUpdatedTitleContent:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_didEncounterFirstTitleWithExcessiveHeightChanged:(id)a0;
- (void)navigationItemUpdatedRightBarButtonItems:(id)a0 animated:(BOOL)a1;
- (BOOL)_shim_disableBlurTinting;
- (void)setTitleAlpha:(double)a0;
- (void)_layoutInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_effectiveLegacyTitleAttributes;
- (id)_barCustomizationItemWithBarButtonItem:(id)a0 identifier:(id)a1;
- (void)navigationBarContentViewDidTriggerBackAction:(id)a0 fromBackButtonItem:(id)a1;
- (id /* block */)_sourceViewProviderForBarButtonItem:(id)a0;
- (void)setStaticNavBarButtonItem:(id)a0;
- (id)_backButtonMenu;
- (void)_beginCustomization;
- (BOOL)_accessibility_shouldBeginHUDGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)prepareForPush;
- (void)navigationItemUpdatedCenterBarButtonItems:(id)a0 animated:(BOOL)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })resolvedSearchBarMargins;
- (void)prepareForStackChange;
- (void)_ensureLayoutsConfiguredForEntry:(id)a0;
- (id)emptyLayout;
- (double)defaultBarHeightForTraitCollection:(id)a0;
- (void)_beginOrEndObservingDidEncounterFirstTitleWithExcessiveHeightChangedIfNecessary;
- (void)_setupTransitionContextForTransition:(int)a0;
- (void)_updateContentPriorities;
- (BOOL)staticNavBarButtonLingers;
- (id)barCustomizer:(id)a0 containerViewForSession:(id)a1;
- (void)_installContentClippingView:(id)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)_shim_setCustomBackgroundView:(id)a0;
- (void)titleRenamer:(id)a0 session:(id)a1 didEndRenamingWithTitle:(id)a2;
- (void)_updateModernLayout:(id)a0 forNavigationItem:(id)a1 compact:(BOOL)a2;
- (void)navigationItemUpdatedPromptContent:(id)a0;
- (id)titleRenamer:(id)a0 session:(id)a1 willBeginRenamingWithTitle:(id)a2 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (void)_updateContentForTopItem:(id)a0 backItem:(id)a1;
- (id)staticNavBarButtonItem;
- (double)titleAlpha;
- (double)_shim_shadowAlpha;
- (void)navigationItemUpdatedContentLayout:(id)a0 animated:(BOOL)a1;
- (void)deferSearchSuggestionsMenuRefreshForGeometryChange;
- (struct CGPoint { double x0; double x1; })promptViewLayoutFrameOrigin;
- (void)navigationItemUpdatedScrollEdgeProgress:(id)a0;
- (double)backgroundAlpha;
- (id)_defaultWeeTitleAttributes;
- (BOOL)topItemHasVariableHeight;
- (void)_prepareLayouts;
- (void)layoutSubviews;
- (id)_staticNavBarButtonFakeBackMenu;
- (void)pushAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (void)popAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)allowLargeTitleView;
- (void)_refreshBackButtonMenu;
- (void)_updateTitleViewForLayout:(id)a0;
- (void)teardown;
- (id)_adjustedAppearanceTitleAttributes:(id)a0 allowsLargeTitle:(BOOL)a1;
- (void)updateArchivedSubviews:(id)a0;
- (void)_performAnimationWithTransitionCompletion:(id /* block */)a0 transition:(int)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })largeSearchBaseMarginsRequiringNavMinimums:(BOOL)a0;
- (void)setBackgroundAlpha:(double)a0;
- (BOOL)_stackWantsLargeTitleDisplayedForItem:(id)a0;
- (void)setUseInlineBackgroundHeightWhenLarge:(BOOL)a0;
- (BOOL)_isInInteractiveScroll;
- (BOOL)titleRenamer:(id)a0 session:(id)a1 shouldEndRenamingWithTitle:(id)a2;
- (id)_timingFunctionForAnimationInView:(id)a0 withKeyPath:(id)a1;
- (void)_ensureLayoutsConfiguredForEntry:(id)a0 forMeasuring:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)navigationItemUpdatedCanvasView:(id)a0;
- (double)_effectiveBackIndicatorLeftMargin;
- (void)setAppearanceAPIVersion:(long long)a0;
- (id)_compatibleDefaultTextColor;
- (long long)currentContentSize;
- (void)prepareForPop;
- (void)recordBarSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateAugmentedTitleDataSources;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)barDidMoveToWindow;
- (void)_updateContentForTopItem:(id)a0 backItem:(id)a1 animated:(BOOL)a2;
- (long long)appearanceAPIVersion;
- (BOOL)_shouldAnimateAdditivelyForView:(id)a0 withKeyPath:(id)a1;
- (BOOL)navigationItemIsTopItem:(id)a0;
- (void)stackDidChangeFrom:(id)a0;
- (BOOL)forceScrollEdgeAppearance;
- (BOOL)_stackWantsLargeTitleDisplayedForItem:(id)a0 hideLargeTitleForActiveSearch:(BOOL)a1;
- (struct { double x0; double x1; double x2; })layoutHeightsFittingWidth:(double)a0;
- (double)navItemContentLayoutGuideAnimationDistance;
- (void)_removeContentClippingView;
- (unsigned long long)largeTitleStyle;
- (void)dismissHostedSearchWithTransitionCoordinator:(id)a0;
- (BOOL)_shouldEnableNestedNavigationPopForTopItem:(id)a0 backItem:(id)a1;
- (void)refreshSearchSuggestionsMenuAfterGeometryChange;
- (void)_beginRenaming;
- (void)prepare;
- (void)navigationItemUpdatedBackButtonContent:(id)a0 animated:(BOOL)a1;
- (void)_configureMarginsOnContentViewsAndPalette:(id)a0 withContentMargin:(double)a1;
- (BOOL)supportsRefreshControlHosting;
- (void).cxx_destruct;
- (BOOL)navigationItemIsBackItem:(id)a0;
- (BOOL)_stackWantsSearchDisplayedBelowContentViewForItem:(id)a0;
- (void)_shim_setDisableBlurTinting:(BOOL)a0;
- (id)restingHeights;
- (BOOL)_stackWantsBottomPaletteDisplayedForItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barCustomizer:(id)a0 customizationAreaBoundsForSession:(id)a1;
- (void)_presentOrDismissSearch:(int)a0 withTransitionCoordinator:(id)a1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
