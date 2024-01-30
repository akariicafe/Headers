@interface PXGViewImageTexture : PXGImageTexture {
    BOOL _isOpaque;
}

@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) unsigned int orientation;

- (struct CGSize { double x0; double x1; })pixelSize;
- (long long)estimatedByteSize;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1;
- (int)presentationType;
- (BOOL)isOpaque;
- (void)dealloc;

@end
