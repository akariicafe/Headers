@class NSObject, NSHashTable, PKXPCService;
@protocol OS_dispatch_queue;

@interface PKDiscoveryService : NSObject <PKDiscoveryServiceExportedInterface> {
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)displayedDiscoveryItemWithIdentifier:(id)a0;
- (void)discoveryArticleLayoutsWithCompletion:(id /* block */)a0;
- (void)updateDiscoveryItemWithIdentifier:(id)a0 forAction:(long long)a1 completion:(id /* block */)a2;
- (void)addObserver:(id)a0;
- (id)observers;
- (id /* block */)errorHandlerForMethod:(SEL)a0 completion:(id /* block */)a1;
- (void)updateDiscoveryManifestWithCompletion:(id /* block */)a0;
- (void)discoveryItemsWithCompletion:(id /* block */)a0;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(id /* block */)a0;
- (void)insertDiscoveryItems:(id)a0 discoveryArticleLayouts:(id)a1 completion:(id /* block */)a2;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)a0 active:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)insertDiscoveryEngagementMessages:(id)a0 completion:(id /* block */)a1;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)a0 forAction:(long long)a1 completion:(id /* block */)a2;
- (void)removeDiscoveryMessageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)rulesWithCompletion:(id /* block */)a0;
- (void)insertRule:(id)a0 completion:(id /* block */)a1;
- (void)deleteRuleWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)evaluateRulesWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)discoveryArticleLayoutsUpdated:(id)a0;
- (void)removeDiscoveryUserNotificationsWithCompletion:(id /* block */)a0;
- (void)discoveryEngagementMessagesUpdated;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)a0;

@end
