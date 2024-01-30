@class NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSBiometricsTokenUpdateTask : AMSTask <AMSSecurityClientInterface, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSURLSession *session;
@property (nonatomic) BOOL shouldPromptUser;
@property (readonly, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalDialogMetrics;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (weak, nonatomic) id<AMSRequestPresentationDelegate> presentationDelegate;
@property (nonatomic) BOOL shouldGenerateKeysOnly;
@property (nonatomic) BOOL shouldRequestConfirmation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)performUpdate;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccount:(id)a0;
- (id)_sendRequestToDaemon;

@end
