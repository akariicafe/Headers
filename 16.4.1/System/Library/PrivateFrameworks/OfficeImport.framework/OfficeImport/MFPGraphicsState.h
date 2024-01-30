@interface MFPGraphicsState : NSObject {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mPageTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mWorldTransform;
}

- (void)removeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithDefaults;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })worldTransform;
- (void)setWorldTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 order:(int)a1;
- (id)initWithGraphicsState:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pageTransform;
- (void)setPageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
