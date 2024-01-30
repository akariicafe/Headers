@class TSCH3DFramebuffer;

@interface TSCH3DRenderProcessor : NSObject

@property (retain, nonatomic) TSCH3DFramebuffer *activeFramebuffer;

+ (void)initialize;
+ (id)processor;

- (id)effects;
- (void)endFrame;
- (void)beginFrame;
- (void)setRenderState:(const void *)a0;
- (void)popState;
- (struct RenderState { struct BlendState { BOOL x0; int x1; } x0; struct DepthState { BOOL x0; BOOL x1; } x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; struct EnableClipDistances { struct array<bool, 8UL> { BOOL x0[8]; } x0; } x7; })renderState;
- (void)pushState;
- (void).cxx_destruct;
- (void)pushRenderState;
- (void)setRenderHints:(const void *)a0;
- (BOOL)canRenderPrefilteredLines;
- (void)geometry:(id)a0;
- (void)normals:(id)a0;
- (void)popRenderState;
- (struct RenderHints { struct TextureSizeHint { int x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } x0; })renderHints;
- (void)resetBuffers;
- (void)texcoords:(id)a0;
- (void)updateRenderState;
- (void)wipeActiveFramebuffer:(const void *)a0;

@end
