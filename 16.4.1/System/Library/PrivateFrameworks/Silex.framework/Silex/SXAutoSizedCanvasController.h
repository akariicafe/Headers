@class SXTextTangierCanvasViewController, NSString, SXTextTangierInteractiveCanvasController, TSKDocumentRoot, TSDCanvasView;
@protocol SXAutoSizedCanvasControllerDelegate, SXComponentActionHandler, SXTangierDragItemProvider;

@interface SXAutoSizedCanvasController : NSObject <TSWPEditingControllerDelegate, SXTextTangierInteractiveCanvasControllerDelegate> {
    TSKDocumentRoot *_documentRoot;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (readonly, nonatomic) id<SXComponentActionHandler> actionHandler;
@property (readonly, nonatomic) id<SXTangierDragItemProvider> dragItemProvider;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (weak, nonatomic) id<SXAutoSizedCanvasControllerDelegate> delegate;
@property (readonly, nonatomic) SXTextTangierInteractiveCanvasController *icc;
@property (readonly, nonatomic) SXTextTangierCanvasViewController *cvc;
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (readonly, nonatomic) double lineHeight;
@property (readonly, nonatomic) BOOL editorShouldAlwaysBeInParagraphMode;
@property (readonly, nonatomic) BOOL editorAllowsEditMenu;
@property (readonly, nonatomic) BOOL editorAllowsMagnifier;
@property (readonly, nonatomic) BOOL editorAllowsParagraphMode;
@property (readonly, nonatomic) BOOL editorAllowsKeyboard;
@property (readonly, nonatomic) BOOL editorAllowsCaret;
@property (readonly, nonatomic) BOOL editorAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL editorAllowsRubyInteraction;
@property (readonly, nonatomic) BOOL editorAllowsListInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) BOOL spellCheckingSupported;
@property (readonly, nonatomic) BOOL spellCheckingSuppressed;
@property (readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property (readonly, nonatomic) BOOL shouldClipToScrollViewBoundsInVisibleBounds;
@property (readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeOfScrollViewEnclosingCanvas;
@property (readonly, nonatomic) BOOL allowEditMenuToAppear;
@property (readonly, nonatomic) BOOL allowTextEditingToBegin;

- (void)teardown;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits;
- (BOOL)allowHighlighting;
- (BOOL)allowCopy;
- (BOOL)allowSelectionPopover;
- (id)documentRoot;
- (id)initWithDocumentRoot:(id)a0 actionHandler:(id)a1 dragItemProvider:(id)a2;
- (id)interactiveCanvasController:(id)a0 dragItemForSmartField:(id)a1 interaction:(id)a2 session:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })interactiveCanvasController:(id)a0 expandVisibleBoundsForTiling:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)interactiveCanvasController:(id)a0 interactedWithHyperlink:(id)a1 info:(id)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 touchPoint:(struct CGPoint { double x0; double x1; })a4 touchAndHold:(BOOL)a5;
- (BOOL)interactiveCanvasController:(id)a0 shouldBeginInteraction:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)invalidateLayoutsAndFrames;
- (Class)wpEditorClassOverride;

@end
