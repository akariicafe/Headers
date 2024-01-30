@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSFullTipContentManager : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)contentWithCompletionHandler:(id /* block */)a0;
- (void)removeNotificationForIdentifier:(id)a0;
- (void)tipsAppActive;
- (void)markTipIdentifierViewed:(id)a0;

@end
