@class NSNumber, TSCH3DCamera, TSCH3DSceneRenderSetup, TSCH3DFramebuffer, TSCH3DScene;

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline {
    TSCH3DScene *_scene;
    TSCH3DFramebuffer *_framebuffer;
    TSCH3DSceneRenderSetup *_setup;
    TSCH3DCamera *_camera;
    NSNumber *_scale;
    NSNumber *_samples;
    NSNumber *_superSamples;
    NSNumber *_preserveFramebufferContent;
}

@property (retain, nonatomic) TSCH3DSceneRenderPipeline *original;
@property (readonly, nonatomic) TSCH3DCamera *camera;
@property (retain, nonatomic) TSCH3DScene *scene;
@property (retain, nonatomic) TSCH3DFramebuffer *framebuffer;
@property (retain, nonatomic) TSCH3DSceneRenderSetup *setup;
@property (nonatomic) float scale;
@property (readonly, nonatomic) float renderScale;
@property (nonatomic) float samples;
@property (nonatomic) float superSamples;
@property (nonatomic) BOOL preserveFramebufferContent;

+ (id)pipelineWithProcessor:(id)a0 session:(id)a1 scene:(id)a2;

- (BOOL)run;
- (id)session;
- (void).cxx_destruct;
- (BOOL)render;
- (void)setupCamera:(id)a0;
- (id)processor;
- (id)baseRecloneWithProcessor:(id)a0 scene:(id)a1;
- (BOOL)activateFramebuffer:(id)a0;
- (struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })backgroundClearColor;
- (id)baseRecloneWithRetargetProcessor:(id)a0 scene:(id)a1;
- (void)clearCamera;
- (void)clearFramebuffer;
- (id)cloneWithProcessor:(id)a0 scene:(id)a1;
- (id)cloneWithRetargetProcessor:(id)a0 scene:(id)a1;
- (id)concreteSetup;
- (id)initWithProcessor:(id)a0 session:(id)a1 scene:(id)a2;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (id)labelsMeshRendererForLabelsRenderer:(id)a0;
- (id)recloneWithPipelineClass:(Class)a0 processor:(id)a1 scene:(id)a2;
- (id)recloneWithPipelineClass:(Class)a0 retargetProcessor:(id)a1 scene:(id)a2;
- (BOOL)renderWithFramebuffer:(id)a0;
- (void)setObjectRenderMode:(int)a0;
- (void)setupRendering;
- (BOOL)shouldSkipLabelsIfHidden;

@end
