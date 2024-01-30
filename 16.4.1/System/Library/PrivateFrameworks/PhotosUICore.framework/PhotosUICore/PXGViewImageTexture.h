@interface PXGViewImageTexture : PXGImageTexture {
    BOOL _isOpaque;
}

@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) unsigned int orientation;

- (long long)estimatedByteSize;
- (BOOL)isOpaque;
- (int)presentationType;
- (struct CGSize { double x0; double x1; })pixelSize;
- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1;

@end
