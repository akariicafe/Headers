@class NSString, NSDictionary, IKAppContext;

@interface VUIActionCommerceTransaction : VUIAction

@property (retain, nonatomic) NSString *commerceActionRef;
@property (copy, nonatomic) NSDictionary *contextData;
@property (weak, nonatomic) IKAppContext *appContext;

+ (void)displayConfirmationUIWithTitle:(id)a0 andBody:(id)a1;
+ (id)extractSalableAdamIDFromBuyParams:(id)a0;
+ (BOOL)isTransactionInProgressForBuyParams:(id)a0;
+ (BOOL)_useAMSPurchase;
+ (void)displayConfirmationUIWithTitle:(id)a0 andBody:(id)a1 completion:(id /* block */)a2;
+ (id)_extractCanonicalIDFromTransactionOffer:(id)a0;
+ (id)_skuDownloadKind:(long long)a0;
+ (void)_addTransaction:(id)a0 forBuyParams:(id)a1;
+ (void)_saveInterruptedPurchaseTransactionContextInfo:(id)a0 canonicalID:(id)a1 error:(id)a2;
+ (void)_removeTransactionForBuyParams:(id)a0;

- (void).cxx_destruct;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithActionRef:(id)a0 contextData:(id)a1 appContext:(id)a2;
- (void)_postPurchaseNotification:(id)a0 error:(id)a1;
- (void)_startTransactionOfOffer:(id)a0 withAppContext:(id)a1 andCompletionHandler:(id /* block */)a2;
- (void)_startPurchaseFlowForOffer:(id)a0 playWhenDone:(BOOL)a1 appContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)_startSubscribeFlowForOffer:(id)a0 completionHandler:(id /* block */)a1;
- (id)_preflightManagerForTransactionOffer:(id)a0;
- (void)_notifyDidStartPurchaseType:(long long)a0 transactionOffer:(id)a1;
- (void)_notifyDidEndPurchaseType:(long long)a0 transactionOffer:(id)a1 withError:(id)a2;
- (void)_handleSubscriptionCompletionForOffer:(id)a0 shouldInitiateFamilySetup:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_handleBuyCompletionForOffer:(id)a0 appContext:(id)a1 shouldPlayWhenDone:(BOOL)a2 serverResponse:(id)a3 completionHandler:(id /* block */)a4;
- (void)_showUIConfirmationForSubTransaction:(id)a0 completion:(id /* block */)a1;
- (void)_recordLog:(id)a0 withBuyParams:(id)a1;
- (void)_postTransactionDidStartNotificationWithBuyParams:(id)a0;
- (void)_postSubscriptionNotificationWithChannelName:(id)a0 buyParams:(id)a1 error:(id)a2;

@end
