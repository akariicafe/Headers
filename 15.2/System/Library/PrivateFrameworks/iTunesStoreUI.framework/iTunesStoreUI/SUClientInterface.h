@class SUViewControllerFactory, NSString, SUPurchaseManager, NSMutableDictionary, SUPreviewOverlayViewController, SUUIAppearance, SUQueueSessionManager, NSObject, SUTabBarController, UIColor;
@protocol OS_dispatch_queue, SUClientInterfaceDelegatePrivate;

@interface SUClientInterface : NSObject {
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    SUUIAppearance *_appearance;
    BOOL _inAskToBuyApprovalFlow;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _ignoresExpectedClientsProtocol;
    NSString *_localStoragePath;
    SUPurchaseManager *_purchaseManager;
    SUQueueSessionManager *_queueSessionManager;
    NSMutableDictionary *_urlBagKeys;
    NSString *_userAgent;
    BOOL _wasLaunchedFromLibrary;
}

@property (getter=_ignoresExpectedClientsProtocol, setter=_setIgnoresExpectedClientsProtocol:) BOOL _ignoresExpectedClientsProtocol;
@property (copy, nonatomic) UIColor *darkKeyColor;
@property (copy, nonatomic) UIColor *lightKeyColor;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *applicationVersion;
@property (copy) NSString *clientIdentifier;
@property (nonatomic) id<SUClientInterfaceDelegatePrivate> delegate;
@property (copy) SUUIAppearance *appearance;
@property (getter=isFinanceInterruption) BOOL financeInterruption;
@property (copy) NSString *hostApplicationIdentifier;
@property BOOL ignoreDefaultKeyboardNotifications;
@property (copy) NSString *localStoragePath;
@property (readonly, nonatomic) SUPreviewOverlayViewController *previewOverlay;
@property (retain) SUPurchaseManager *purchaseManager;
@property (retain) SUQueueSessionManager *queueSessionManager;
@property BOOL showDialogOnError;
@property (readonly, nonatomic) SUTabBarController *tabBarController;
@property (copy) NSString *userAgent;
@property (retain) SUViewControllerFactory *viewControllerFactory;
@property BOOL wasLaunchedFromLibrary;
@property BOOL inAskToBuyApprovalFlow;
@property (copy, nonatomic) NSString *askToBuyApprovalPrompt;

+ (id)_defaultApplicationIdentifier;
+ (id)_defaultApplicationVersion;

- (id)init;
- (void)dealloc;
- (void)_presentDialog:(id)a0;
- (void)_showPreviewOverlayAnimated:(BOOL)a0;
- (void)_hidePreviewOverlayAnimated:(BOOL)a0;
- (void)_dispatchXEvent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_exitStoreWithReason:(long long)a0;
- (void)_dispatchOnPageResponseWithData:(id)a0 response:(id)a1;
- (id)_newScriptInterface;
- (id)URLBagKeyForIdentifier:(id)a0;
- (void)setURLBagKey:(id)a0 forIdentifier:(id)a1;
- (void)_dismissViewControllerFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_dismissModalViewControllerFromViewController:(id)a0 withTransition:(int)a1;
- (void)_presentViewController:(id)a0 fromViewController:(id)a1 withTransition:(int)a2;
- (void)_returnToLibrary;
- (void)_setStatusBarHidden:(BOOL)a0 withAnimation:(long long)a1;
- (void)_setStatusBarStyle:(long long)a0 animated:(BOOL)a1;
- (void)_mediaPlayerViewControllerWillDismiss:(id)a0 animated:(BOOL)a1;

@end
