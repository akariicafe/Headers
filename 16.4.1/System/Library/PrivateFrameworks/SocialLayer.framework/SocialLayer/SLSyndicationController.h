@class NSMutableSet, SLDServiceProxy, NSObject;
@protocol OS_dispatch_queue;

@interface SLSyndicationController : NSObject <SLDServiceProxyDelegate>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *syndicationProcessingQueue;

@property (retain, nonatomic) SLDServiceProxy *syndicationServiceProxy;
@property (retain, nonatomic) NSMutableSet *pendingmessageGUIDsToRemove;

+ (id)sharedController;

- (void)serviceProxyDidDisconnect:(id)a0;
- (void)serviceProxyDidConnect:(id)a0;
- (void).cxx_destruct;
- (void)removeMessageGUIDFromSyndication:(id)a0;
- (void)_disconnectSyndicationServiceConnectionIfNecessary;
- (void)_sendCurrentRemovalsToDaemonAndDisconnect;

@end
