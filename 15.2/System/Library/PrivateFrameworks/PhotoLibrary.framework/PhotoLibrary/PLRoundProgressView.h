@class UIColor, PLProgressArcLayer, CAShapeLayer, NSTimer, UIView, CALayer, NSDate;

@interface PLRoundProgressView : UIView {
    struct CGPoint { double x; double y; } _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
}

@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (retain, nonatomic, setter=_setSliceLayer:) CAShapeLayer *_sliceLayer;
@property (retain, nonatomic, setter=_setCircleLayer:) CAShapeLayer *_circleLayer;
@property (retain, nonatomic, setter=_setProgressArcLayer:) PLProgressArcLayer *_progressArcLayer;
@property (retain, nonatomic, setter=_setIrisGlyphLayer:) CALayer *_irisGlyphLayer;
@property (nonatomic, setter=_setContentsScale:) double _contentsScale;
@property (readonly, nonatomic) long long style;
@property (retain, nonatomic) UIColor *manualColor;
@property (nonatomic) BOOL allowFake25PercentProgress;
@property (nonatomic) BOOL skipResetOnRelayout;
@property (nonatomic) double progress;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)resetProgress;
- (void)startProgressTimer;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (double)toRadian:(double)a0;
- (void)_updateSublayersContentsScale;
- (void)stopProgressTimer;
- (void)increaseUIProgress:(id)a0;
- (void)_updateUIProgress;
- (void)setInitialIncreaseRatePerFrame:(double)a0;
- (void)setPieRadius:(double)a0;
- (void)recalculateIncreaseProgress:(double)a0 withTimeDiff:(double)a1;

@end
