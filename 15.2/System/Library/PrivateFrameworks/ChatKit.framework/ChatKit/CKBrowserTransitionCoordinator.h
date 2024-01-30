@class UIWindow, UINavigationController, NSString, CKExpandedAppViewController, CKConversation, UIViewController;
@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate;

@interface CKBrowserTransitionCoordinator : NSObject <CKExpandedAppViewControllerDelegate>

@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser;
@property (nonatomic) long long currentConsumer;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (retain, nonatomic) CKExpandedAppViewController *expandedAppViewController;
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

- (id)transitionViewController;
- (BOOL)shouldPresentModalFromPresentingViewController;
- (BOOL)usePresentationWindowDuringTransition;
- (id)requestOwnershipOfBrowserForConsumer:(long long)a0;
- (void)setExpanded:(BOOL)a0 withReason:(long long)a1;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)a0;
- (void)presentPluginFullScreenModal:(id)a0 datasource:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)modalPresentationViewController;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)updateBrowserSessionForPlugin:(id)a0 datasource:(id)a1;
- (BOOL)isHostingRemoteKeyboardView;
- (void)presentPluginFullScreenModal:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissCurrentFullScreenModalAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissCurrentExpandedBrowserAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateBrowser:(id)a0;
- (void)expandedAppViewControllerDidTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (id)appIconOverride;
- (void).cxx_destruct;
- (id)appTitleOverride;
- (void)expandedAppViewController:(id)a0 wantsToSwitchToPlugin:(id)a1 datasource:(id)a2;
- (void)expandedAppViewControllerSwitcherDidSelectAppStore:(id)a0;
- (void)expandedAppViewControllerSwitcherDidSelectAppManager:(id)a0;
- (double)expandedAppViewControllerCollapsedContentHeight:(id)a0;
- (BOOL)shouldAlwaysShowAppTitle;
- (void)expandedAppViewController:(id)a0 hasUpdatedLastTouchDate:(id)a1;
- (void)expandedAppViewControllerWantsToCollapse:(id)a0;
- (BOOL)expandedAppViewControllerShouldDismissOnDragSuccess:(id)a0;

@end
