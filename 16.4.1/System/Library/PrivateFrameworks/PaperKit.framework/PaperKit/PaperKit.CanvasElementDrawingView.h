@class PKTiledView, UIView;

@interface PaperKit.CanvasElementDrawingView : PKAttachmentView {
    void /* unknown type, empty encoding */ canvasElementView;
    void /* unknown type, empty encoding */ liveStreamingDisplayLink;
    void /* unknown type, empty encoding */ liveStreamingStartTimeInterval;
    void /* unknown type, empty encoding */ liveErasingDrawing;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly) PKTiledView *tiledView;
@property (nonatomic, readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } drawingTransform;
@property (nonatomic, readonly) BOOL isAtEndOfDocument;
@property (nonatomic, readonly) BOOL updateHeightAfterDrawing;
@property (nonatomic, readonly) UIView *attachmentContainerView;

- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)selectionDidChange;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)setAttachmentChromeVisible:(BOOL)a0 animated:(BOOL)a1 highlightBackground:(BOOL)a2;
- (void)drawingDidChangeVisibleStrokes:(BOOL)a0;
- (void)didBeginDrawing;
- (void)beganStroke:(id)a0;
- (void)cancelledStroke:(id)a0;
- (void)drawingDidEraseStrokes:(id)a0;
- (void)endedStroke:(id)a0;
- (double)heightFromDrawing:(id)a0 delta:(double)a1;
- (BOOL)hitByTouchLocation:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)hitChrome:(struct CGPoint { double x0; double x1; })a0 isStylus:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawing:(id)a1;
- (void)updateDrawingHeight:(double)a0;
- (void)updateFrameForTextContainer;
- (void)updateTileContainerViewFrame;
- (void)displayLinkUpdateLiveDrawing;

@end
