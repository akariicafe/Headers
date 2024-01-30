@class AMSDelegateAuthenticateRequest, NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSURLSession, AMSBiometricsSignatureResult;
@protocol AMSBagProtocol;

@interface AMSDelegateAuthenticateTask : AMSTask <AMSBagConsumer_Project, AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *formData;
@property (readonly, nonatomic) AMSDelegateAuthenticateRequest *request;
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)addRequiredBagKeysToAggregator:(id)a0;

- (id)_performDelegateAuthenticationWithError:(id *)a0;
- (id)_encodedURLRequestWithError:(id *)a0;
- (id)initWithDelegateAuthenticateRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)initWithBag:(id)a0 account:(id)a1;
- (id)performDelegateAuthentication;
- (void).cxx_destruct;
- (void)_init;

@end
