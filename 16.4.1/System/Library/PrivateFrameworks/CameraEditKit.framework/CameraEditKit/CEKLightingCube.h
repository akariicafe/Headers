@interface CEKLightingCube : NSObject {
    void /* unknown type, empty encoding */ _world[8];
    void /* unknown type, empty encoding */ _normals[6];
    struct CGPoint { double x; double y; } _screen[8];
    long long _points[8];
    long long _planes[6];
}

- (const struct CGPath { } *)centerShadowPathWithSize:(struct CGSize { double x0; double x1; })a0 width:(double)a1;
- (const struct CGPath { } *)centerPathWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithRotationAngle:(double)a0;
- (double)intensityForPlane:(long long)a0;
- (const struct CGPath { } *)pathForOutlineWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
- (const struct CGPath { } *)pathForPlane:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)points:(struct CGPoint { double x0; double x1; }[6] *)a0 forOutlineWithSize:(struct CGSize { double x0; double x1; })a1;
- (void)points:(struct CGPoint { double x0; double x1; }[4] *)a0 forPlane:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
