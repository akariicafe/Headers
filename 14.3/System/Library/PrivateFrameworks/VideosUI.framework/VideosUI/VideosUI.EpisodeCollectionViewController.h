@interface VideosUI.EpisodeCollectionViewController : UIViewController <UICollectionViewDelegate, UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ currentSnapshot;
    void /* unknown type, empty encoding */ cachedPrototypeCell;
    void /* unknown type, empty encoding */ cachedPrototypeCellMetrics;
    void /* unknown type, empty encoding */ cachedPrototypeLastWidth;
    void /* unknown type, empty encoding */ contextMenuInteractor;
}

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
