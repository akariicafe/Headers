@class FACircleContext, NSXPCConnection;
@protocol FAFamilyPresenterHostProtocol;

@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
}

@property (retain, nonatomic) id<FAFamilyPresenterHostProtocol> hostProxy;

- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_account;
- (void)dealloc;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_setupRemoteProxy;
- (void)_showFamilyFlow;
- (void)_dismissAndExit;
- (void)_handleSignedOutAcceptInvitation;
- (void)_invalidateLookupConnection;
- (void)_main_dismissAndExit;

@end
