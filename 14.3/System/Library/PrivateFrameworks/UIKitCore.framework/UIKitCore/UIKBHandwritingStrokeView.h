@class UIKBHandwritingView;

@interface UIKBHandwritingStrokeView : UIView

@property (readonly, nonatomic) struct CGContext { } *bitmapContext;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } aggregateInvalidRect;
@property (weak, nonatomic) UIKBHandwritingView *keyView;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateInkColor;
- (void)createBitmapIfNeeded;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; })viewPointFromDataPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })handwritingPointToRect:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToBitmapCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToViewCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)redrawStrokesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayAggregateInvalidRect;
- (void)addTrapezoidFromFirstPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0 secondPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a1;
- (void)addHandwritingPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (BOOL)_wantsDeepDrawing;
- (void)clearRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
