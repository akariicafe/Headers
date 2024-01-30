@class UIWindow, UINavigationController, NSString, CKFullScreenAppViewController, CKConversation, UIViewController;
@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate;

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate>

@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser;
@property (nonatomic) long long currentConsumer;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (retain, nonatomic) CKFullScreenAppViewController *fullscreenViewController;
@property (retain, nonatomic) UIWindow *appWindow;
@property (weak, nonatomic) UIWindow *previousKeyWindow;
@property (weak, nonatomic) UIWindow *preModalKeyWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedCompactFrame;
@property (nonatomic) long long lastTransitionReason;
@property (retain, nonatomic) UIWindow *modalAppWindow;
@property (retain, nonatomic) UINavigationController *presentedModalBrowserNavigationController;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentModalBrowser;
@property (weak, nonatomic) id<CKBrowserTransitionCoordinatorDelegate> delegate;
@property (readonly, nonatomic, getter=isPresentingFullScreenModal) BOOL presentingFullScreenModal;
@property (readonly, nonatomic) BOOL wasCurrentBrowserExpanded;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) CKConversation *conversation;
@property (weak, nonatomic) id<CKBrowserViewControllerSendDelegate> sendDelegate;
@property (nonatomic) BOOL underTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissCurrentFullScreenModalAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)appIconOverride;
- (void)dismissCurrentFullscreenBrowserAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fullscreenAppViewController:(id)a0 wantsToSwitchToPlugin:(id)a1 datasource:(id)a2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)a0;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)a0;
- (id)appTitleOverride;
- (BOOL)shouldAlwaysShowAppTitle;
- (double)fullscreenAppViewControllerCollapsedContentHeight:(id)a0;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)a0;
- (void)fullscreenAppViewController:(id)a0 hasUpdatedLastTouchDate:(id)a1;
- (BOOL)fullscreenAppViewControllerShouldDismissOnDragSuccess:(id)a0;
- (id)transitionViewController;
- (BOOL)shouldPresentModalFromPresentingViewController;
- (BOOL)usePresentationWindowDuringTransition;
- (id)requestOwnershipOfBrowserForConsumer:(long long)a0;
- (void)setExpanded:(BOOL)a0 withReason:(long long)a1;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)a0;
- (BOOL)isHostingRemoteKeyboardView;
- (void)presentPluginFullScreenModal:(id)a0 datasource:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)modalPresentationViewController;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)updateBrowserSessionForPlugin:(id)a0 datasource:(id)a1;
- (void)presentPluginFullScreenModal:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1;

@end
