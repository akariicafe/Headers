@interface MediaCoreUI.MaterialRenderer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ textureProvider;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ contentMode;
    void /* unknown type, empty encoding */ resizeTexture;
    void /* unknown type, empty encoding */ textureFallbackCopyAllocator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isBlurDisabled;
}

- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (id)init;
- (void).cxx_destruct;

@end
