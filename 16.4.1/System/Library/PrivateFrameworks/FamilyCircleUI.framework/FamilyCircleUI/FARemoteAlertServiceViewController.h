@class FACircleContext, NSXPCConnection;
@protocol FAFamilyPresenterHostProtocol;

@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
}

@property (retain, nonatomic) id<FAFamilyPresenterHostProtocol> hostProxy;

- (id)_account;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleButtonActions:(id)a0;
- (void)_dismissAndExit;
- (void)_showFamilyFlow;
- (void)_handleSignedOutAcceptInvitation;
- (void)_invalidateLookupConnection;
- (void)_main_dismissAndExit;
- (void)_setupRemoteProxy;

@end
