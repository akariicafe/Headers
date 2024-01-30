@class AKAppleIDServerResourceLoadDelegate, NSString, AAUIRemoteUIController, RUIObjectModel, ACAccount, AKAppleIDAuthenticationController;

@interface AAUIBeneficiaryClaimRemoteUIController : NSObject <RemoteUIControllerDelegate> {
    ACAccount *_grandSlamAccount;
    ACAccount *_appleAccount;
    AKAppleIDServerResourceLoadDelegate *_serverUILoadDelegate;
    NSString *_secondaryToken;
    AKAppleIDAuthenticationController *_authController;
    AAUIRemoteUIController *_benefeciaryClaimRemoteUIController;
    RUIObjectModel *_currentObjectModel;
    NSString *_claimCode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleObjectModelChangeForController:(id)a0 objectModel:(id)a1 isModal:(BOOL)a2;
- (BOOL)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2;
- (id)_authController;
- (void)remoteUIController:(id)a0 didRefreshObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void).cxx_destruct;
- (id)remoteUIController:(id)a0 createPageWithName:(id)a1 attributes:(id)a2;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (id)_grandSlamAccount;
- (id)initWithAppleAccount:(id)a0 claimCode:(id)a1;
- (void)_addHeadersToRequest:(id)a0;
- (void)_cancelButtonForRemoteObjectModelWasTapped:(id)a0;
- (void)_getServerUILoadDelegateWithCompletion:(id /* block */)a0;
- (void)presentRemoteUIFromNavigationController:(id)a0 withCompletion:(id /* block */)a1;

@end
