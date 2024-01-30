@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSMiniTipContentManager : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id /* block */)_contentWithContentIDCompletionOnClientQueue:(id /* block */)a0;
- (void)contentWithContentIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_performSyncWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)personalizationFailedForContentID:(id)a0 bundleID:(id)a1 context:(id)a2;
- (void)hintDisplayedForIdentifier:(id)a0 correlationID:(id)a1 context:(id)a2;
- (void)hintDismissedForIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (void)restartTrackingForContentIdentifiers:(id)a0;
- (void)validateAndPrepareContentForDisplay:(id)a0 bundleID:(id)a1 context:(id)a2 synchronous:(BOOL)a3 skipUsageCheck:(BOOL)a4 completionHandler:(id /* block */)a5;

@end
