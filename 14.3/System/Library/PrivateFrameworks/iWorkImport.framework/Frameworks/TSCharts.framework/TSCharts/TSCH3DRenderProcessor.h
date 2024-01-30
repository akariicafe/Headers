@class TSCH3DFramebuffer;

@interface TSCH3DRenderProcessor : NSObject

@property (retain, nonatomic) TSCH3DFramebuffer *activeFramebuffer;

+ (void)initialize;
+ (id)processor;

- (void)endFrame;
- (void)dealloc;
- (id)effects;
- (void)popState;
- (void)beginFrame;
- (void)pushState;
- (void)pushRenderState;
- (void)popRenderState;
- (void)wipeActiveFramebuffer:(const struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } *)a0;
- (void)geometry:(id)a0;
- (void)normals:(id)a0;
- (void)texcoords:(id)a0;
- (void)updateRenderState;
- (struct RenderState { struct BlendState { BOOL x0; int x1; } x0; struct DepthState { BOOL x0; BOOL x1; } x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; struct EnableClipDistances { struct array<bool, 8> { BOOL x0[8]; } x0; } x7; })renderState;
- (void)setRenderState:(const struct RenderState { struct BlendState { BOOL x0; int x1; } x0; struct DepthState { BOOL x0; BOOL x1; } x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; struct EnableClipDistances { struct array<bool, 8> { BOOL x0[8]; } x0; } x7; } *)a0;
- (struct RenderHints { struct TextureSizeHint { int x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } x0; })renderHints;
- (void)setRenderHints:(const struct RenderHints { struct TextureSizeHint { int x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } x0; } *)a0;
- (void)resetBuffers;
- (BOOL)canRenderPrefilteredLines;

@end
