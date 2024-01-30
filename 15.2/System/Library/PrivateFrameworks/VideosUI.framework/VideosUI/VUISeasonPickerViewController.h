@class VUISeasonPickerCollectionViewCell, NSString, VUIViewControllerContentPresenter, _VUISeasonPickerView, VUIMediaEntitiesDataSource, UICollectionViewDiffableDataSource, UIViewController, VUIFamilyMember;

@interface VUISeasonPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol> {
    VUISeasonPickerCollectionViewCell *_sizingCell;
}

@property (retain, nonatomic) _VUISeasonPickerView *seasonPickerView;
@property (retain, nonatomic) UIViewController *currentSeasonViewController;
@property (nonatomic) BOOL lastViewedSeasonWasManuallyDeleted;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (retain, nonatomic) VUIMediaEntitiesDataSource *dataSource;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIFamilyMember *familyMember;

- (id)initWithDataSource:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)_createDiffableDataSourceSnapshot;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)_createDiffableDataSource;
- (id)_getSeasonIdentifiersFromSeasons;

@end
