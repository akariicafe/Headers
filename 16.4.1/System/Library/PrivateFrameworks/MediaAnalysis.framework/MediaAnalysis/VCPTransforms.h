@interface VCPTransforms : NSObject {
    int _minSize;
    int _transformedImageWidth;
    int _transformedImageHeight;
}

- (struct __CVBuffer { } *)cropAndScale:(struct __CVBuffer { } *)a0 regionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initImageTransform:(int)a0 transformedImageWidth:(int)a1 transformedImageHeight:(int)a2;

@end
