@interface UIGradient : NSObject {
    struct { double x0; double x1; double x2; double x3; double x4; } *_values;
    double _height;
    struct CGShading { } *_shader;
}

- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)initVerticalWithValues:(struct { double x0; double x1; double x2; double x3; double x4; } *)a0;

@end
