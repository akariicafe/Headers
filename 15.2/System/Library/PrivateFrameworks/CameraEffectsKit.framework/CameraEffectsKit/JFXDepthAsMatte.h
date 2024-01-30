@interface JFXDepthAsMatte : JFXMatting {
    struct __CVPixelBufferPool { } *_rotatedFBufferPool;
    struct __CVPixelBufferPool { } *_scaledUpFBufferPool;
    struct __CVPixelBufferPool { } *_alphaPool;
}

+ (BOOL)_defaultMatteGeneratorPrefersDepth;
+ (struct CGSize { double x0; double x1; })mattingDepthInputSize;

- (void)dealloc;
- (id)initForFrameSet:(id)a0;
- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;

@end
