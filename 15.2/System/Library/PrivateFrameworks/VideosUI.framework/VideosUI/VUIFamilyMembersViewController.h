@class VUILegacyCollectionView, VUIFamilyMemberCell, UICollectionViewDiffableDataSource, VUIViewControllerContentPresenter, NSDictionary, NSString, VUILibraryFamilyMembersDataSource;
@protocol VUIFamilyMembersViewControllerDelegate;

@interface VUIFamilyMembersViewController : UIViewController <VUILibraryDataSourceDelegate, UICollectionViewDelegate, VUILegacyCollectionViewDelegate> {
    double _lastAppearWidth;
}

@property (retain, nonatomic) VUILibraryFamilyMembersDataSource *dataSource;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (retain, nonatomic) VUILegacyCollectionView *collectionView;
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

- (id)initWithDataSource:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_createDiffableDataSourceSnapshot;
- (void)_updateNavigationBarPadding;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)_createDiffableDataSource;
- (id)_createCollectionView;
- (void)_updateLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_clearCollectionViewSelections:(BOOL)a0;
- (id)_generateFamilyMemberHashToFamilyMemberDictionaryForFamilyMembers:(id)a0;
- (void)_updateCurrentViewIfNeeded;
- (id)_getFamilyMemberIdentifiersFromFamilyMembers;

@end
