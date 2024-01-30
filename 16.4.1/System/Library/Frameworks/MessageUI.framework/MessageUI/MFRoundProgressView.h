@class CAShapeLayer, CADisplayLink, UIView;

@interface MFRoundProgressView : UIView {
    struct CGPoint { double x; double y; } _pieCenter;
    double _pieRadius;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    UIView *_contentView;
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    CADisplayLink *_displayLink;
    double _prevUpdateTimeInterval;
}

@property (nonatomic) double progress;

- (double)toRadian:(double)a0;
- (void)resetProgress;
- (void)recalculateIncreaseProgress:(double)a0 withTimeDiff:(double)a1;
- (void)_updateSubviews;
- (void)setPieRadius:(double)a0;
- (void)_displayLinkDidFire:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_updateUIProgress;
- (void).cxx_destruct;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;

@end
