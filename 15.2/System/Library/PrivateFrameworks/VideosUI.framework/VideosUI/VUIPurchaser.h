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

+ (id)sharedInstance;

- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleEngagementRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)eventMonitor:(id)a0 receivedEventWithName:(id)a1 userInfo:(id)a2;
- (void)enqueuePurchase:(id)a0 withCompletion:(id /* block */)a1;
- (void)rememberPurchasing:(id)a0;
- (void)forgetPurchasing:(id)a0;
- (id)_getAdamIdFromBuyParams:(id)a0;
- (BOOL)_isInterruptedPurchaseFulfilledBySSPurchaseResponse:(id)a0;
- (void)postCrossProcessNotificationWithBuyParams:(id)a0 error:(id)a1;
- (BOOL)isPurchasing:(id)a0;
- (void)didCompleteInterruptedBuyWithResponse:(id)a0 error:(id)a1;

@end
