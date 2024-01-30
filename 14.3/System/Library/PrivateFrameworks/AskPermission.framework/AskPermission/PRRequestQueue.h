@class NSString;
@protocol PRRequestDelegate;

@interface PRRequestQueue : NSObject

@property (weak, nonatomic) id<PRRequestDelegate> delegate;
@property (readonly) NSString *identifier;

+ (id)_requestQueueForIdentifier:(id)a0;
+ (id)defaultRequestQueue;

- (id)_pushToken;
- (void).cxx_destruct;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)askPermissionTo:(id)a0 withRequestInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)pendingRequestsWithCompletionHandler:(id /* block */)a0;
- (void)attemptLocalApprovalForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didStartNewPurchaseRequestWithInfo:(id)a0;
- (void)_didReceiveStorePushNotificationWithPayload:(id)a0;
- (void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)a0 replyBlock:(id /* block */)a1;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_requestToBePresentedWithReply:(id /* block */)a0;
- (void)_userDidApproveRequestWithRequestID:(id)a0;
- (void)_userDidDenyRequestWithRequestID:(id)a0;
- (void)_clearCachedRequests;
- (void)_registerPushToken;
- (void)_readTestValueFromTouchIDKeychain;
- (void)_writeTestValueToTouchIDKeychain;
- (void)_deleteTestValueFromTouchIDKeychain;

@end
