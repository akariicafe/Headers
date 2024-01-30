@class NSString, AMSBagKeySet, AMSPurchaseInfo, AMSURLSession;
@protocol AMSBagProtocol, AMSPurchaseDelegate;

@interface AMSPurchaseTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSAuthenticateTaskDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (readonly, nonatomic) AMSURLSession *session;
@property (weak, nonatomic) id<AMSPurchaseDelegate> delegate;
@property (retain, nonatomic) Class paymentSheetTaskClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (BOOL)shouldPreauthenticatePurchaseWithInfo:(id)a0;

- (void).cxx_destruct;
- (id)performPurchase;
- (void)performPreActionRequestForTaskInfo:(id)a0 requiresAuthorization:(BOOL)a1 error:(id *)a2;
- (id)_performPurchaseWithError:(id *)a0;
- (id)_promptForAccount;
- (id)_recordEngagementEventWithInfo:(id)a0 result:(id)a1 error:(id)a2;
- (void)_regenerateFDSWithInfo:(id)a0 bag:(id)a1 action:(unsigned long long)a2;
- (id)_runAuthenticateRequest:(id)a0;
- (id)_runDialogRequest:(id)a0;
- (BOOL)_shouldAttemptCardEnrollment;
- (void)authenticateTask:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (id)filterResponseDictionary:(id)a0;
- (void)generateFDSWithInfo:(id)a0 bag:(id)a1;
- (id)initWithPurchase:(id)a0 bag:(id)a1;
- (id)performPreauthenticate;
- (id)preauthenticateOptions;

@end
