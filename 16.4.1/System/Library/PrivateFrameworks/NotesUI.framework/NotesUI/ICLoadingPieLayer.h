@class NSProgress, CAShapeLayer;

@interface ICLoadingPieLayer : CALayer

@property (retain, nonatomic) CAShapeLayer *pieLayer;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (readonly, nonatomic) double progress;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) BOOL removeOnCompletion;

- (void)setProgress:(double)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (struct CGPath { } *)newPathForProgress:(double)a0;

@end
