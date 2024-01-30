@class NSArray, NSString, NSObject, PKDiscoveryService;
@protocol PKDiscoveryDataSourceDelegate, OS_dispatch_queue;

@interface PKDiscoveryDataSource : NSObject <PKDiscoveryObserver> {
    PKDiscoveryService *_discoveryService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _articleLayoutsLock;
    NSArray *_articleLayouts;
    BOOL _updatingArticles;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak, nonatomic) id<PKDiscoveryDataSourceDelegate> delegate;
@property (retain, nonatomic) NSArray *articleLayouts;
@property (nonatomic, getter=isMiniCardsAllowed) BOOL miniCardsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)_manifestAllowsMiniCardsWithCompletion:(id /* block */)a0;
- (void)updateArticleLayouts;
- (void)_updateArticlesWithCompletion:(id /* block */)a0;
- (id)_articleLayoutForItemIdentifier:(id)a0;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)_queue_updateArticleLayouts:(id)a0;
- (void)_addDismissActionToArticleLayouts:(id)a0;
- (void)discoveryService:(id)a0 receivedUpdatedDiscoveryArticleLayouts:(id)a1;
- (id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)a0;
- (void)displayedDiscoveryItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
