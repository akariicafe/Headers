@class UICollectionViewCell;

@interface VUILibraryiOSMenuCollectionConfiguration : VUICollectionConfiguration

@property (retain, nonatomic) UICollectionViewCell *menuItemSizingCell;
@property (nonatomic) BOOL isDesignedForIpadEnabled;

- (id)_layout;
- (id)init;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (Class)classForCollectionViewCell;
- (id)configureCollectionViewCellForCollectionView:(id)a0 ForItem:(id)a1 AtIndexPath:(id)a2;
- (id)configureSizingCellForItem:(id)a0 AtIndexPath:(id)a1;
- (id)generateCollectionView;

@end
