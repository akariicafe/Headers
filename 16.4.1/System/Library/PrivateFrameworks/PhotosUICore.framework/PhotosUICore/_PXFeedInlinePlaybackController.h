@class PXGLayout, PXFeedViewModel;

@interface _PXFeedInlinePlaybackController : PXGridInlinePlaybackController {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _criticallyVisibleEdgeInsets;
}

@property (readonly, nonatomic) PXGLayout *containerLayout;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly, nonatomic) id /* block */ itemLayoutDesiredPlayStateSetter;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentVisibleRect;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2;
- (id)currentHoveredDisplayAsset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(out struct CGSize { double x0; double x1; } *)a1;
- (BOOL)canPlayAsset:(id)a0;
- (void).cxx_destruct;
- (id)_itemLayoutForPlaybackRecord:(id)a0;
- (void)_playbackRecord:(id)a0 setDesiredPlayState:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })criticallyVisibleEdgeInsets;
- (id)initWithContainerLayout:(id)a0 viewModel:(id)a1 itemLayoutDesiredPlayStateSetter:(id /* block */)a2;

@end
