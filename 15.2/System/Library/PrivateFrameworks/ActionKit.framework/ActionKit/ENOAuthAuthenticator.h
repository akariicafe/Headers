@class NSArray, NSString, ENCredentialStore, NSMutableData, NSURLResponse;
@protocol ENAuthenticatorDelegate;

@interface ENOAuthAuthenticator : NSObject <ENAuthenticator>

@property (nonatomic) BOOL inProgress;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSArray *profiles;
@property (copy, nonatomic) NSString *currentProfile;
@property (retain, nonatomic) ENCredentialStore *credentialStore;
@property (copy, nonatomic) NSString *tokenSecret;
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

+ (id)deviceDescription;
+ (id)queryStringFromParameters:(id)a0;
+ (id)parametersFromQueryString:(id)a0;

- (void)failedWithError:(id)a0;
- (void).cxx_destruct;
- (void)receivedData:(id)a0;
- (void)handleDidBecomeActive;
- (void)didFinishLoading;
- (id)callbackScheme;
- (void)authenticate;
- (BOOL)handleOpenURL:(id)a0;
- (void)emptyCookieJar;
- (void)startOauthAuthentication;
- (id)oauthCallback;
- (id)userAuthorizationURLStringWithParameters:(id)a0;
- (void)receivedResponse:(id)a0;
- (void)completeAuthenticationWithCredentials:(id)a0 usesLinkedAppNotebook:(BOOL)a1;
- (void)completeAuthenticationWithError:(id)a0;
- (void)switchProfile;
- (void)updateCurrentBootstrapProfileWithName:(id)a0;
- (void)enableIsActiveBecauseOfCallback;
- (void)disableIsActiveBecauseOfCallback;
- (BOOL)canHandleSwitchProfileURL:(id)a0;
- (void)gotCallbackURL:(id)a0;
- (void)getOAuthTokenForURL:(id)a0;

@end
