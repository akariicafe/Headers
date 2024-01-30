@class PLDateRangeFormatter, PHFetchResult, NSString, NSNumber, PXImportHistorySectionHeaderView;

@interface PUImportHistoryGridViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PXImportHistorySectionHeaderViewDelegate>

@property (retain, nonatomic) PHFetchResult *importSessions;
@property (readonly, nonatomic) PLDateRangeFormatter *dateFormatter;
@property (nonatomic) double referenceWidth;
@property (retain, nonatomic) NSNumber *cachedHeaderHeight;
@property (retain, nonatomic) PXImportHistorySectionHeaderView *referenceHeaderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpec:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (long long)oneUpPresentationOrigin;
- (void)dealloc;
- (id)newGridLayout;
- (void)_configureSectionHeaderView:(id)a0 section:(long long)a1;
- (void)setSelected:(BOOL)a0 itemsAtIndexes:(id)a1 inSection:(long long)a2 animated:(BOOL)a3;
- (BOOL)allowSlideshowButton;
- (void)headerViewDidPressActionButton:(id)a0;
- (double)sectionedGridLayout:(id)a0 sectionHeaderHeightForVisualSection:(long long)a1;
- (double)sectionedGridLayout:(id)a0 accessibilitySectionHeaderHeightForVisualSection:(long long)a1;
- (BOOL)initiallyScrolledToBottom;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (void)_importHistoryContentSizeCategoryDidChangeNotification:(id)a0;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
