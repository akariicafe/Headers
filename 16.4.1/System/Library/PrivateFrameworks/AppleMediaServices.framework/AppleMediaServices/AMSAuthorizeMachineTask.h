@class AMSProcessInfo, NSString, NSNumber, AMSBagKeySet, ACAccount, AMSURLSession, AMSAuthenticateRequest;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSAuthorizeMachineTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) AMSAuthenticateRequest *authenticateRequest;
@property (nonatomic, getter=isDeauthorize) BOOL deauthorize;
@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) ACAccount *validAccount;
@property unsigned long long authorizeReason;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (copy) NSNumber *familyMemberAccountDSID;
@property (retain, nonatomic) NSString *logKey;
@property (weak, nonatomic) id<AMSRequestPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)account;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)_authenticate;
- (id)_buildRequest;
- (id)_buildRequestParametersWithError:(id *)a0;
- (id)_buildRequestTask;
- (id)_checkRequestThrottle;
- (id)_keybagSyncStringForAccount:(id)a0 withTransactionType:(unsigned int)a1 error:(id *)a2;
- (id)_performAuthorization;
- (id)initWithAccount:(id)a0 authorizeReason:(unsigned long long)a1 bag:(id)a2;
- (id)initWithUsername:(id)a0 authorizeReason:(unsigned long long)a1 bag:(id)a2 presentationDelegate:(id)a3;
- (id)performAuthorization;
- (id)performDeauthorization;

@end
