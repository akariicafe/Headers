@class CAShapeLayer, NSTimer, STSProgressArcLayer, NSDate;

@interface STSRoundProgressView : UIView {
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    struct CGPoint { double x; double y; } _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
}

@property (retain, nonatomic, setter=_setProgressArcLayer:) STSProgressArcLayer *_progressArcLayer;
@property (nonatomic, setter=_setContentsScale:) double _contentsScale;
@property (readonly, nonatomic) long long style;
@property (nonatomic) double progress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)resetProgress;
- (void)startProgressTimer;
- (double)toRadian:(double)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_updateSublayersContentsScale;
- (void)stopProgressTimer;
- (void)increaseUIProgress:(id)a0;
- (void)_updateUIProgress;
- (void)setInitialIncreaseRatePerFrame:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPieRadius:(double)a0;
- (void)recalculateIncreaseProgress:(double)a0 withTimeDiff:(double)a1;
- (void)_setupSubviews;

@end
