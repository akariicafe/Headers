@class NUPixelFormat, NUColorSpace, NUGLContext;
@protocol NUSurfaceStorage;

@interface NUGLLayer : CALayer {
    NUGLContext *_context;
    id<NUSurfaceStorage> _drawingStorage;
    id<NUSurfaceStorage> _displayStorage;
}

@property (readonly, nonatomic) NUPixelFormat *pixelFormat;
@property (readonly, nonatomic) NUColorSpace *colorSpace;

- (id)init;
- (void).cxx_destruct;
- (void)reset:(id)a0;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)draw:(id)a0;
- (void)display;
- (void)_updateDisplay:(id)a0;
- (BOOL)contentsAreFlipped;
- (void)_resetContents;
- (void)_ensureDrawingStorageOfSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_drawInTexture:(id)a0 context:(id)a1;
- (void)_updateDisplayWithIdentifier:(id)a0;

@end
