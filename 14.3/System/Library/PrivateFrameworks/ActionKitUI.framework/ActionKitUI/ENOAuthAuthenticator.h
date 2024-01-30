@class NSString, NSArray, UINavigationController, ENOAuthViewController, NSURLResponse, ENCredentialStore, NSMutableData, UIViewController;
@protocol ENAuthenticatorDelegate;

@interface ENOAuthAuthenticator : NSObject <ENLoadingViewControllerDelegate, ENOAuthViewControllerDelegate, ENAuthenticator>

@property (nonatomic) BOOL inProgress;
@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) UIViewController *hostViewController;
@property (retain, nonatomic) UINavigationController *authenticationViewController;
@property (retain, nonatomic) ENOAuthViewController *oauthViewController;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSArray *profiles;
@property (copy, nonatomic) NSString *currentProfile;
@property (retain, nonatomic) ENCredentialStore *credentialStore;
@property (copy, nonatomic) NSString *tokenSecret;
@property (nonatomic) BOOL isMultitaskLoginDisabled;
@property (nonatomic) BOOL isSwitchingInProgress;
@property (nonatomic) BOOL isActiveBecauseOfCallback;
@property (nonatomic) BOOL userSelectedLinkedAppNotebook;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (retain, nonatomic) NSURLResponse *response;
@property (weak, nonatomic) id<ENAuthenticatorDelegate> delegate;
@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL supportsLinkedAppNotebook;
@property (nonatomic) BOOL useWebAuthenticationOnly;
@property (nonatomic) BOOL preferRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceIdentifier;
+ (id)deviceDescription;
+ (id)queryStringFromParameters:(id)a0;
+ (id)parametersFromQueryString:(id)a0;
+ (id)scrubString:(id)a0 usingRegex:(id)a1 withMaxLength:(unsigned short)a2;

- (id)init;
- (void).cxx_destruct;
- (void)loadingViewControllerDidCancel:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)dealloc;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)handleDidBecomeActive;
- (id)callbackScheme;
- (BOOL)handleOpenURL:(id)a0;
- (void)completeAuthenticationWithError:(id)a0;
- (void)oauthViewControllerDidCancel:(id)a0;
- (void)oauthViewControllerDidSwitchProfile:(id)a0;
- (void)oauthViewController:(id)a0 didFailWithError:(id)a1;
- (void)oauthViewController:(id)a0 receivedOAuthCallbackURL:(id)a1;
- (void)emptyCookieJar;
- (void)authenticateWithViewController:(id)a0;
- (void)startOauthAuthentication;
- (id)oauthCallback;
- (id)userAuthorizationURLStringWithParameters:(id)a0;
- (void)openOAuthViewControllerWithURL:(id)a0;
- (void)completeAuthenticationWithCredentials:(id)a0 usesLinkedAppNotebook:(BOOL)a1;
- (void)switchProfile;
- (void)updateCurrentBootstrapProfileWithName:(id)a0;
- (void)verifyCFBundleURLSchemes;
- (void)enableIsActiveBecauseOfCallback;
- (void)disableIsActiveBecauseOfCallback;
- (BOOL)canHandleSwitchProfileURL:(id)a0;
- (void)gotCallbackURL:(id)a0;
- (void)getOAuthTokenForURL:(id)a0;

@end
