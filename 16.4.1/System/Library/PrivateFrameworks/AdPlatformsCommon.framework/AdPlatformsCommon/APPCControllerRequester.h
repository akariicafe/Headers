@class NSMutableDictionary, NSUUID, APUnfairLock, NSError, APControllerRequesterCoordinator, NSString;

@interface APPCControllerRequester : NSObject <APControllerRequestCoordinatorDelegate>

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

- (void)proxyURLWithCompletionHandler:(id /* block */)a0;
- (id)proxyURL;
- (void)preWarm:(id)a0;
- (id)initWithDeliveryBlock:(id /* block */)a0;
- (void)_invalidateAndfulfillAllRequestsWithError:(id)a0;
- (id)_preprocessHandler:(id /* block */)a0;
- (void)handleCompletionOfRequest:(id)a0;
- (void)endRequests;
- (void)connectionSevered;
- (void).cxx_destruct;
- (void)contentResponses:(id)a0;
- (void)requestPromotedContentOfTypes:(id)a0 forContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendAndRankContent:(id)a0 forContext:(id)a1 placement:(unsigned long long)a2 responseHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
