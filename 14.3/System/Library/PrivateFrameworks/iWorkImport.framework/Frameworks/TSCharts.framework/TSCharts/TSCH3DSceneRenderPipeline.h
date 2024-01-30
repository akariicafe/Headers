@class NSNumber, TSCH3DCamera, TSCH3DSceneRenderSetup, TSCH3DFramebuffer, TSCH3DScene;

@interface TSCH3DSceneRenderPipeline : TSCH3DRenderPipeline {
    TSCH3DScene *mScene;
    TSCH3DFramebuffer *mFramebuffer;
    TSCH3DSceneRenderSetup *mSetup;
    TSCH3DCamera *mCamera;
    NSNumber *mScale;
    NSNumber *mSamples;
    NSNumber *mSuperSamples;
    NSNumber *mPreserveFramebufferContent;
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
- (BOOL)render;
- (id)session;
- (void)dealloc;
- (void)setupCamera:(id)a0;
- (id)processor;
- (id)initWithProcessor:(id)a0 session:(id)a1 scene:(id)a2;
- (id)recloneWithPipelineClass:(Class)a0 processor:(id)a1 scene:(id)a2;
- (id)recloneWithPipelineClass:(Class)a0 retargetProcessor:(id)a1 scene:(id)a2;
- (id)concreteSetup;
- (struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })backgroundClearColor;
- (void)renderSelector:(SEL)a0;
- (BOOL)activateFramebuffer:(id)a0;
- (void)setupRendering;
- (BOOL)renderWithFramebuffer:(id)a0;
- (id)baseRecloneWithProcessor:(id)a0 scene:(id)a1;
- (id)cloneWithProcessor:(id)a0 scene:(id)a1;
- (id)baseRecloneWithRetargetProcessor:(id)a0 scene:(id)a1;
- (id)cloneWithRetargetProcessor:(id)a0 scene:(id)a1;
- (void)setObjectRenderMode:(int)a0;
- (void)clearCamera;
- (void)clearFramebuffer;
- (BOOL)shouldSkipLabelsIfHidden;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)a0;
- (id)labelsMeshRendererForLabelsRenderer:(id)a0;

@end
