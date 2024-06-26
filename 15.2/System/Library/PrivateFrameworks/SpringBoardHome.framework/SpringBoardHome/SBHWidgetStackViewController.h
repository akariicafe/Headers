@class NSMutableDictionary, SBWidgetIcon, SBHWidgetSettings, _UILegibilitySettings, UIPageControl, UIView, UIColor, NSString, NSHashTable, NSTimer, SBFFluidBehaviorSettings, BSUIScrollView, NSArray;
@protocol SBHWidgetStackViewControllerDataSource, BSInvalidatable, SBLeafIconDataSource, SBHWidgetStackViewControllerDelegate;

@interface SBHWidgetStackViewController : UIViewController <BSUIScrollViewDelegate, SBLeafIconObserver, PTSettingsKeyObserver, SBIconViewCustomImageViewControllerObserving, SBHWidgetContainerViewControllerDelegate, SBIconViewCustomImageViewControlling> {
    NSHashTable *_observers;
    NSHashTable *_containerViewControllersRequiringLayoutUponActivation;
    id<BSInvalidatable> _stateCaptureInvalidatable;
}

@property (retain, nonatomic) SBWidgetIcon *icon;
@property (retain, nonatomic) id<SBLeafIconDataSource> activeWidget;
@property (retain, nonatomic) BSUIScrollView *scrollView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) NSTimer *pageControlHidingTimer;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) BOOL showStackBorderWhenShowingPageControl;
@property (nonatomic) BOOL flashPageControlOnNextAppearance;
@property (nonatomic) BOOL flashPageControlOnNextAlphaChange;
@property (retain, nonatomic) NSMutableDictionary *widgetContainerViewControllers;
@property (retain, nonatomic) SBHWidgetSettings *widgetSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *animationSettings;
@property (nonatomic) unsigned long long widgetScaleAnimationCount;
@property (nonatomic) unsigned long long backgroundAnimationCount;
@property (retain, nonatomic) NSHashTable *imageUpdateDisableAssertions;
@property (retain, nonatomic) id<BSInvalidatable> scrollingTouchCancellationAssertion;
@property (retain, nonatomic) id<BSInvalidatable> imageUpdatesDisabledForContextMenuAssertion;
@property (readonly, nonatomic) SBWidgetIcon *widgetIcon;
@property (nonatomic) BOOL alwaysShowsAsStack;
@property (nonatomic) BOOL highlightsAtAnySize;
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (readonly, nonatomic) NSArray *widgetViewControllers;
@property (readonly, copy, nonatomic) UIColor *backgroundTintingColor;
@property (weak, nonatomic) id<SBHWidgetStackViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<SBHWidgetStackViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (readonly, nonatomic) id<SBLeafIconDataSource> visiblyActiveDataSource;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (copy, nonatomic) id /* block */ backgroundViewProvider;
@property (copy, nonatomic) id /* block */ backgroundViewConfigurator;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) BOOL wantsLabelHidden;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic) unsigned long long pauseReasons;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } minimumPreferredEdgeInsetsForContextMenu;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long horizontal; unsigned long long vertical; } approximateLayoutPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL showsSquareCorners;

