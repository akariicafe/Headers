@interface PaperKit.CanvasElementResizeView : UIView <UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ resizeHandles;
    void /* unknown type, empty encoding */ borderView;
    void /* unknown type, empty encoding */ canvas;
    void /* unknown type, empty encoding */ contextMenuInteraction;
    void /* unknown type, empty encoding */ resizingCanvasElements;
    void /* unknown type, empty encoding */ hasContextMenuInteractionVisible;
    void /* unknown type, empty encoding */ hasDraggingCanvasElement;
    void /* unknown type, empty encoding */ resizeOriginalFrame;
}

- (void)layoutSubviews;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapped:(id)a0;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)resizeHandleMoved:(id)a0;
- (void)dragMoved:(id)a0;

@end
