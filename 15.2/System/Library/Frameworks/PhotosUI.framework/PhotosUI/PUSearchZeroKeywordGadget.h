@class PUSearchHomeThumbnailManager, PHCachingImageManager, PUSearchZeroKeywordDataSource, NSString, PXGadgetSpec, NSObject, PUSearchZeroKeywordGadgetLayout;
@protocol OS_dispatch_queue, PXGadgetDelegate;

@interface PUSearchZeroKeywordGadget : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXDiagnosticsEnvironment, PXGadget>

@property (retain, nonatomic) PUSearchHomeThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) PUSearchZeroKeywordGadgetLayout *zeroKeywordGadgetLayout;
@property (nonatomic) unsigned long long cellLabelNumberOfLinesPermitted;
@property (nonatomic) unsigned long long placeTileFetchCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *placeTileFetchCounterQueue;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (readonly, nonatomic) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (readonly, nonatomic) unsigned long long dataSourceSection;
@property (readonly, nonatomic) long long sectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)debugURLsForDiagnostics;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureCollectionView;
- (id)contentViewController;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithDataSource:(id)a0 dataSourceSection:(unsigned long long)a1 sectionType:(long long)a2;
- (BOOL)hasLoadedContentData;
- (void)_configureCellLabelNumberOfLinesWithScreenSize:(struct CGSize { double x0; double x1; })a0;
- (void)_fetchPlaceThumbnailForCell:(id)a0 itemType:(long long)a1 key:(id)a2 currentTag:(unsigned long long)a3;
- (void)_updateCurrentContentOffsetWithProposedOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })getCellSize;
- (struct CGSize { double x0; double x1; })getCellSizeWithScreenWidth:(double)a0;
- (struct CGSize { double x0; double x1; })getCellThumbnailSize;
- (void)layoutPeopleViews;
- (void)updateCellLabelNumberOfLinesWithScreenSize:(struct CGSize { double x0; double x1; })a0;

@end
