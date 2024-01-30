@class AAUIServerUIHookHandler, NSString, AKAppleIDServerResourceLoadDelegate, NSURLRequest, RemoteUIController, AIDAAccountManager, ACAccount, UIViewController;
@protocol AAUIGrandSlamRemoteUIPresenterDelegate;

@interface AAUIGrandSlamRemoteUIPresenter : NSObject <RemoteUIControllerDelegate> {
    RemoteUIController *_remoteUIController;
    AIDAAccountManager *_accountManager;
    ACAccount *_grandSlamAccount;
    AKAppleIDServerResourceLoadDelegate *_resourceLoadDelegate;
    NSURLRequest *_currentRequest;
    AAUIServerUIHookHandler *_aauiServerUIHookHandler;
}

@property (weak, nonatomic) UIViewController *presenter;
@property (weak, nonatomic) id<AAUIGrandSlamRemoteUIPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_appleAccount;
- (id)_grandSlamAccount;
- (id)_authContext;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1 forRequest:(id)a2;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 didPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (id)remoteUIController:(id)a0 createPageWithName:(id)a1 attributes:(id)a2;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (void)loadRequest:(id)a0;
- (id)_accountStore;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1 hooks:(id)a2;
- (void)_getServerUILoadDelegateWithCompletion:(id /* block */)a0;
- (void)_addHeadersToRequest:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_isAuthError:(id)a0;

@end
