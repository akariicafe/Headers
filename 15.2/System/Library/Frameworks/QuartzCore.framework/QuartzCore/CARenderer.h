@class CAContext, CALayer;
@protocol CARendererDelegate;

@interface CARenderer : NSObject {
    void *_priv;
}

@property (retain) CAContext *context;
@property (weak) id<CARendererDelegate> delegate;
@property (retain) CALayer *layer;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

+ (id)rendererWithMTLTexture:(id)a0 options:(id)a1;
+ (id)rendererWithEAGLContext:(id)a0 options:(id)a1;

- (id)_initWithOptions:(id)a0;
- (void)setDestination:(id)a0;
- (void)render;
- (void)endFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateBounds;
- (double)nextFrameTime;
- (id)_initWithMTLTexture:(id)a0 options:(id)a1;
- (void)addUpdateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_initWithEAGLContext:(id)a0 options:(id)a1;
- (void)beginFrameAtTime:(double)a0 timeStamp:(struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a1;
- (BOOL)hasMissingContent;
- (void)dealloc;

@end
