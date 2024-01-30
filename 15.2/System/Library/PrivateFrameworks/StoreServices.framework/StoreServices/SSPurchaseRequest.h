@class NSArray, NSString, NSMutableSet, SSPurchaseManager;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {
    NSArray *_purchases;
    id /* block */ _completionBlock;
    NSMutableSet *_openPurchaseIdentifiers;
    id /* block */ _purchaseBlock;
    id /* block */ _purchaseResponseBlock;
    SSPurchaseManager *_purchaseManager;
}

@property (nonatomic) BOOL createsDownloads;
@property (nonatomic) BOOL createsJobs;
@property (nonatomic, getter=isPlaybackRequest) BOOL playbackRequest;
@property (nonatomic) BOOL shouldValidatePurchases;
@property (nonatomic) id<SSPurchaseRequestDelegate> delegate;
@property (readonly) NSArray *purchases;
@property (nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest;
@property (nonatomic) BOOL needsAuthentication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)start;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithPurchases:(id)a0;
- (void)_addPurchasesToManager;
- (void)_finishPurchasesWithResponses:(id)a0;
- (id)_purchaseForUniqueIdentifier:(long long)a0;
- (void)cancel;
- (void)startWithPurchaseBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)startWithPurchaseResponseBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)purchaseManager:(id)a0 didFinishPurchasesWithResponses:(id)a1;

@end
