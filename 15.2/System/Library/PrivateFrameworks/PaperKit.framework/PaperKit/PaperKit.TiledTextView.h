@class PKLinedPaper;

@interface PaperKit.TiledTextView : PKTiledTextView <PKSelectionInteractionDelegate> {
    void /* unknown type, empty encoding */ currentCanvas;
    void /* unknown type, empty encoding */ paperLinedPaper;
}

@property (nonatomic, retain) PKLinedPaper *linedPaper;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initInScrollView:(id)a0 defaultDrawingClass:(Class)a1;
- (id)initInScrollView:(id)a0 sixChannelBlending:(BOOL)a1 defaultDrawingClass:(Class)a2;
- (id)initInScrollView:(id)a0 sixChannelBlending:(BOOL)a1 defaultDrawingClass:(Class)a2 readOnly:(BOOL)a3;
- (id)initInScrollView:(id)a0;
- (void)selectionInteraction:(id)a0 renderPreviewForElements:(id)a1 inContext:(struct CGContext { } *)a2 withConfig:(id)a3 inAttachment:(id)a4;
- (BOOL)selectionInteractionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 forEvent:(id)a2 orGestureRecognizer:(id)a3;
- (BOOL)selectionInteractionShouldForwardToElements:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 forEvent:(id)a2;
- (id)selectionInteraction:(id)a0 elementsInAttachment:(id)a1;
- (id)selectionInteraction:(id)a0 selectedElementsInAttachment:(id)a1;
- (id)selectionInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inAttachment:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionInteraction:(id)a0 frameForElement:(id)a1 inAttachment:(id)a2;
- (id)selectionInteraction:(id)a0 requestElementsInPath:(id)a1 inAttachment:(id)a2;
- (void)selectionInteraction:(id)a0 didSelectElements:(id)a1 inAttachment:(id)a2;
- (void)selectionInteraction:(id)a0 didDragElements:(id)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 inAttachment:(id)a3;
- (void)selectionInteraction:(id)a0 didEndDraggingElements:(id)a1 inAttachment:(id)a2;
- (void)selectionInteraction:(id)a0 didClearSelectionForElements:(id)a1 inAttachment:(id)a2;
- (id)selectionInteraction:(id)a0 pasteboardRepresentationsForElements:(id)a1 inAttachment:(id)a2;
- (void)selectionInteractionDidPaste:(id)a0 inAttachment:(id)a1;
- (void)selectionInteraction:(id)a0 didDeleteElements:(id)a1 inAttachment:(id)a2;
- (id)selectionInteraction:(id)a0 didDuplicateElements:(id)a1 inAttachment:(id)a2;
- (void)selectionInteraction:(id)a0 didTapElement:(id)a1 withGesture:(id)a2 inAttachment:(id)a3;
- (BOOL)selectionInteraction:(id)a0 didLongPressElement:(id)a1 withGesture:(id)a2 inAttachment:(id)a3;
- (id)selectionInteraction:(id)a0 elementsForSpaceInsertedAtPoint:(struct CGPoint { double x0; double x1; })a1 inAttachment:(id)a2;
- (BOOL)selectionInteraction:(id)a0 selectionContainsPoint:(struct CGPoint { double x0; double x1; })a1 inAttachment:(id)a2;
- (BOOL)selectionInteraction:(id)a0 canPerformAction:(SEL)a1 withSender:(id)a2 inAttachment:(id)a3;
- (void)selectionInteraction:(id)a0 dragInteractionWillBeginForElements:(id)a1 inAttachment:(id)a2;
- (void)selectionInteraction:(id)a0 dragInteractionWillEndForElements:(id)a1 withOperation:(unsigned long long)a2 inAttachment:(id)a3;
- (void)selectionInteraction:(id)a0 didDropItemProvider:(id)a1 inAttachment:(id)a2 withCompletion:(id /* block */)a3;
- (id)selectionInteraction:(id)a0 contextMenuInteraction:(id)a1 configurationForElement:(id)a2 inAttachment:(id)a3;
- (id)selectionInteraction:(id)a0 contextMenuInteraction:(id)a1 previewForHighlightingMenuWithConfiguration:(id)a2 forElement:(id)a3 inAttachment:(id)a4;
- (void)selectionInteraction:(id)a0 contextMenuInteraction:(id)a1 willDisplayMenuForConfiguration:(id)a2 animator:(id)a3 forElement:(id)a4 inAttachment:(id)a5;
- (void)selectionInteraction:(id)a0 contextMenuInteraction:(id)a1 willEndForConfiguration:(id)a2 animator:(id)a3 forElement:(id)a4 inAttachment:(id)a5;

@end
