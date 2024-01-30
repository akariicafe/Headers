@class _UIDynamicCaretDot, NSTimer, TIHandwritingStrokes, UIDelayedAction;

@interface _UIDynamicCaretInput : UIView {
    struct CGContext { } *_bitmapContext;
    long long _fadeCount;
    struct CGPoint { double x; double y; } _lastViewLoc;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _inkedAreaOfBitmapContext;
}

@property (retain, nonatomic) NSTimer *fadeTimer;
@property (retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes;
@property (retain, nonatomic) UIDelayedAction *committedAction;
@property (retain, nonatomic) _UIDynamicCaretDot *dotView;
@property (readonly, nonatomic) BOOL hasInk;
@property (readonly, nonatomic) BOOL isInking;

- (void)send;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_fadeInk;
- (void)committedStrokes;
- (void)clearFadeTimer;
- (void)drawPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addInkPoint:(struct CGPoint { double x0; double x1; })a0 fromLastPoint:(BOOL)a1;
- (void)endTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)startTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelTouchAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)inkWidth;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearAndNotify:(BOOL)a0;
- (void)log;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
