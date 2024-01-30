@interface TIFitAffineMLLMatrixWrapper : NSObject {
    void *_pMatrix;
    void *_pScaleMatrix;
    void *_pRotationMatrix;
    void *_pSkewMatrix;
    void *_pTransMatrix;
}

- (void)setRotation:(double)a0;
- (void)dealloc;
- (id)init;
- (void)setMatrix:(void *)a0;
- (void)calcMatrix;
- (void)setSkewRotation:(double)a0;
- (void)setXScale:(double)a0 yScale:(double)a1;
- (void)setXTrans:(double)a0 yTrans:(double)a1;
- (struct CGPoint { double x0; double x1; })transformedPoint:(struct CGPoint { double x0; double x1; })a0;

@end
