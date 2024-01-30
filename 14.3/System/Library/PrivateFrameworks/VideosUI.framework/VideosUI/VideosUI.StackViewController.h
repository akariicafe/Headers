@interface VideosUI.StackViewController : UIViewController <UICollectionViewDelegate, VideosUI.StackCollectionViewCompositionalLayoutDelegate> {
    void /* unknown type, empty encoding */ peekingEnabled;
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ stackType;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ supplementaryHeaderTypeToKindMap;
    void /* unknown type, empty encoding */ supplementaryFooterTypeToKindMap;
    void /* unknown type, empty encoding */ supplementaryKindToReuseIdentifierMap;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ currentSnapshot;
    void /* unknown type, empty encoding */ templateViewModel;
    void /* unknown type, empty encoding */ collectionViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_prototypeCells;
    void /* unknown type, empty encoding */ sectionViewModels;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostingCellViewControllers;
    void /* unknown type, empty encoding */ _showcasePercentage;
    void /* unknown type, empty encoding */ _showcaseHeight;
    void /* unknown type, empty encoding */ verticalPaginationMonitor;
    void /* unknown type, empty encoding */ verticalPaginationMonitorSubscriber;
    void /* unknown type, empty encoding */ paginationCollectionTypes;
    void /* unknown type, empty encoding */ contextMenuInteractor;
}

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willEndContextMenuInteractionWithConfiguration:(id)a1 animator:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (BOOL)shouldRubberbandElementWithCategory:(unsigned long long)a0 in:(id)a1 at:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
