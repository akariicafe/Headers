@class RUIServerHookHandler, NSString, UINavigationController, NSSet, NSDictionary, ACAccount, RemoteUIController, AAUIServerHookHandlerDelegate, UIViewController, ACAccountStore;
@protocol AAUIGenericTermsRemoteUIDelegate;

@interface AAUIGenericTermsRemoteUI : NSObject <RemoteUIControllerDelegate> {
    UINavigationController *_parentNavController;
    UINavigationController *_genericTermsUIViewController;
    NSSet *_termsEntries;
    BOOL _isModal;
    BOOL _isPreferringPassword;
    BOOL _didRenewCredentials;
}

@property (retain, nonatomic) AAUIServerHookHandlerDelegate *hookHandlerDelegate;
@property (retain, nonatomic) RemoteUIController *remoteUIController;
@property (retain, nonatomic) RUIServerHookHandler *serverHookHandler;
@property (weak, nonatomic) id<AAUIGenericTermsRemoteUIDelegate> delegate;
@property (readonly, weak, nonatomic) UIViewController *originatingViewController;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSDictionary *additionalHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_sessionConfiguration;
- (void)remoteUIController:(id)a0 didPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (id)initWithAccount:(id)a0 inStore:(id)a1;
- (void)presentFromViewController:(id)a0 modal:(BOOL)a1;
- (id)_authContextForRenewCredentials;
- (void)_loadRequestPreferringPassword:(BOOL)a0;
- (void)_addHeadersToRequest:(id)a0;
- (void)_agreeToTermsWithURLString:(id)a0 preferPassword:(BOOL)a1 completion:(id /* block */)a2;
- (void)_cleanUpAndDismissWithSuccess:(BOOL)a0 agreeURL:(id)a1;
- (void)_cleanupRUILoader;
- (void)_displayConnectionErrorAndDismiss;
- (BOOL)_isUnauthorizedError:(id)a0;
- (void)_renewCredentialsWithCompletion:(id /* block */)a0;
- (void)_reportTermsUserAction:(id)a0 agreeUrl:(id)a1;
- (void)_sendAcceptedTermsInfo:(id)a0;
- (void)_setupActionForButtons;
- (id)_viewControllerForAlertPresentation;
- (id)initWithAccount:(id)a0 inStore:(id)a1 termsEntries:(id)a2;

@end
