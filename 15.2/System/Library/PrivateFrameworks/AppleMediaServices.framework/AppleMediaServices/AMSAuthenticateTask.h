@class AMSAuthenticateOptions, NSString, NSDictionary, AMSBagKeySet, NSUUID, NSNumber;
@protocol AMSBagProtocol, AMSAuthenticateTaskDelegate;

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) NSDictionary *initialAuthenticationResults;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (weak, nonatomic) id<AMSAuthenticateTaskDelegate> delegate;
@property (readonly, nonatomic) AMSAuthenticateOptions *options;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *multiUserToken;
@property (retain, nonatomic) NSString *rawPassword;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSNumber *DSID;
@property (retain, nonatomic) NSUUID *homeIdentifier;
@property (retain, nonatomic) NSUUID *homeUserIdentifier;
@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createFallbackBag;
+ (BOOL)_loadCreateAppleIDwithClientInfo:(id)a0 bag:(id)a1 error:(id *)a2;
+ (void)_updateAccountPasswordUsingSecondaryAccounts:(id)a0;
+ (id)createBagForSubProfile;

- (id)initWithRequest:(id)a0;
- (id)homeID;
- (id)_runDialogRequest:(id)a0;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)initWithAccount:(id)a0 options:(id)a1 bag:(id)a2;
- (id)_handleDialogFromError:(id)a0;
- (id)_accountForAuthenticationWithError:(id *)a0;
- (BOOL)_runCreateAccountDialogWithError:(id *)a0;
- (id)_attemptMultiUserTokenAuthenticationForAccount:(id)a0;
- (id)_accountStoreForAuthentication;
- (id)_attemptPasswordReuseAuthenticationForAccount:(id)a0 error:(id *)a1;
- (id)_createAuthKitUpdateTaskForAccount:(id)a0;
- (id)_performAuthenticationUsingAccount:(id)a0 credentialSource:(unsigned long long)a1 error:(id *)a2;
- (void)_updateAccountWithProvidedInformation:(id)a0;
- (id)initWithAuthenticationResults:(id)a0 options:(id)a1;
- (id)_sanitizeError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setHomeID:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)performAuthentication;

@end
