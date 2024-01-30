@class NSString, AMSBuyParams, AMSURLRequestProperties, AMSURLSession;

@interface AMSFinanceExpressCheckoutResponse : AMSFinancePaymentSheetResponse <NSURLSessionDelegate, AMSURLProtocolDelegate>

@property (nonatomic) long long expressCheckoutMode;
@property (retain, nonatomic) AMSURLRequestProperties *parentProperties;
@property (retain, nonatomic) AMSURLSession *session;
@property (retain, nonatomic) AMSBuyParams *buyParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isExpressCheckoutEnabledForBag:(id)a0;
+ (BOOL)_isExpressCheckoutRecordUserChoiceEnabledForBag:(id)a0;
+ (BOOL)_isFlagEnabled;
+ (BOOL)isEligibleForBag:(id)a0;
+ (BOOL)isExpressCheckoutPayload:(id)a0;

- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)_paymentChoicesBodyForCardData:(id)a0;
- (id)_buyParamFromPayload:(id)a0;
- (id)_createPageEventForPaymentChoices:(id)a0;
- (long long)_expressCheckoutModeFromPayload:(id)a0;
- (id)_fetchCardDataForMerchantIdentifier:(id)a0 countryCode:(id)a1;
- (id)_paymentChoicesForCardData:(id)a0;
- (id)_paymentChoicesRequestForCardData:(id)a0;
- (id)_presentEngagementForPaymentChoices:(id)a0;
- (id)_recordUserChoiceForEngagementResult:(id)a0;
- (id)_recordUserChoiceRequest;
- (id)initWithResponseDictionary:(id)a0 taskInfo:(id)a1;
- (id)performWithTaskInfo:(id)a0;
- (void)removeExpressCheckoutSession;

@end
