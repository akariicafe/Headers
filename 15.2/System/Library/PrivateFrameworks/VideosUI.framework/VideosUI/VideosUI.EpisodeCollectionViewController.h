@interface VideosUI.EpisodeCollectionViewController : VideosUI.VUIViewController <VideosUI.VUICollectionViewDelegate, VideosUI.VUIScrollViewDelegate, UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ currentSnapshot;
    void /* unknown type, empty encoding */ cachedPrototypeCell;
    void /* unknown type, empty encoding */ cachedPrototypeCellMetrics;
    void /* unknown type, empty encoding */ cachedPrototypeLastWidth;
    void /* unknown type, empty encoding */ contextMenuInteractor;
}

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 willDisplay:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 didEndDisplaying:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 at:(id)a3;
- (void)vuiScrollViewDidScroll:(id)a0;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)a0;
- (void)vuiScrollViewDidEndDecelerating:(id)a0;
- (void)vuiScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)vuiScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;

@end
