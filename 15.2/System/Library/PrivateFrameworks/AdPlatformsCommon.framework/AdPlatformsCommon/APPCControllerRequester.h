@class NSMutableDictionary, NSUUID, APUnfairLock, NSError, APControllerRequesterCoordinator, NSString;

@interface APPCControllerRequester : NSObject <APControllerReqestCoordinatorDelegate>

@property (nonatomic) BOOL invalid;
@property (retain, nonatomic) NSError *lastError;
@property (retain, nonatomic) NSMutableDictionary *requestCompletionBlockByRequestID;
@property (retain, nonatomic) APUnfairLock *lock;
@property (copy, nonatomic) id /* block */ newPromotedContentsDeliveryBlock;
@property (retain, nonatomic) NSUUID *requesterID;
@property (retain, nonatomic) APControllerRequesterCoordinator *requestCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyURL;
+ (void)proxyURLWithCompletionHandler:(id /* block */)a0;

- (void)requestPromotedContentOfTypes:(id)a0 forContext:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithDeliveryBlock:(id /* block */)a0;
- (void)connectionSevered;
- (void)contentResponses:(id)a0;
- (void).cxx_destruct;
- (void)handleCompletionOfRequest:(id)a0;
- (void)endRequests;
- (void)_invalidateAndfulfillAllRequestsWithError:(id)a0;

@end
