@interface SKMutableTexture : SKTexture {
    struct __IOSurface { } *_ioSurface;
    BOOL _ioSurfaceBacked;
    struct CGSize { double width; double height; } _textureSize;
    void *_pixelData;
    unsigned long long _pixelDataLength;
    int _pixelFormat;
}

+ (id)mutableTextureWithSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (void)dealloc;
- (struct shared_ptr<jet_texture> { struct jet_texture *x0; struct __shared_weak_count *x1; })_backingTexture;
- (void)modifyPixelDataWithBlock:(id /* block */)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 ioSurfaceBacked:(BOOL)a1 pixelFormat:(int)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(int)a1;

@end
