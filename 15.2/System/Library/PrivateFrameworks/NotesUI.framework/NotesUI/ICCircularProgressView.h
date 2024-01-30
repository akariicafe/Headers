@class NSProgress, CAShapeLayer;

@interface ICCircularProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSProgress *observedProgress;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (struct CGPath { } *)newPathForProgress:(double)a0;

@end
