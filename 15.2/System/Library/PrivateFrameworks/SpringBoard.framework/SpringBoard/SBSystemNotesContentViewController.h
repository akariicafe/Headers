@class SBNubView, BSAbsoluteMachTimer, UITapGestureRecognizer, SBTransientUIInteractionManager, SBSceneViewStatusBarAssertion, SBSystemPointerInteractionManager, UIView, SBDeviceApplicationSceneHandle, NSString, SBSystemNotesInteractionSettings, SBSystemNotesPlaceholderContentProvider, SBSSystemNotesPresentationConfiguration, SBDeviceApplicationSceneViewController, SBSystemNotesContentPresentationContext, SBApplicationBlurContentView, SBMainWorkspace;
@protocol SBSystemNotesContentViewControllerDelegate;

@interface SBSystemNotesContentViewController : UIViewController <SBPIPWindowOrientationObserver, SBWorkspaceApplicationSceneTransitionContextDelegate, SBSystemPointerInteractionDelegate, SBTransientUITapToDismissParticipant, SBDeviceApplicationSceneHandleObserver, SBPIPSceneContentProviding> {
    SBSystemNotesInteractionSettings *_notesInteractionSettings;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBNubView *_nubView;
    SBApplicationBlurContentView *_blurView;
    SBMainWorkspace *_workspace;
    UITapGestureRecognizer *_thumbnailTapGestureRecognizer;
    UIView *_thumbnailView;
    SBSystemNotesPlaceholderContentProvider *_placeholderProvider;
    SBSceneViewStatusBarAssertion *_statusBarAssertion;
    SBTransientUIInteractionManager *_transientUIInteractionManager;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
    struct CGSize { double width; double height; } _preferredSceneContentSize;
    SBSSystemNotesPresentationConfiguration *_currentConfiguration;
    SBSystemNotesContentPresentationContext *_presentationContext;
    BSAbsoluteMachTimer *_thumbnailCooldownTimer;
    BOOL _thumbnailCooldownTimerFired;
    BOOL _haveBeenForeground;
    NSString *_pendingAnalyticsString;
}

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBSSystemNotesPresentationConfiguration *currentConfiguration;
@property (nonatomic) long long presentationMode;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (weak, nonatomic) id<SBSystemNotesContentViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)styleForRegion:(id)a0 forView:(id)a1;
- (BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pointerInteractionHitTestInsetsForView:(id)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (id)_containerViewController;
- (long long)_currentInterfaceOrientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)contentView;
- (BOOL)transientUIHandledTouch:(id)a0 withSystemGestureRecognizer:(id)a1;
- (unsigned long long)updateConfiguration:(id)a0 sendCreateActionIfNecessary:(BOOL)a1;
- (id)initWithSceneHandle:(id)a0 workspace:(id)a1 transientUIInteractionManager:(id)a2 systemPointerInteractionManager:(id)a3 notesInteractionSettings:(id)a4 presentationContext:(id)a5;
- (BOOL)containerViewController:(id)a0 shouldHandleStashingForTransitionContext:(id)a1;
- (void)containerViewControllerWillBeginSizeChange:(id)a0 behavior:(int)a1;
- (void)containerViewControllerDidEndSizeChange:(id)a0;
- (void)containerViewController:(id)a0 didSettleOnStashState:(BOOL)a1;
- (void)containerViewControllerDidEndInteraction:(id)a0;
- (void)_handleThumbnailTapGesture:(id)a0;
- (BOOL)_updateForegroundStatus:(BOOL)a0;
- (id)_thumbnailViewForUserActivity:(id)a0;
- (id)_imageFromUserActivity:(id)a0 presentationMode:(long long)a1;
- (unsigned long long)_sendActionForUpdatedConfiguration:(id)a0 sendCreateIfNecessary:(BOOL)a1;
- (void)_updateSceneFrameWithOrientation:(long long)a0 completion:(id /* block */)a1;
- (void)_setBlurred:(BOOL)a0;
- (void)_setPreferredSceneContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sceneFrameForOrientation:(long long)a0;
- (BOOL)_hitTestTouch:(id)a0 gestureRecognizer:(id)a1;
- (void)window:(id)a0 activeInterfaceOrientationWillChangeToOrientation:(long long)a1;
- (void)window:(id)a0 activeInterfaceOrientationDidChangeToOrientation:(long long)a1 willAnimateWithDuration:(double)a2 fromOrientation:(long long)a3;

@end
