@class PKTiledView, UIView;

@interface PaperKit.CanvasElementDrawingView : PKAttachmentView {
    void /* unknown type, empty encoding */ canvasElementView;
    void /* unknown type, empty encoding */ liveStreamingDisplayLink;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) PKTiledView *tiledView;
@property (nonatomic, readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } drawingTransform;
@property (nonatomic, readonly) BOOL isAtEndOfDocument;
@property (nonatomic, readonly) UIView *attachmentContainerView;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (id)initWithCoder:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)didMoveToWindow;
- (void)didBeginDrawing;
- (void)didEndDrawing;
- (void)drawingDidEraseStrokes;
- (void)setAttachmentChromeVisible:(BOOL)a0 animated:(BOOL)a1 highlightBackground:(BOOL)a2;
- (void)drawingDidChangeVisibleStrokes:(BOOL)a0;
- (void)updateDrawingHeight:(double)a0;
- (void)updateFrameForTextContainer;
- (BOOL)hitChrome:(struct CGPoint { double x0; double x1; })a0 isStylus:(BOOL)a1;
- (double)heightFromDrawing:(id)a0 delta:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawing:(id)a1;
- (void)updateTileContainerViewFrame;
- (void)updateLiveDrawing;

@end
