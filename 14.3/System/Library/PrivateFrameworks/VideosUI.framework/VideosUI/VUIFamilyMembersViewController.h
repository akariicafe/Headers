@class VUICollectionView, VUIFamilyMemberCell, UICollectionViewDiffableDataSource, VUIViewControllerContentPresenter, NSDictionary, NSString, VUILibraryFamilyMembersDataSource;
@protocol VUIFamilyMembersViewControllerDelegate;

@interface VUIFamilyMembersViewController : UIViewController <VUILibraryDataSourceDelegate, UICollectionViewDelegate, VUICollectionViewDelegate>

@property (retain, nonatomic) VUILibraryFamilyMembersDataSource *dataSource;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (retain, nonatomic) VUICollectionView *collectionView;
@property (retain, nonatomic) VUIFamilyMemberCell *sizingCell;
@property (retain, nonatomic) NSDictionary *familyMemberHashToFamilyMemberDictionary;
@property (nonatomic) long long gridType;
@property (nonatomic) long long gridStyle;
@property (nonatomic) BOOL requiresRelayout;
@property (nonatomic) double tvCellWidth;
@property (weak, nonatomic) id<VUIFamilyMembersViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)_createDiffableDataSourceSnapshot;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)_createDiffableDataSource;
- (void)_updateCurrentViewIfNeeded;
- (id)_createCollectionView;
- (void)_updateLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_clearCollectionViewSelections:(BOOL)a0;
- (id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)a0;
- (id)_getFamilyMemberIdentifiersFromFamilyMembers;

@end
