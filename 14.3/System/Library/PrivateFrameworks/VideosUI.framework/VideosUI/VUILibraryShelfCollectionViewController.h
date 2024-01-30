@class NSArray, NSString, UICollectionViewDiffableDataSource, VUILibraryLockupViewCell, VUIMediaEntitiesDataSource;
@protocol VUILibraryShelfCollectionViewControllerDelegate;

@interface VUILibraryShelfCollectionViewController : VUIShelfViewController {
    VUILibraryLockupViewCell *_sizingCell;
}

@property (copy, nonatomic) NSArray *fetchResults;
@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *headerSubtitle;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic) BOOL disableSeeAllButton;
@property (weak, nonatomic) id<VUILibraryShelfCollectionViewControllerDelegate> delegate;
@property (readonly, nonatomic) VUIMediaEntitiesDataSource *dataSource;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)updateWithDataSource:(id)a0;
- (void)_updateHeaderView;
- (id)_createDiffableDataSourceSnapshot;
- (id)_createDiffableDataSourceForCollectionView:(id)a0;
- (void)configureWithCollectionView:(id)a0;
- (double)_computeBottomMargin;
- (struct CGSize { double x0; double x1; })_configureSizingCellWithEntity:(id)a0;
- (id)_getEntityIdentifiersFromEntities;
- (BOOL)_hideSeeAllButton;
- (void)_didPressSeeAllButton:(id)a0;
- (void)setHeaderTitle:(id)a0 andSubtitle:(id)a1;

@end
