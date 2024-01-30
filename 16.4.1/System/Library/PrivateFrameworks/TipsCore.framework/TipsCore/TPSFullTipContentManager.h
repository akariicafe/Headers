@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSFullTipContentManager : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (id)init;
- (void)invalidate;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)contentWithCompletionHandler:(id /* block */)a0;
- (void)fetchAssetsWithAssetsConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)markTipIdentifierSaved:(id)a0;
- (void)markTipViewed:(id)a0;
- (void)removeNotificationForIdentifier:(id)a0;
- (void)tipsAppActive;

@end
