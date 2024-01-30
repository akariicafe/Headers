@interface PaperKit.AnyCanvasElementView : UIView <UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ canvas;
    void /* unknown type, empty encoding */ parentCanvasElement;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ isDragging;
    void /* unknown type, empty encoding */ isContextMenuInteractionVisible;
}

- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
