@class AMSPaymentSheetAssetCache, AMSPurchaseInfo, AMSFinancePaymentSheetResponse, NSString, NSDictionary, AMSPaymentSheetRequest, NSObject, AMSPromise, AKAppleIDAuthenticationContext, NSMutableArray, _PaymentSheetState;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (retain, nonatomic) AMSPaymentSheetAssetCache *assetCache;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain, nonatomic) AMSPromise *paymentSheetPromise;
@property (readonly, nonatomic) AMSFinancePaymentSheetResponse *paymentSheetResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presentationQueue;
@property (readonly, nonatomic) AMSPaymentSheetRequest *request;
@property (retain, nonatomic) _PaymentSheetState *state;
@property (retain, nonatomic) NSMutableArray *userActions;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *metricsDictionary;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_authenticationContextForRequest:(id)a0;
+ (BOOL)_shouldCompanionAuthFallbackToPasswordForError:(id)a0;

- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationController:(id)a0 didEncounterAuthorizationEvent:(unsigned long long)a1;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;
- (id)_metricsEvent;
- (BOOL)_presentCompanionAuthenticationSheetWithPaymentRequest:(id)a0 purchaseResult:(id)a1 error:(id *)a2;
- (float)_challengeSigningDelay;
- (id)_paymentRequest;
- (BOOL)_presentPaymentSheetWithPaymentRequest:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)perform;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
