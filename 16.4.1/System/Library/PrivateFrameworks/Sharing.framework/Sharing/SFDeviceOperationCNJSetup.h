@class SKSetupCaptiveNetworkJoinClient, SKEventCaptiveNetworkPresent, WSWebSheetViewController, SFSession, NSObject, UIViewController;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationCNJSetup : NSObject <WSWebSheetViewDelegate> {
    SKSetupCaptiveNetworkJoinClient *_cnjClient;
    SKEventCaptiveNetworkPresent *_cnjEvent;
    WSWebSheetViewController *_webSheetViewController;
    long long _webSheetResult;
    BOOL _isShowingWebSheet;
    unsigned long long _startTicks;
    BOOL _invalidateCalled;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL isSetup;
@property (copy, nonatomic) id /* block */ promptForConfirmationHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) double metricTotalSeconds;

- (void)activate;
- (void)invalidate;
- (void)_complete:(id)a0;
- (void).cxx_destruct;
- (void)_handleCompletedEventWithError:(id)a0;
- (void)handleDismissal;
- (void)_handleCaptiveNetworkPresentEvent:(id)a0;
- (void)_showCaptiveSheet:(id)a0;
- (void)_startClient;
- (void)handleCompleteNotificationWithRedirectURLtype:(long long)a0 result:(long long)a1;
- (void)handleWebNavigationWithCompletionHandler:(id /* block */)a0;
- (void)scrapeCredentialsUsingPOSTMessage:(id)a0 loginURL:(id)a1;
- (void)showWebSheet;

@end
