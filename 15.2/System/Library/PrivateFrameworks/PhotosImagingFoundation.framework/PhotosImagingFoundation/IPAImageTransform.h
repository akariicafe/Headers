@protocol IPAImageGeometry;

@interface IPAImageTransform : NSObject <IPAImageTransform> {
    id<IPAImageGeometry> _inputGeometry;
    id<IPAImageGeometry> _intrinsicGeometry;
}

+ (id)identityTransformForGeometry:(id)a0;
+ (id)compositeTransforms:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)inverseTransform;
- (struct Vector2d { double x0; double x1; })mapVector:(struct Vector2d { double x0; double x1; })a0;
- (BOOL)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithInputGeometry:(id)a0 intrinsicGeometry:(id)a1;

@end
