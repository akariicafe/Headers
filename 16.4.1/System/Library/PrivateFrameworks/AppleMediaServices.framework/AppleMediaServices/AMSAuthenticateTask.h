@class NSUUID, NSString, NSDictionary, AMSAuthenticateOptions, AMSBagKeySet, AMSPromise, NSMutableArray, NSNumber;
@protocol AMSBagProtocol, AMSAuthenticateTaskDelegate;

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) NSDictionary *initialAuthenticationResults;
@property (retain, nonatomic) AMSPromise *resultPromise;
@property (retain, nonatomic) NSMutableArray *errors;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (weak, nonatomic) id<AMSAuthenticateTaskDelegate> delegate;
@property (readonly, nonatomic) AMSAuthenticateOptions *options;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *multiUserToken;
@property (copy, nonatomic) NSString *rawPassword;
@property (copy, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSUUID *homeIdentifier;
@property (retain, nonatomic) NSUUID *homeUserIdentifier;
@property (copy, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_createFallbackBag;
+ (BOOL)_loadCreateAppleIDwithClientInfo:(id)a0 bag:(id)a1 error:(id *)a2;
+ (void)_updateAccountPasswordUsingSecondaryAccounts:(id)a0;

- (id)initWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)_sanitizeError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_accountForAuthenticationWithError:(id *)a0;
- (id)_accountStoreForAuthentication;
- (void)_attemptMultiUserTokenAuthenticationForAccount:(id)a0 completion:(id /* block */)a1;
- (id)_attemptPasswordReuseAuthenticationForAccount:(id)a0;
- (id)_createAuthKitUpdateTaskForAccount:(id)a0;
- (void)_finishWithVerifiedAccount:(id)a0 andAuthKitUpdateResult:(id)a1;
- (id)_handleDialogFromError:(id)a0;
- (void)_performAuthenticationAndGeneratePasswordWithAccount:(id)a0;
- (id)_performAuthenticationUsingAccount:(id)a0 credentialSource:(unsigned long long)a1;
- (void)_performAuthenticationWithInitialResultsAndAccount:(id)a0;
- (void)_postFollowUpForFailedAuthenticationWithAccount:(id)a0;
- (void)_processAuthKitUpdateResult:(id)a0;
- (void)_runCreateAccountDialogWithCompletion:(id /* block */)a0;
- (id)_runDialogRequest:(id)a0;
- (void)_updateAccountWithProvidedInformation:(id)a0;
- (id)homeID;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)initWithAccount:(id)a0 options:(id)a1 bag:(id)a2;
- (id)initWithAuthenticationResults:(id)a0 options:(id)a1;
- (id)initWithAuthenticationResults:(id)a0 options:(id)a1 bag:(id)a2;
- (id)performAuthentication;
- (void)setHomeID:(id)a0;

@end
