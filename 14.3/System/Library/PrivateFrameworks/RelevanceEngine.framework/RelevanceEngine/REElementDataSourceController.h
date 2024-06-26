@class NSString, NSArray, REElementDataSource, REUpNextScheduler, NSMutableDictionary, NSSet, RERelevanceProviderEnvironment, NSMutableArray, NSMutableSet, NSObject, RERelevanceEngine;
@protocol REElementDataSourceControllerDelegate, OS_dispatch_queue;

@interface REElementDataSourceController : NSObject <REElementDataSourceControllerProperties, REElementDataSourceDelegate> {
    NSString *_loggingHeader;
    NSMutableSet *_dataSourceElements;
    NSMutableDictionary *_dataSourceElementSectionMap;
    NSMutableDictionary *_dataSourceElementIdentifierMap;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_updates;
    REUpNextScheduler *_updateScheduler;
    REUpNextScheduler *_reloadScheduler;
    BOOL _wantsReloadWhilePaused;
    BOOL _hasDataAvailable;
    unsigned long long _contentMode;
    BOOL _isPerformingReload;
    NSMutableArray *_enqueuedBlocks;
    NSSet *_supportedSections;
    RERelevanceProviderEnvironment *_providerEnvironment;
    RERelevanceEngine *_relevanceEngine;
    BOOL _willUnload;
    BOOL _allowsLocationUse;
    BOOL _supportsContentRelevance;
    NSArray *_contentAttributes;
    int _boostCount;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) Class dataSourceClass;
@property (readonly, nonatomic) NSArray *supportedSections;
@property (readonly, nonatomic) NSArray *allProvidedElements;
@property (readonly, nonatomic) BOOL allowsLocationUse;
@property (readonly, nonatomic) BOOL hasDataAvailable;
@property (readonly, nonatomic) unsigned long long updateCount;
@property (weak, nonatomic) id<REElementDataSourceControllerDelegate> delegate;
@property (readonly, nonatomic) Class dataSourceClass;
@property (readonly, nonatomic) REElementDataSource *dataSource;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasLoadedData;
@property (readonly, nonatomic) NSArray *allElements;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_resume;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)setAllowsLocationUse:(BOOL)a0;
- (void)_loadLoggingHeader;
- (id)_initWithRelevanceEngine:(id)a0 dataSourceClass:(Class)a1 dataSource:(id)a2;
- (void)_queue_performUpdates;
- (void)_queue_reloadWithQOS:(unsigned int)a0 qosOffset:(int)a1 forceReload:(BOOL)a2 completion:(id /* block */)a3;
- (void)_handleSignifiantTimeChange:(id)a0;
- (void)_handleDeviceLockStateChange:(id)a0;
- (void)invalidateElements;
- (BOOL)_validElement:(id)a0;
- (BOOL)_supportsContentRelevanceProviderForElement:(id)a0;
- (BOOL)_isWhitelisted;
- (void)_performOrEnqueueUpdateBlock:(id /* block */)a0;
- (void)_queue_updateDataSourceLocationUse;
- (void)_queue_pause;
- (id)_elementsByRemovingInvalidElements:(id)a0;
- (id)_updateRelevanceProvidersForElement:(id)a0;
- (id)_shallowCopiedElements:(id)a0;
- (BOOL)_containsElementIdentifier:(id)a0;
- (void)_addElementIdentifier:(id)a0;
- (void)_setSection:(id)a0 forElementWithIdentifier:(id)a1;
- (void)_storeElement:(id)a0;
- (void)_namespaceElementIdentifier:(id)a0 section:(id)a1;
- (void)_queue_scheduleUpdate:(id)a0;
- (id)_sectionForElementWithIdentifier:(id)a0;
- (id)_elementForIdentifier:(id)a0;
- (id)_allDataSourceElements;
- (void)_removeElementIdentifier:(id)a0;
- (id)_dataSourceIdentifierFromIdentifier:(id)a0;
- (void)_removeElementForIdentifier:(id)a0;
- (id)_groupElements:(id)a0 bySections:(id)a1;
- (id)_queue_elementsForIds:(id)a0;
- (void)_queue_processUpdates:(id)a0 forSection:(id)a1;
- (id)elementOperationQueue;
- (void)addElements:(id)a0 toSectionWithIdentifier:(id)a1;
- (void)reloadElement:(id)a0;
- (void)removeElementsWithIds:(id)a0;
- (void)refreshElement:(id)a0;
- (BOOL)hasElementWithId:(id)a0 inSectionWithIdentifier:(id)a1;
- (void)fetchElementWithIdentifierVisible:(id)a0 withHandler:(id /* block */)a1;
- (void)addElements:(id)a0 toSection:(unsigned long long)a1;
- (void)removeElements:(id)a0 fromSection:(unsigned long long)a1;
- (BOOL)hasElementWithId:(id)a0 inSection:(unsigned long long)a1;
- (id)initWithRelevanceEngine:(id)a0 dataSource:(id)a1;
- (id)initWithRelevanceEngine:(id)a0 dataSourceClass:(Class)a1;
- (void)pauseIfNeeded;
- (void)prepareToUnload;
- (void)invalidateAndReloadWithCompletion:(id /* block */)a0;
- (void)elementWillBecomeVisible:(id)a0;
- (void)elementDidBecomeHidden:(id)a0;

@end
