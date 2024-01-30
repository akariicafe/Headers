@class NSString;

@interface AMSPurchaseProtocolHandler : AMSURLProtocolHandler <NSURLSessionDelegate, AMSURLProtocolDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)reversePushSamplingPercentageForTask:(id)a0;

- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (id)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)_locateBuyParamsFromResponse:(id)a0 selectedAction:(id)a1 purchaseInfo:(id)a2;
- (void)_updatePasswordSettingWithBuyParams:(id)a0 account:(id)a1;
- (void)_syncDiversityBagFromResponse:(id)a0 purchaseInfo:(id)a1;
- (BOOL)_shouldRetryForFailureAction:(id)a0 response:(id)a1 task:(id)a2 decodedObject:(id)a3 responseDictionary:(id)a4;
- (void)setSession:(id)a0;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (void)_syncKeybagFromResponse:(id)a0 purchaseInfo:(id)a1;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)_updateSubscriptionStatusFromBody:(id)a0 account:(id)a1;

@end
