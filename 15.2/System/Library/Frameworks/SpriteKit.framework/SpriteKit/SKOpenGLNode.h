@interface SKOpenGLNode : SKNode

@property struct CGSize { double x0; double x1; } viewportSize;

+ (id)openGLNodeWithViewportSize:(struct CGSize { double x0; double x1; })a0;

- (void)encodeWithCoder:(id)a0;
- (void)renderForTime:(double)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithViewportSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needsRenderForTime:(double)a0;
- (void)_renderForTime:(double)a0;

@end
