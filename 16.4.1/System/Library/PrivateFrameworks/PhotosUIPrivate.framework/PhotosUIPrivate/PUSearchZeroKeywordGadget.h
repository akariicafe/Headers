@class PUSearchHomeThumbnailManager, PHCachingImageManager, PXSearchZeroKeywordDataSource, NSString, PXGadgetSpec, NSObject, PUSearchZeroKeywordGadgetLayout;
@protocol OS_dispatch_queue, PXGadgetDelegate;

@interface PUSearchZeroKeywordGadget : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXDiagnosticsEnvironment, PXGadget>

@property (retain, nonatomic) PUSearchHomeThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) PUSearchZeroKeywordGadgetLayout *zeroKeywordGadgetLayout;
@property (nonatomic) unsigned long long cellLabelNumberOfLinesPermitted;
@property (nonatomic) unsigned long long placeTileFetchCounter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *placeTileFetchCounterQueue;
@property (retain, nonatomic) PHCachingImageManager *imageManager;
@property (readonly, nonatomic) PXSearchZeroKeywordDataSource *zeroKeywordDataSource;
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
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)contentViewController;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)_scrollViewStoppedScrolling;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_configureCollectionView;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (id)debugURLsForDiagnostics;
- (BOOL)hasLoadedContentData;
- (void)_configureCellLabelNumberOfLinesWithScreenSize:(struct CGSize { double x0; double x1; })a0;
- (void)_fetchPlaceThumbnailForCell:(id)a0 itemType:(long long)a1 key:(id)a2 currentTag:(unsigned long long)a3;
- (id)_searchHomeViewController;
- (void)_updateCurrentContentOffsetWithProposedOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })getCellSize;
- (struct CGSize { double x0; double x1; })getCellSizeWithScreenWidth:(double)a0;
- (struct CGSize { double x0; double x1; })getCellThumbnailSize;
- (id)initWithDataSource:(id)a0 dataSourceSection:(unsigned long long)a1 sectionType:(long long)a2;
- (void)layoutPeopleViews;
- (void)updateCellLabelNumberOfLinesWithScreenSize:(struct CGSize { double x0; double x1; })a0;

@end
