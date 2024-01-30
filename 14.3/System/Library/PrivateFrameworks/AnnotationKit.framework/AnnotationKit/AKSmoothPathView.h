@class AKController, CHPointStrokeFIFO, UIColor, NSString, CHBoxcarFilterPointFIFO, CHQuadCurvePointFIFO, AKBitmapFIFO;
@protocol AKSmoothPathViewDelegate;

@interface AKSmoothPathView : UIView <CHPointFIFODrawingTarget> {
    double _cachedEffectiveStrokeWidthInModel;
}

@property BOOL applyModelBaseScaleFactorToStroke;
@property (nonatomic) BOOL startedTouchDrawing;
@property BOOL isAddingPointWithoutSmoothing;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } singleDotRect;
@property double shadowRadiusInModel;
@property double shadowRadiusInView;
@property double cachedModelToViewScale;
@property (nonatomic) double minPressure;
@property (nonatomic) double maxPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;
@property (retain, nonatomic) CHPointStrokeFIFO *strokeFIFO;
@property (retain, nonatomic) CHBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) AKBitmapFIFO *bitmapFifo;
@property (weak) AKController *controller;
@property double currentWeight;
@property BOOL disableSingleDotSpecialCase;
@property double singleDotCurrentSize;
@property (retain) id<AKSmoothPathViewDelegate> delegate;
@property (nonatomic) BOOL prestrokedOutputMode;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (nonatomic) BOOL hasShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)a0;

- (void)_clear;
- (void)teardown;
- (BOOL)isOpaque;
- (void).cxx_destruct;
- (void)commonInit;
- (id)drawing;
- (void)awakeFromNib;
- (void)handleTapAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithController:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_windowBackingScaleFactor;
- (void)continueStrokeWithoutSmoothing:(SEL)a0;
- (double)weightForValue:(double)a0;
- (void)continueStroke:(SEL)a0;
- (void)terminateStroke;
- (void)handleForwardedEvent:(id)a0;
- (void)handleDragAction:(id)a0;
- (void)_updateShadowRadiusInView;
- (void)updateInterpolatingFifoUnitScale;
- (void)_updateInterpolatingFifoLineWidth;
- (void)_setupFilterChainWithBitmapFifo:(BOOL)a0;
- (struct CGContext { } *)_getPlatformCGContext;
- (void)_setupShadowInContext:(struct CGContext { } *)a0;
- (double)_effectiveStrokeWidthInModel;
- (void)callDelegate;
- (void)startStroke;
- (void /* unknown type, empty encoding */)_pointForRecognizer:(id)a0;
- (void /* unknown type, empty encoding */)_pointForTouch:(id)a0;
- (BOOL)_catchUpAccumulatedTouchesForRecognizer:(id)a0;
- (double)_convertValueFromModelToSelf:(double)a0;

@end
