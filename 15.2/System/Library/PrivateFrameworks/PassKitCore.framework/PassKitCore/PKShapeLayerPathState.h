@interface PKShapeLayerPathState : NSObject {
    double _strokeStartT0;
    double _strokeStartT1;
    double _strokeEndT0;
    double _strokeEndT1;
}

- (id)description;
- (id)init;
- (void)dealloc;
- (double)strokeEndAtProgress:(double)a0;
- (id)initWithShapeLayer:(id)a0 reverse:(BOOL)a1;
- (void)setProgress:(double)a0 onShapeLayer:(id)a1 withAnimationHandler:(id /* block */)a2;
- (id)initWithStrokeStartT0:(double)a0 strokeStartT1:(double)a1 strokeEndT0:(double)a2 strokeEndT1:(double)a3;
- (double)strokeStartAtProgress:(double)a0;
- (id)initWithShapeLayer:(id)a0;
- (id)initWithStrokeStart:(double)a0 strokeEnd:(double)a1;
- (void)setProgress:(double)a0 onShapeLayer:(id)a1;
- (double)progressForShapeLayer:(id)a0;

@end
