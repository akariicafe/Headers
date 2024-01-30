@class NSString, AMSPurchaseQueueBatchList, AMSBagKeySet, AMSPurchaseQueueConfiguration, NSObject, AMSThreadSafeSet;
@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) AMSPurchaseQueueBatchList *batches;
@property (retain, nonatomic) AMSPurchaseQueueConfiguration *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) AMSThreadSafeSet *preAuthenticatedDSIDs;
@property (nonatomic) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (BOOL)isSuspended;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)enquePurchases:(id)a0;
- (id)_createPurchasePromiseForTask:(id)a0 purchase:(id)a1;
- (void)_handleNextPurchase;
- (void)_handleResult:(id)a0 error:(id)a1 forPurchase:(id)a2;
- (id)_performPreauthenticateForPurchaseTask:(id)a0;
- (id)_processPurchase:(id)a0;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)setSuspended:(BOOL)a0 logUUID:(id)a1;

@end
