@class ARSceneReconstructionOptions;
@protocol ARSceneReconstructionDelegate;

@interface ARSceneReconstructionHandler : NSObject {
    struct CV3DReconSession { } *_reconstructionSession;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reconstructionSessionLock;
    struct CV3DSLAMSession { } *_slamSessionHandle;
    BOOL _sessionActivated;
    struct __CVPixelBufferPool { } *_postProcessedDepthConfidencePool;
    BOOL _occupancyMappingEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _slamStateBufferBackLock;
    struct vector<std::shared_ptr<const CV3DSLAMStateContext>, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<const CV3DSLAMStateContext> *, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { void *__value_; } __end_cap_; } _slamStateBufferBack;
    struct vector<std::shared_ptr<const CV3DSLAMStateContext>, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<const CV3DSLAMStateContext> *, std::allocator<std::shared_ptr<const CV3DSLAMStateContext>>> { void *__value_; } __end_cap_; } _slamStateBufferFront;
    struct optional<unsigned long long> { union { char __null_state_; unsigned long long __val_; } ; BOOL __engaged_; } _slamStateCbID;
}

@property (readonly, nonatomic) ARSceneReconstructionOptions *options;
@property (readonly, nonatomic) unsigned long long sceneReconstruction;
@property (weak, nonatomic) id<ARSceneReconstructionDelegate> delegate;

- (id).cxx_construct;
- (void)pause;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)reset;
- (void)handleCFError:(struct __CFError { } *)a0 withErrorMessage:(id)a1;
- (BOOL)_canReconfigureExistingSessionForSceneReconstruction:(unsigned long long)a0 options:(id)a1;
- (BOOL)_configureMeshingConfiguration:(struct CV3DReconMeshingConfiguration { } *)a0 error:(id *)a1;
- (void)_didReceiveKeyframeListUpdateCallbackWithKeyframeList:(struct CV3DReconKeyframeList { } *)a0 timestamp:(double)a1 error:(struct __CFError { } *)a2;
- (void)_didReceiveMeshListUpdateCallbackWithMeshList:(struct CV3DReconMeshList { } *)a0 timestamp:(double)a1 error:(struct __CFError { } *)a2;
- (BOOL)_reconfigureSession:(struct CV3DReconSession { } *)a0 error:(id *)a1;
- (BOOL)_recreateReconstructionSessionWithError:(id *)a0;
- (void)_setupSLAMStateBuffering;
- (void)bufferSlamState:(struct CV3DSLAMStateContext { } *)a0;
- (void)handleCFError:(struct __CFError { } *)a0 withErrorMessage:(id)a1 failSession:(BOOL)a2;
- (id)initWithSceneReconstruction:(unsigned long long)a0 options:(id)a1 slamSessionHandle:(struct CV3DSLAMSession { } *)a2;
- (void)meshPlaneHarmonizationShouldEnable:(BOOL)a0;
- (struct __CVBuffer { } *)postProcessConfidenceBuffer:(struct __CVBuffer { } *)a0 fromSegmentationData:(id)a1;
- (void)processPlaneList:(struct CV3DPlaneDetectionPlaneList { } *)a0;
- (void)pushDepth:(id)a0 semanticSegmentation:(id)a1 personSegmentation:(id)a2 pose:(id)a3;
- (BOOL)queryOccupancyWithPoints:(id)a0 callback:(id /* block */)a1;
- (void)reconfigureSceneReconstruction:(unsigned long long)a0 options:(id)a1;
- (void)swapSlamStateBuffers;

@end
