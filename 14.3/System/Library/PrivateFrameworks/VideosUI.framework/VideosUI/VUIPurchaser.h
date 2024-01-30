@class VUIPurchaseRequest, NSString, AMSPurchaseQueue, NSMutableSet, SSEventMonitor;

@interface VUIPurchaser : NSObject <AMSPurchaseResponseProtocol, SSEventMonitorDelegate>

@property (retain, nonatomic) NSMutableSet *purchasingParamsSet;
@property (retain, nonatomic) AMSPurchaseQueue *purchaseQueue;
@property (retain, nonatomic) SSEventMonitor *eventMonitor;
@property (retain, nonatomic) VUIPurchaseRequest *interruptedPurchaseRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPurchaser;

- (id)init;
- (void)eventMonitor:(id)a0 receivedEventWithName:(id)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isInterruptedPurchaseFulfilledBySSPurchaseResponse:(id)a0;
- (id)_getAdamIdFromBuyParams:(id)a0;
- (void)enqueuePurchase:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isPurchasing:(id)a0;
- (void)rememberPurchasing:(id)a0;
- (void)forgetPurchasing:(id)a0;

@end
