@class NSHashTable, PXSectionedDataSource, PXSectionedChangeDetailsRepository, NSString, PXUpdater, PXSectionedSelectionManager, PXStoryFeedViewLayoutSpecManager, NSObject, PXSectionedDataSourceManager, PXSelectionSnapshot;
@protocol PXStoryFeedViewLayoutSpec, PXStoryFeedItemLayoutFactory, OS_dispatch_queue, PXStoryFeedViewActionPerformer, PXAnonymousViewController, PXAssetCollectionActionPerformerDelegate;

@interface PXStoryFeedViewModel : PXObservable <PXStoryMutableFeedViewModel, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryQueueParticipant, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSHashTable *accessoryTapToRadarDiagnosticsProviders;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *dataSourceChangeHistory;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) id<PXStoryFeedViewLayoutSpec> spec;
@property (readonly, weak, nonatomic) id<PXStoryFeedViewActionPerformer> actionPerformer;
@property (readonly, weak, nonatomic) id<PXAssetCollectionActionPerformerDelegate> assetCollectionActionPerformerDelegate;
@property (readonly, weak, nonatomic) NSObject<PXAnonymousViewController> *presentingViewController;
@property (readonly, nonatomic) id<PXStoryFeedItemLayoutFactory> itemLayoutFactory;
@property (readonly, nonatomic) PXStoryFeedViewLayoutSpecManager *specManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (void)setIsActive:(BOOL)a0;
- (void)_updateDataSource;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)setSelectionSnapshot:(id)a0;
- (void)_invalidateSelectionSnapshot;
- (void)setDataSource:(id)a0;
- (void)setPresentingViewController:(id)a0;
- (void)_invalidateDataSource;
- (void)_setNeedsUpdate;
- (void)setActionPerformer:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)setSpec:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)_updateSpec;
- (void)_invalidateSpec;
- (id)initWithFeedViewConfiguration:(id)a0;
- (void)setAssetCollectionActionPerformerDelegate:(id)a0;
- (id)initWithDataSourceManager:(id)a0 specManager:(id)a1 itemLayoutFactory:(id)a2;
- (void)registerAccessoryTapToRadarDiagnosticsProvider:(id)a0;
- (void)_updateSelectionSnapshot;

@end
