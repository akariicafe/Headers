@class PXGadgetNavigationHelper, NSArray, NSString, NSMutableArray, NSObject, PXGadgetDataSource;
@protocol OS_dispatch_group, OS_os_log, PXGadgetTransition, PXGadgetDelegate, OS_dispatch_queue;

@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetProviderDelegate, PXGadgetDelegate> {
    NSObject<OS_dispatch_queue> *_lookupQueue;
    NSMutableArray *_lookupQueue_loadedProviders;
    NSObject<OS_dispatch_group> *_deferredGadgetLoadingGroup;
    NSObject<OS_dispatch_queue> *_deferredGadgetQueue;
    BOOL _isPerformingChanges;
    BOOL _dataSourceNeedsUpdate;
}

@property (class, readonly) NSObject<OS_os_log> *gadgetDataSourceManagerLog;

@property (copy, nonatomic) NSArray *cachedProviders;
@property (nonatomic) BOOL hasLoadedPriorities;
@property (nonatomic) BOOL loadingInitialGadgets;
@property (nonatomic) BOOL needsToLoadAllProviders;
@property (readonly, nonatomic) NSArray *gadgetProviders;
@property (readonly, nonatomic) id /* block */ gadgetSortComparator;
@property (readonly, nonatomic) id /* block */ gadgetProviderSortComparator;
@property (readonly, nonatomic) PXGadgetDataSource *dataSource;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (nonatomic) BOOL canLoadRemainingDataForProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;

- (void)_updateDataSource;
- (id)createInitialDataSource;
- (void)didPerformChanges;
- (void)didLoadDataForPriorities;
- (id)initWithQueueName:(id)a0;
- (id)hiddenGadgetProviders;
- (void).cxx_destruct;
- (id)init;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (id)_dataSourceSnapshot;
- (void)loadRemainingGadgetsIfNeeded:(id /* block */)a0;
- (void)loadRemainingGadgetsIfNeeded;
- (void)removeCachedProviders;
- (BOOL)gadget:(id)a0 transitionToViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)gadgetViewControllerHostingGadget:(id)a0;
- (void)invalidateGadgets;
- (void)gadget:(id)a0 animateChanges:(id /* block */)a1;
- (void)presentGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)willPerformChanges;
- (id)noContentGadget;
- (void)beginLoadingInitialGadgets:(unsigned long long)a0;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_loadPriorityForProviders:(id)a0;
- (void)_loadDataFromProviders:(id)a0 withGadgetMinimum:(unsigned long long)a1;

@end
