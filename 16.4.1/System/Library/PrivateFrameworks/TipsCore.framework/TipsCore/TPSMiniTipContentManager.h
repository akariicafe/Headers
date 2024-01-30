@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSMiniTipContentManager : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void)hintDismissedForIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (void)restartTrackingForContentIdentifiers:(id)a0;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void)hintDisplayedForIdentifier:(id)a0 correlationID:(id)a1 context:(id)a2;
- (void)personalizationFailedForContentID:(id)a0 bundleID:(id)a1 context:(id)a2;
- (id)init;
- (void)contentWithContentIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)validateAndPrepareContentForDisplay:(id)a0 bundleID:(id)a1 context:(id)a2 synchronous:(BOOL)a3 skipUsageCheck:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)invalidate;
- (void)_performSyncWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id /* block */)_contentWithContentIDCompletionOnClientQueue:(id /* block */)a0;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
