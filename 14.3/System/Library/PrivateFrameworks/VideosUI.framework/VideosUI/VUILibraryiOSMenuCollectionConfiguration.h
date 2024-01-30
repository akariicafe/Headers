@class UICollectionViewCell;

@interface VUILibraryiOSMenuCollectionConfiguration : VUICollectionConfiguration

@property (retain, nonatomic) UICollectionViewCell *menuItemSizingCell;
@property (nonatomic) BOOL isDesignedForIpadEnabled;

- (id)_layout;
- (id)init;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (id)generateCollectionView;
- (id)configureCollectionViewCellForCollectionView:(id)a0 ForItem:(id)a1 AtIndexPath:(id)a2;
- (id)configureSizingCellForItem:(id)a0 AtIndexPath:(id)a1;
- (Class)classForCollectionViewCell;

@end
