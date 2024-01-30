@class AMSPaymentSheetAssetCache, AMSPurchaseInfo, NSString, NSDictionary, AMSPaymentSheetRequest, NSMutableArray, AMSPromise, AKAppleIDAuthenticationContext, NSObject, _PaymentSheetState;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPaymentSheetTask : AMSTask <PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate>

@property (retain, nonatomic) AMSPaymentSheetAssetCache *assetCache;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain, nonatomic) AMSPromise *paymentSheetPromise;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presentationQueue;
@property (retain, nonatomic) _PaymentSheetState *state;
@property (retain, nonatomic) AMSPaymentSheetRequest *request;
@property (retain, nonatomic) NSMutableArray *userActions;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *metricsDictionary;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_authenticationContextForRequest:(id)a0;

- (id)perform;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)_paymentRequest;
- (BOOL)_presentPaymentSheetWithPaymentRequest:(id)a0 error:(id *)a1;
- (float)_challengeSigningDelay;
- (void)paymentAuthorizationControllerDidFinish:(id)a0;
- (void)paymentAuthorizationController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (id)_metricsEvent;
- (void)paymentAuthorizationController:(id)a0 didEncounterAuthorizationEvent:(unsigned long long)a1;
- (void)paymentAuthorizationController:(id)a0 willFinishWithError:(id)a1;

@end
