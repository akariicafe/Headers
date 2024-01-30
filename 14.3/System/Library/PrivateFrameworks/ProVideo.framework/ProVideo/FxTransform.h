@interface FxTransform : NSObject {
    struct FxTransformPriv { struct CGPoint { double x0; double x1; } x0; float x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; } *_priv;
}

+ (id)identity;
+ (id)transformWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)transformWithScale:(struct CGPoint { double x0; double x1; })a0 rotate:(float)a1 translate:(struct CGPoint { double x0; double x1; })a2 shear:(struct CGPoint { double x0; double x1; })a3;

- (struct CGPoint { double x0; double x1; })scale;
- (float)rotation;
- (void)setRotation:(float)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })shear;
- (void)setScale:(struct CGPoint { double x0; double x1; })a0;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGPoint { double x0; double x1; })translation;
- (void)setShear:(struct CGPoint { double x0; double x1; })a0;
- (void)setCGAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithScale:(struct CGPoint { double x0; double x1; })a0 rotate:(float)a1 translate:(struct CGPoint { double x0; double x1; })a2 shear:(struct CGPoint { double x0; double x1; })a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })cgAffineTransform;

@end
