@interface VideosUI.MultiGroupHorizontalCollectionController : VUIBaseViewController <VideosUI.VUICollectionViewDelegate, VideosUI.VUIScrollViewDelegate, VUIShelfViewLayoutDelegate, VideosUI.VUICollectionViewContextMenuDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ contextMenuInteractor;
    void /* unknown type, empty encoding */ cachedCellMetrics;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cachedHeaderViews;
    void /* unknown type, empty encoding */ internalCollectionViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shelfViewLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_groupCollectionContainerView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ supplementaryKindToReuseIdentifierMap;
    void /* unknown type, empty encoding */ datasourceLoaded;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)vuiCollectionView:(id)a0 willPerformPreviewActionForMenuWith:(id)a1 animator:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 selectionMarginsForItemAtIndexPath:(id)a2;
- (id)vuiCollectionView:(id)a0 contextMenuConfigurationForItemAt:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)vuiCollectionView:(id)a0 didEndDisplaying:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (id)vuiCollectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)vuiCollectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)vuiCollectionView:(id)a0 willDisplay:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 at:(id)a3;
- (void)vuiCollectionView:(id)a0 willEndContextMenuInteraction:(id)a1 animator:(id)a2;
- (void)vuiScrollViewDidEndDecelerating:(id)a0;
- (void)vuiScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)a0;
- (void)vuiScrollViewDidScroll:(id)a0;
- (void)vuiScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (void)vui_loadView;

@end
