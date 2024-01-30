@interface WebGLLayer : CALayer {
    struct WebGLLayerBuffer { struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface> > { struct __compressed_pair<WebCore::IOSurface *, std::__1::default_delete<WebCore::IOSurface> > { struct IOSurface *__value_; } __ptr_; } surface; void *handle; } _contentsBuffer;
    struct WebGLLayerBuffer { struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface> > { struct __compressed_pair<WebCore::IOSurface *, std::__1::default_delete<WebCore::IOSurface> > { struct IOSurface *__value_; } __ptr_; } surface; void *handle; } _spareBuffer;
    BOOL _preparedForDisplay;
}

- (void)setTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void).cxx_destruct;
- (void)display;
- (struct CGImage { } *)copyImageSnapshotWithColorSpace:(struct CGColorSpace { } *)a0;
- (id).cxx_construct;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithDevicePixelRatio:(float)a0 contentsOpaque:(BOOL)a1;
- (struct WebGLLayerBuffer { struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface> > { struct __compressed_pair<WebCore::IOSurface *, std::__1::default_delete<WebCore::IOSurface> > { struct IOSurface *x0; } x0; } x0; void *x1; })recycleBuffer;
- (void *)detachClient;
- (void)prepareForDisplayWithContents:(struct WebGLLayerBuffer { struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface> > { struct __compressed_pair<WebCore::IOSurface *, std::__1::default_delete<WebCore::IOSurface> > { struct IOSurface *x0; } x0; } x0; void *x1; })a0;

@end
