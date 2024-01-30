@class NSLock, NSString, AMSPurchaseQueueConfiguration, AMSBagKeySet, AMSURLSession, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer> {
    AMSURLSession *_session;
}

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) NSMutableArray *batches;
@property (retain, nonatomic) AMSPurchaseQueueConfiguration *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL isSuspeneded;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)_handleNextPurchase;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)_processPurchase:(id)a0;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)enquePurchases:(id)a0;
- (void)setSuspended:(BOOL)a0 logUUID:(id)a1;

@end
