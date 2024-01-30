@class NSCountedSet, NSString, SBSceneHandle, UIView;
@protocol SBScenePlaceholderContentView, UIScenePresentation, UISceneSnapshotPresentation, SBScenePlaceholderContentContext, SBScenePlaceholderContentViewProvider, UIScenePresenter, SBSceneViewDelegate;

@interface SBSceneView : UIView <SBSceneHandleObserver, SBScenePlaceholderContentViewProviderDelegate, BSInvalidatable> {
    BOOL _invalidated;
    long long _hostingPriority;
    NSString *_hostingIdentifier;
    UIView *_sceneContentContainerView;
    UIView<SBScenePlaceholderContentView> *_placeholderContentView;
    UIView<UISceneSnapshotPresentation> *_liveSnapshotView;
    UIView<UIScenePresentation> *_hostView;
    UIView *_crossfadeView;
    NSCountedSet *_liveContentDisableReasons;
}

@property (readonly, nonatomic) id<UIScenePresenter> presenter;
@property (readonly, nonatomic) SBSceneHandle *sceneHandle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) long long orientation;
@property (retain, nonatomic) id<SBScenePlaceholderContentViewProvider> placeholderContentProvider;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (nonatomic) BOOL placeholderContentEnabled;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, nonatomic) long long effectiveDisplayMode;
@property (nonatomic) BOOL shouldRasterizeHostView;
@property (copy, nonatomic) NSString *hostViewMinificationFilter;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (weak, nonatomic) id<SBSceneViewDelegate> delegate;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDisplayModeAnimationFactory;

- (void)_refresh;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)sceneHandle:(id)a0 didUpdateContentState:(long long)a1;
- (id)newSnapshot;
- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2 hostRequester:(id)a3;
- (void).cxx_destruct;
- (void)_configureSceneSnapshotContext:(id)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_updateLiveContentRasterization;
- (void)dealloc;
- (void)_updateReferenceSize:(struct CGSize { double x0; double x1; })a0 andOrientation:(long long)a1;
- (void)setDisplayMode:(long long)a0 animationFactory:(id)a1 completion:(id /* block */)a2;
- (id)_transitionViewForHostView;
- (BOOL)_representsTranslucentContent;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_layoutLiveHostView:(id)a0;
- (void)_invalidateSceneLiveHostView:(id)a0;
- (void)_configureSceneLiveHostView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)invalidate;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (id)acquireLiveContentDisableAssertionForReason:(id)a0;
- (void)placeholderContentViewProviderContentDidUpdate:(id)a0;
- (void)_containerContentWrapperInterfaceOrientationChangedTo:(long long)a0;
- (void)_invalidateHostPresenter;
- (void)_transitionFromDisplayMode:(long long)a0 showingView:(id)a1 toDisplayMode:(long long)a2 showingView:(id)a3 withAnimationFactory:(id)a4 completion:(id /* block */)a5;
- (void)_reloadPlaceholderContentIfNecessary;
- (void)_evaluateEffectiveDisplayModeWithAnimationFactory:(id)a0 completion:(id /* block */)a1;
- (void)_clearSnapshotViews;
- (void)_hotSwapPlaceholderContentView;
- (void)_hotSwapLiveSnapshotView;
- (void)_setOrientation:(long long)a0;
- (void)_enableHostingIfPossible;
- (BOOL)_shouldObserveSceneHostContentState;
- (void)_recheckLiveContentDependencies;
- (void)_configureViewForEffectiveDisplayMode:(long long)a0;
- (id)_viewForDisplayMode:(long long)a0;
- (long long)_bestDisplayModeLessThanMode:(long long)a0;
- (BOOL)_addContentLikeViewToHierarchyForTransitionIfPossible:(id)a0;
- (BOOL)_shouldViewBeInHierarchyForTransition:(id)a0;
- (void)_configurePlaceholderContentView;
- (void)_configureLiveSnapshotView;
- (void)_configureHostView;
- (void)_placeholderVisibilityChanged;
- (void)_configureBackgroundColorForLiveSnapshot:(BOOL)a0;
- (id)initWithSceneHandle:(id)a0 referenceSize:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2;

@end
