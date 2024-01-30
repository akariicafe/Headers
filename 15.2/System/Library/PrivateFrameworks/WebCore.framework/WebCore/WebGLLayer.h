@interface WebGLLayer : CALayer {
    BOOL _preparedForDisplay;
    struct optional<WebGLLayerSwapChain> { union { char __null_state_; struct WebGLLayerSwapChain { void /* function */ **_vptr$GraphicsContextGLIOSurfaceSwapChain; struct Buffer { struct unique_ptr<WebCore::IOSurface, std::default_delete<WebCore::IOSurface>> { struct __compressed_pair<WebCore::IOSurface *, std::default_delete<WebCore::IOSurface>> { struct IOSurface *__value_; } __ptr_; } surface; void *handle; } m_displayBuffer; struct Buffer { struct unique_ptr<WebCore::IOSurface, std::default_delete<WebCore::IOSurface>> { struct __compressed_pair<WebCore::IOSurface *, std::default_delete<WebCore::IOSurface>> { struct IOSurface *__value_; } __ptr_; } surface; void *handle; } m_spareBuffer; BOOL m_displayBufferInUse; WebGLLayer *m_layer; } __val_; } ; BOOL __engaged_; } _swapChain;
}

- (void)prepareForDisplay;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void *)swapChain;
- (id)initWithDevicePixelRatio:(float)a0 contentsOpaque:(BOOL)a1;
- (struct CGImage { } *)copyImageSnapshotWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)setTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)display;
- (id).cxx_construct;

@end
