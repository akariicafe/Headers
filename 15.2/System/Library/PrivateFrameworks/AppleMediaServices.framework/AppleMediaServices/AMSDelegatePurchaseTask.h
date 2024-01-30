@class AMSURLTaskInfo, AMSDelegatePurchaseRequest, AMSURLResult, AMSBiometricsSignatureRequest, AMSPaymentSheetResult;

@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask

@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest;
@property (retain, nonatomic) AMSURLResult *delegateAuthResult;
@property (retain, nonatomic) AMSURLTaskInfo *delegateAuthTaskInfo;
@property (retain, nonatomic) AMSPaymentSheetResult *paymentSheetResult;
@property (readonly, nonatomic) AMSDelegatePurchaseRequest *request;

- (id)_parseFormDataFromResult:(id)a0;
- (void)_parseBiometricsSignatureRequestFromTask:(id)a0;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performPaymentSheetTask;
- (id)_performAuthenticateTaskWithPaymentSheetResult:(id)a0;
- (id)initWithDelegatePurchaseRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)performDelegatePurchase;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;

@end
