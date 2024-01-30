@class NSProgress, CAShapeLayer;

@interface DCCircularProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSProgress *observedProgress;

- (void).cxx_destruct;
- (void)dealloc;
- (void)awakeFromNib;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGPath { } *)newPathForProgress:(double)a0;

@end
