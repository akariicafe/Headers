@class NSString, NSHashTable, SBHIconModel, NSObject;
@protocol OS_dispatch_queue;

@interface SBHIconLibraryAbstractQueryEngine : NSObject <SBHIconLibraryQueryEngine> {
    BOOL _iconModelIsReloading;
    NSHashTable *_executingQueryContexts;
    NSHashTable *_observers;
    BOOL _isShutdown;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) BOOL isShutdown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_leafIdentifiersForBundleIdentifier:(id)a0;

- (void)_setupNotifications;
- (void)shutdown;
- (id)initWithIconModel:(id)a0;
- (void)_iconModelDidReload:(id)a0;
- (void)_iconModelWillReload:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)executeQuery:(id)a0;
- (BOOL)_processingQueue_isIconModelReloading;
- (void)_processingQueue_teardownQueryContext:(id)a0;
- (void)_processingQueue_startNewQueryContext:(id)a0;
- (void)_processingQueue_addIcons:(id)a0 iconLibraryQueryContext:(id)a1 notifyDelegate:(BOOL)a2;
- (void)_iconModelNeedsIconAdded:(id)a0;
- (void)_iconModelNeedsIconReplaced:(id)a0;
- (void)_iconModelNeedsIconRemoved:(id)a0;
- (void)_iconModelVisibilityDidChange:(id)a0;
- (void)_teardownNotifications;
- (void)_mapBundleIdentifiersToIcons:(id)a0 completion:(id /* block */)a1;
- (id /* block */)_processingQueue_sortComperatorForQueryContext:(id)a0;
- (void)_processingQueue_noteQueryResultsWereUpdated:(id)a0 iconLibraryQueryContext:(id)a1 notifyDelegate:(BOOL)a2;
- (void)_processingQueue_observerDispatchQueryResultsWereUpdated:(id)a0;
- (void)_processingQueue_teardownQueryContext:(id)a0 removeContext:(BOOL)a1;
- (BOOL)_processingQueue_isBundleIdentifierValid:(id)a0 iconLibraryQueryContext:(id)a1;
- (void)_addItemsWithBundleIdentifiers:(id)a0 iconLibraryQueryContext:(id)a1 notifyDelegate:(BOOL)a2;
- (void)_processingQueue_removeItemsWithBundleIdentifiers:(id)a0 iconLibraryQueryContext:(id)a1 notifyDelegate:(BOOL)a2;
- (BOOL)_processingQueue_isShutdown;
- (void)_processingQueue_observerDispatchError:(id)a0 forQuery:(id)a1;
- (id)_processingQueue_lastQueryResultForContext:(id)a0;

@end
