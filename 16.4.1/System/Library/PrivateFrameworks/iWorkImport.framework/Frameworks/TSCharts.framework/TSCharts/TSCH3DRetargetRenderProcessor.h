@class TSCH3DRenderProcessor;

@interface TSCH3DRetargetRenderProcessor : TSCH3DRenderProcessor

@property (retain, nonatomic) TSCH3DRenderProcessor *original;

+ (id)processorWithOriginal:(id)a0;

- (id)effects;
- (void)replace:(const void *)a0;
- (void)endFrame;
- (void)beginFrame;
- (void)submit:(id)a0;
- (void)setRenderState:(const void *)a0;
- (void)popState;
- (struct RenderState { struct BlendState { BOOL x0; int x1; } x0; struct DepthState { BOOL x0; BOOL x1; } x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; struct EnableClipDistances { struct array<bool, 8UL> { BOOL x0[8]; } x0; } x7; })renderState;
- (void)pushState;
- (id)init;
- (void)translate:(const void *)a0;
- (void).cxx_destruct;
- (void)scale:(const void *)a0;
- (void)multiply:(const void *)a0;
- (id)initWithOriginal:(id)a0;
- (void)pushRenderState;
- (void)setRenderHints:(const void *)a0;
- (long long)attribute:(id)a0 resource:(id)a1 specs:(const struct AttributeSpecs { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a2;
- (BOOL)canRenderPrefilteredLines;
- (void)copyProjectionInto:(void *)a0;
- (void)copyTransformInto:(void *)a0;
- (id)effectsStates;
- (void)popMatrix;
- (void)popRenderState;
- (void)projection:(const void *)a0;
- (void)pushMatrix;
- (struct RenderHints { struct TextureSizeHint { int x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } x0; })renderHints;
- (void)resetBuffers;
- (long long)texture:(id)a0 resource:(id)a1 attributes:(const void *)a2;
- (void)updateRenderState;

@end
