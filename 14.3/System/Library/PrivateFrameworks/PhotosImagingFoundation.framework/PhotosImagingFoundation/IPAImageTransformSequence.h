@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform> {
    NSArray *_transforms;
}

- (void).cxx_destruct;
- (id)description;
- (id)inverseTransform;
- (id)initWithTransforms:(id)a0;
- (BOOL)canAlignToPixelsExactly;
- (id)intrinsicGeometry;
- (id)inputGeometry;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0;

@end
