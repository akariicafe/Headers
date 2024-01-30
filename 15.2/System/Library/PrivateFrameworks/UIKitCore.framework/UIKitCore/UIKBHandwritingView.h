@class UIView, NSMutableArray, UIKBHandwritingStrokePointFIFO, UIKBHandwritingQuadCurvePointFIFO, NSString, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingBezierPathPointFIFO, UIKBHandwritingInputSpeedModel, UIBezierPath, NSMutableSet, UIKBHandwritingStrokeView, UIDelayedAction;

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIKBHandwritingStrokeView *strokeView;
@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) NSMutableSet *activeTouches;
@property (nonatomic) BOOL initialPointPosted;
@property (nonatomic) struct { struct CGPoint { double x; double y; } point; double force; } previousPoint;
@property (nonatomic) double pageOffset;
@property (retain, nonatomic) UIDelayedAction *nextPageTimer;
@property (retain, nonatomic) UIKBHandwritingInputSpeedModel *inputSpeedModel;
@property (nonatomic) double inkWidth;
@property (nonatomic) struct CGColor { } *inkColor;
@property (nonatomic) struct CGImage { } *inkMask;
@property (retain, nonatomic) NSMutableArray *interpolatedPoints;
@property (retain, nonatomic) UIBezierPath *currentPath;
@property (retain, nonatomic) NSMutableArray *currentPoints;
@property (retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO;
@property (retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) UIKBHandwritingBezierPathPointFIFO *bezierPathFIFO;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send;
- (BOOL)cancelTouchTracking;
- (void)layoutSubviews;
- (void)displayLayer:(id)a0;
- (BOOL)shouldCache;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)clearAndNotify:(BOOL)a0;
- (void)recreateInkMaskIfNeeded;
- (id)layerForRenderFlags:(long long)a0;
- (void)cancelPageOffsetTimer;
- (void)pageOffsetTimerFired;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)startFadeOutAnimation;
- (unsigned long long)numberOfStrokes;
- (void)addInkPoint:(struct CGPoint { double x0; double x1; })a0 value:(double)a1;
- (void)touchPageOffsetTimer;
- (BOOL)endStrokeWithTouches:(id)a0 event:(id)a1;
- (void)deleteStrokesAtIndexes:(id)a0;
- (BOOL)shouldAllowSelectionGestures:(BOOL)a0;
- (void)log;
- (void)setRenderConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)clearTouches;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateInkColor;

@end
