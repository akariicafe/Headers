@class NSString, AMSBagKeySet, AMSPurchaseInfo, AMSURLSession;
@protocol AMSBagProtocol, AMSPurchaseDelegate;

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (readonly, nonatomic) AMSURLSession *session;
@property (weak, nonatomic) id<AMSPurchaseDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)_runDialogRequest:(id)a0;
- (void)authenticateTask:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (id)_promptForAccount;
- (id)performPurchase;
- (id)initWithPurchase:(id)a0 bag:(id)a1;
- (void)_regenerateFraudScoreWithInfo:(id)a0 bag:(id)a1 action:(unsigned long long)a2;
- (void)generateFraudScoreWithInfo:(id)a0 bag:(id)a1;
- (BOOL)_shouldAttemptCardEnrollment;
- (BOOL)_shouldPreauthenticatePurchase:(id)a0;
- (id)_performPreauthenticate;
- (id)_performPurchaseWithError:(id *)a0;
- (id)_runAuthenticateRequest:(id)a0;
- (id)_recordEngagementEventWithInfo:(id)a0 result:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
