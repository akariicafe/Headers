@class FACircleContext, NSXPCConnection;
@protocol FAFamilyPresenterHostProtocol;

@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
}

@property (retain, nonatomic) id<FAFamilyPresenterHostProtocol> hostProxy;

- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_account;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setupRemoteProxy;
- (void)_showFamilyFlow;
- (void)_dismissAndExit;
- (void)_handleSignedOutAcceptInvitation;
- (void)_invalidateLookupConnection;
- (void)_main_dismissAndExit;

@end
