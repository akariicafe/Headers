@class NSDate, CAShapeLayer, PXProgressArcLayer, UIView, CALayer, NSTimer;

@interface PXRoundProgressView : UIView {
    struct CGPoint { double x; double y; } _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } smallSize;

@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (retain, nonatomic, setter=_setSliceLayer:) CAShapeLayer *_sliceLayer;
@property (retain, nonatomic, setter=_setCircleLayer:) CAShapeLayer *_circleLayer;
@property (retain, nonatomic, setter=_setProgressArcLayer:) PXProgressArcLayer *_progressArcLayer;
@property (retain, nonatomic, setter=_setIrisGlyphLayer:) CALayer *_irisGlyphLayer;
@property (nonatomic, setter=_setContentsScale:) double _contentsScale;
@property (nonatomic) long long style;
@property (nonatomic) double progress;

+ (double)toRadian:(double)a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)resetProgress;
- (void)startProgressTimer;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_updateSubviews;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)_updateSublayersContentsScale;
- (void)_setPieRadius:(double)a0;
- (void)stopProgressTimer;
- (void)increaseUIProgress:(id)a0;
- (void)_updateUIProgress;
- (void)setInitialIncreaseRatePerFrame:(double)a0;
- (void)_recalculateIncreaseProgress:(double)a0 withTimeDiff:(double)a1;

@end
