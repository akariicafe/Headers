@interface VideosUI.MultiGroupHorizontalCollectionController : UIViewController <UICollectionViewDelegate, VUIShelfViewLayoutDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ cachedCellMetrics;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cachedHeaderViews;
    void /* unknown type, empty encoding */ collectionViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shelfViewLayout;
    void /* unknown type, empty encoding */ groupCollectionContainerView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ supplementaryKindToReuseIdentifierMap;
}

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 selectionMarginsForItemAtIndexPath:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
