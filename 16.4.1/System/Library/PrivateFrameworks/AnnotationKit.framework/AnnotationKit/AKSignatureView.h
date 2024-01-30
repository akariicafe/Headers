@class UIColor, CHPointStrokeFIFO, CHBoxcarFilterPointFIFO, CHQuadCurvePointFIFO, AKBitmapFIFO;
@protocol AKSignatureViewLiveDelegate;

@interface AKSignatureView : UIView {
    struct CGPoint { double x; double y; } _lastPoint;
    id _trackingTouchID;
    double _lastSetNeedsDisplayCallToSuperTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _accumulatedSignatureDirtyRect;
}

@property (nonatomic) double currentWeight;
@property unsigned long long totalPointsAdded;
@property struct CGPoint { double x; double y; } strokeStartLocation;
@property struct CGPoint { double x; double y; } strokeLastLocation;
@property double strokeStartTime;
@property BOOL isAddingPointWithoutSmoothing;
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO;
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *boxcarFIFO;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } aggregateInvalid;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unionDrawingRect;
@property (readonly, nonatomic) double interfaceScale;
@property (weak, nonatomic) id<AKSignatureViewLiveDelegate> liveDelegate;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double minPressure;
@property (nonatomic) double maxPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)teardown;
- (void)clear;
- (void).cxx_destruct;
- (void)continueStroke:(SEL)a0;
- (void)terminateStroke;
- (double)weightForTouch:(id)a0;
- (void)continueStrokeWithoutSmoothing:(SEL)a0;
- (double)weightForValue:(double)a0;
- (BOOL)ak_forceAvailableForTouch:(id)a0;
- (void)startStroke:(SEL)a0;
- (void)_forceRedisplay;
- (double)_windowBackingScaleFactor;
- (struct CGPath { } *)copyStrokedInterpolatedPath;
- (void)handleCoalescedTouches:(id)a0 forTouch:(id)a1;

@end
