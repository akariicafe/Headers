@class NSString, UINavigationController, NSSet, RUILoader, NSMutableArray, ACAccount, UIViewController, ACAccountStore;
@protocol AAUIGenericTermsRemoteUIDelegate;

@interface AAUIGenericTermsRemoteUI : NSObject <RUILoaderDelegate, RUIObjectModelDelegate> {
    UINavigationController *_parentNavController;
    UINavigationController *_genericTermsUIViewController;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    NSSet *_termsEntries;
    BOOL _isModal;
    BOOL _isPreferringPassword;
    BOOL _isPresentingGenericTermsUIModally;
    BOOL _didRenewCredentials;
}

@property (weak, nonatomic) id<AAUIGenericTermsRemoteUIDelegate> delegate;
@property (readonly, weak, nonatomic) UIViewController *originatingViewController;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 inStore:(id)a1;
- (void)presentFromViewController:(id)a0 modal:(BOOL)a1;
- (id)sessionConfigurationForLoader:(id)a0;
- (void)loader:(id)a0 didFailWithError:(id)a1;
- (void)loader:(id)a0 receivedObjectModel:(id)a1 actionSignal:(unsigned long long)a2;
- (id)parentViewControllerForObjectModel:(id)a0;
- (id)viewControllerForAlertPresentation;
- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)a0 page:(id)a1;
- (void)objectModelPressedBack:(id)a0;
- (void)objectModel:(id)a0 pressedLink:(id)a1 httpMethod:(id)a2;
- (void)objectModel:(id)a0 pressedButton:(id)a1 attributes:(id)a2;
- (id)initWithAccount:(id)a0 inStore:(id)a1 termsEntries:(id)a2;
- (void)_loadRequestPreferringPassword:(BOOL)a0;
- (void)_addHeadersToRequest:(id)a0;
- (void)_cleanUpAndDismissWithSuccess:(BOOL)a0 agreeURL:(id)a1;
- (void)_popObjectModelAnimated:(BOOL)a0;
- (void)_cleanupRUILoader;
- (BOOL)_isUnauthorizedError:(id)a0;
- (void)_renewCredentialsWithCompletion:(id /* block */)a0;
- (void)_displayConnectionErrorAndDismiss;
- (void)_sendAcceptedTermsInfo:(id)a0;
- (void)_agreeToTermsWithURLString:(id)a0 preferPassword:(BOOL)a1 completion:(id /* block */)a2;
- (id)_authContextForRenewCredentials;

@end
