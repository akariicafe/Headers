@class NSTimer, CAShapeLayer, UIView, NSDate;

@interface MFRoundProgressView : UIView {
    struct CGPoint { double x; double y; } _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    NSDate *_prevUpdateTime;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    UIView *_contentView;
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)dealloc;
- (void)resetProgress;
- (void)startProgressTimer;
- (double)toRadian:(double)a0;
- (void)layoutSubviews;
- (void)stopProgressTimer;
- (void)increaseUIProgress:(id)a0;
- (void)_updateUIProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPieRadius:(double)a0;
- (void)recalculateIncreaseProgress:(double)a0 withTimeDiff:(double)a1;
- (void)_updateSubviews;

@end
