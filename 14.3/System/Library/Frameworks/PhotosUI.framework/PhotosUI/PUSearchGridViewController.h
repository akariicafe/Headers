@class NSString, PUSearchGridDataSource;

@interface PUSearchGridViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSearchGridDataSourceDelegate, PUSectionedGridLayoutDelegate>

@property (retain, nonatomic) PUSearchGridDataSource *searchGridDataSource;
@property (copy, nonatomic) NSString *emptyPlaceholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)oneUpPresentationOrigin;
- (id)_subtitle;
- (id)newGridLayout;
- (id)newEmptyPlaceholderView;
- (BOOL)allowSlideshowButton;
- (BOOL)_containsScene;
- (void)searchGridDataSourceHasPendingChanges:(id)a0;
- (void)_getDataForVisualSection:(long long)a0 locations:(id *)a1 title:(id *)a2 startDate:(id *)a3 endDate:(id *)a4;
- (void)_updateNavigationTitleView;
- (BOOL)pu_handleSecondTabTap;
- (void)viewWillAppear:(BOOL)a0;
- (double)sectionedGridLayout:(id)a0 sectionHeaderHeightForVisualSection:(long long)a1;
- (double)sectionedGridLayout:(id)a0 accessibilitySectionHeaderHeightForVisualSection:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })fullMomentsLevelSectionHeaderHighlightInset;
- (void)configureSupplementaryView:(id)a0 ofKind:(id)a1 forIndexPath:(id)a2;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)a0;
- (void)didTapHeaderView:(id)a0;
- (void)viewDidLoad;

@end
