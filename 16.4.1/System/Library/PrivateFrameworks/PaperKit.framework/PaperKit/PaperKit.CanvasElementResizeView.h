@interface PaperKit.CanvasElementResizeView : UIView <UIDragInteractionDelegate_Private, UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ resizeHandles;
    void /* unknown type, empty encoding */ controlHandles;
    void /* unknown type, empty encoding */ currentActiveHandle;
    void /* unknown type, empty encoding */ moreButton;
    void /* unknown type, empty encoding */ borderView;
    void /* unknown type, empty encoding */ canvas;
    void /* unknown type, empty encoding */ contextMenuInteraction;
    void /* unknown type, empty encoding */ resizeOriginalCoordinateSpace;
    void /* unknown type, empty encoding */ resizeOriginalFrame;
    void /* unknown type, empty encoding */ originalControlPointLocation;
    void /* unknown type, empty encoding */ dragGestureRecognizer;
    void /* unknown type, empty encoding */ rotationGestureRecognizer;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ dragLocation;
    void /* unknown type, empty encoding */ draggedImage;
    void /* unknown type, empty encoding */ isResizing;
    void /* unknown type, empty encoding */ resizingCanvasElements;
    void /* unknown type, empty encoding */ editingCanvasElements;
    void /* unknown type, empty encoding */ hasContextMenuInteractionVisible;
    void /* unknown type, empty encoding */ hasDraggingCanvasElement;
    void /* unknown type, empty encoding */ dragConstainedAxis;
    void /* unknown type, empty encoding */ nudgeDelta;
    void /* unknown type, empty encoding */ nudgeTimer;
}

- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (long long)_dragInteraction:(id)a0 dataOwnerForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)tapped:(id)a0;
- (void)rotate:(id)a0;
- (void)controlHandleMoved:(id)a0;
- (void)dragMoved:(id)a0;
- (void)resizeHandleMoved:(id)a0;
- (void)rotateFromResizeHandle:(id)a0;

@end
