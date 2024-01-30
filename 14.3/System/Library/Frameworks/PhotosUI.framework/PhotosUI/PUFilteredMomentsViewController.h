@class NSString, PUFilteredMomentsDataSource;

@interface PUFilteredMomentsViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUFilteredMomentsDataSourceDelegate>

@property (retain, nonatomic) PUFilteredMomentsDataSource *filteredMomentsDataSource;
@property (retain, nonatomic) NSString *emptyPlaceholderText;
@property (nonatomic) long long gridPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)headerView:(id)a0 actionButtonPressed:(id)a1;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (long long)oneUpPresentationOrigin;
- (id)newGridLayout;
- (void)filteredMomentsDataSourceHasPendingChanges:(id)a0;
- (void)_reloadVisibleMomentHeaders;
- (void)_getDataForVisualSection:(long long)a0 hasActionButton:(BOOL *)a1 actionButtonTitle:(id *)a2 hasDisclosure:(BOOL *)a3 locations:(id *)a4 title:(id *)a5 startDate:(id *)a6 endDate:(id *)a7;
- (void)_configureSectionHeaderView:(id)a0 section:(unsigned long long)a1;
- (void)setSelected:(BOOL)a0 itemsAtIndexes:(id)a1 inSection:(long long)a2 animated:(BOOL)a3;
- (id)newEmptyPlaceholderView;
- (BOOL)allowSlideshowButton;
- (double)sectionedGridLayout:(id)a0 sectionHeaderHeightForVisualSection:(long long)a1;
- (double)sectionedGridLayout:(id)a0 accessibilitySectionHeaderHeightForVisualSection:(long long)a1;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (void)didTapHeaderView:(id)a0;
- (void)viewDidLoad;

@end