- (id)sbh_underlyingAvocadoHostViewControllers;
- (void)_handleInstalledAppsChanged:(id)a0;
- (void)scrollViewDidEndScrolling:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)_updateBackgroundViewWithAnimationUpdateMode:(long long)a0 allowingOutsetting:(BOOL)a1;
- (void)_removeWidget:(id)a0 animated:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })_scrollViewContentSize;
- (void)_updatePresentationModeForWidgetViewControllers;
- (id)initWithIcon:(id)a0;
- (void)_setupStateCapture;
- (void)_updateActiveWidgetIndexAndScrollViewContentOffset;
- (void)widgetContainerViewControllerContentViewControllerWillDeactivate:(id)a0;
- (void)updateImageAnimated:(BOOL)a0;
- (void)_updatePageControlWithAnimationUpdateMode:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)widgetContainerViewControllerContentViewControllerDidActivate:(id)a0;
- (void)_setPageControlHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateWidgetViewsWithAnimationUpdateMode:(long long)a0;
- (BOOL)sbh_isWidgetStackViewController;
- (id)_backgroundColorForWidgetWithDistanceFromRestingContentOffset:(double)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)_updateBackgroundViewWithAnimationUpdateMode:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_createBackgroundView;
- (void)_configureBackgroundViewIfNecessary;
- (id)disableImageUpdatesForReason:(id)a0;
- (void)customImageViewControllerWantsLabelHiddenDidChange:(id)a0;
- (BOOL)_widgetHitTestingDisabled;
- (BOOL)_canShowWhileLocked;
- (void)_updateScrollViewDelaysContentTouches;
- (BOOL)_alwaysShowStackBorder;
- (BOOL)_containerRequiresClippingToBoundsForWidget:(id)a0;
- (BOOL)_insetWidgetsForTrackingAppearance;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)sourceBackgroundView:(id)a0;
- (void)leafIcon:(id)a0 didRemoveIconDataSource:(id)a1;
- (BOOL)_pageControlIsHorizontallyConstrained;
- (void)removeCustomImageViewControllerObserver:(id)a0;
- (void)leafIcon:(id)a0 didChangeActiveDataSource:(id)a1;
- (void)loadView;
- (id)_disableImageUpdatesForReason:(id)a0 animateChangesUponInvalidation:(BOOL)a1;
- (void)_updateShowsSnapshotWhenDeactivatedForWidgetViewControllers;
- (void)_updatePauseReasonForWidgetViewControllers;
- (BOOL)_shouldDrawSystemBackgroundMaterialForWidget:(id)a0;
- (struct CGSize { double x0; double x1; })_pageSize;
- (void)_updateAccessibilityValue;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)_updateWidgetViewHitTesting;
- (void)viewDidDisappear:(BOOL)a0;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateWidgetViewEdgeAntialiasing;
- (void)_requireLayoutUponActivationForWidgetContainerViewController:(id)a0;
- (id)sourceView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateWidgetViewClippingAndBackgroundView;
- (void).cxx_destruct;
- (void)_restartPageControlTimer;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)_isScrollViewTracking;
- (void)_flashPageControlAnimated:(BOOL)a0;
- (BOOL)_alwaysShowStackPageControl;
- (void)didSelectApplicationShortcutItem:(id)a0;
- (void)_layoutWithAnimationUpdateMode:(long long)a0;
- (void)_updateApproximateLayoutPositionForWidgetViewControllers;
- (void)_incrementWidgetScaleAnimationCount;
- (void)addCustomImageViewControllerObserver:(id)a0;
- (BOOL)_isContentViewExtendingOutsideBounds;
- (BOOL)_createViewControllerForWidgetIfNecessary:(id)a0 usingSize:(struct CGSize { double x0; double x1; })a1;
- (void)_teardownStateCapture;
- (BOOL)_showAdjacentWidgets;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_widgetContextMenuController;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)leafIcon:(id)a0 didAddIconDataSource:(id)a1;
- (void)_teardownBackgroundView:(id)a0 contactDelegate:(BOOL)a1;
- (void)evaluateBackground;
- (BOOL)_scrollToActiveWidgetAnimated:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_configureBackgroundViewIfNecessary:(id)a0;
- (void)_updateVisiblySettledForWidgetViewControllers;
- (void)_decrementWidgetScaleAnimationCount;
- (void)_incrementBackgroundAnimationCount;
- (struct CGPoint { double x0; double x1; })_restingContentOffset;
- (void)_createBackgroundViewIfNecessary:(BOOL)a0;
- (long long)_newActiveWidgetIndexForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_decrementBackgroundAnimationCount;

@end
