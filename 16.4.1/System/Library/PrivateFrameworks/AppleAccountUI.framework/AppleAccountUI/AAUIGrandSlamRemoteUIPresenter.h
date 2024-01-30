@class RUIServerHookHandler, NSString, AAUIServerHookHandlerDelegate, AKAppleIDServerResourceLoadDelegate, NSURLRequest, RemoteUIController, AIDAAccountManager, ACAccount, UIViewController;
@protocol AAUIGrandSlamRemoteUIPresenterDelegate;

@interface AAUIGrandSlamRemoteUIPresenter : NSObject <RemoteUIControllerDelegate> {
    RemoteUIController *_remoteUIController;
    AIDAAccountManager *_accountManager;
    ACAccount *_grandSlamAccount;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSURLRequest *_currentRequest;
    RUIServerHookHandler *_serverUIHookHandler;
    AAUIServerHookHandlerDelegate *_serverUIHookHandlerDelegate;
    BOOL _isEndOfFlow;
}

@property (weak, nonatomic) UIViewController *presenter;
@property (weak, nonatomic) id<AAUIGrandSlamRemoteUIPresenterDelegate> delegate;
@property (nonatomic, getter=isModalInPresentation) BOOL modalInPresentation;
@property (nonatomic) BOOL showCancelInModalPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (id)_accountStore;
- (void)remoteUIController:(id)a0 didRefreshObjectModel:(id)a1;
- (id)_appleAccount;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (void)loadRequest:(id)a0;
- (id)_authContext;
- (id)remoteUIController:(id)a0 createPageWithName:(id)a1 attributes:(id)a2;
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (void)remoteUIController:(id)a0 didPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (id)_grandSlamAccount;
- (void)loadRequest:(id)a0 completion:(id /* block */)a1;
- (void)_addHeadersToRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)_addRemoteUIEventHandler;
- (BOOL)_checkFlowEndForResponse:(id)a0;
- (void)_getServerUILoadDelegateWithCompletion:(id /* block */)a0;
- (BOOL)_isAuthError:(id)a0;
- (id)_remoteUICancelButtonForPage:(id)a0;
- (id)initWithAccountManager:(id)a0 hookType:(unsigned long long)a1 presenter:(id)a2;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1 hooks:(id)a2;

@end
