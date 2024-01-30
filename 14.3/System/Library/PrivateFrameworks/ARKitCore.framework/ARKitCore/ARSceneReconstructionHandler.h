@class ARSceneReconstructionOptions;
@protocol ARSceneReconstructionDelegate;

@interface ARSceneReconstructionHandler : NSObject {
    struct CV3DReconSession { } *_reconstructionSession;
    BOOL _sessionActivated;
    struct __CVPixelBufferPool { } *_postProcessedDepthConfidencePool;
}

@property (readonly, nonatomic) ARSceneReconstructionOptions *options;
@property (readonly, nonatomic) struct CV3DVIOContext { } *vioHandle;
@property (readonly, nonatomic) unsigned long long sceneReconstruction;
@property (weak, nonatomic) id<ARSceneReconstructionDelegate> delegate;

- (void)setup;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)pause;
- (void)start;
- (void)reconfigureSceneReconstruction:(unsigned long long)a0;
- (void)pushDepth:(id)a0 semanticSegmentation:(id)a1 personSegmentation:(id)a2 pose:(id)a3;
- (id)initWithSceneReconstruction:(unsigned long long)a0 options:(id)a1 vioHandle:(struct CV3DVIOContext { } *)a2;
- (void)meshPlaneHarmonizationShouldEnable:(BOOL)a0;
- (void)processPlaneList:(struct CV3DPlaneDetectionPlaneList { } *)a0;
- (void)handleCFError:(struct __CFError { } *)a0 withErrorMessage:(id)a1;
- (BOOL)_configureMeshingConfiguration:(struct CV3DReconMeshingConfiguration { } *)a0;
- (void)_didReceiveMeshListUpdateCallbackWithMeshList:(struct CV3DReconMeshList { } *)a0 timestamp:(double)a1 error:(struct __CFError { } *)a2;
- (void)handleCFError:(struct __CFError { } *)a0 withErrorMessage:(id)a1 failSession:(BOOL)a2;
- (struct __CVBuffer { } *)postProcessConfidenceBuffer:(struct __CVBuffer { } *)a0 fromSegmentationData:(id)a1;

@end
