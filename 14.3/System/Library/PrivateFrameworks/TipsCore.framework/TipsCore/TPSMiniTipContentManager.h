@class NSObject, TPSServiceConnection;
@protocol OS_dispatch_queue;

@interface TPSMiniTipContentManager : NSObject

@property (retain, nonatomic) TPSServiceConnection *serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)a0;
- (id /* block */)_contentWithContentIDCompletionOnClientQueue:(id /* block */)a0;
- (void)contentWithContentID:(id)a0 bundleID:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)_performWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_performSyncWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)validateAndPrepareContentForDisplay:(id)a0 bundleID:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
- (void)personalizationFailedForContentID:(id)a0 bundleID:(id)a1 context:(id)a2;
- (void)hintDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)hintDismissedByUserForIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2;
- (void)hintDismissedByPerformedOutcomeForIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2;
- (void)invalidate;

@end
