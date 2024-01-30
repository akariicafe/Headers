@class VCPObjectPool, VCPSceneProcessingImageManager, VCPMAMLModel, NSObject, PVSceneTaxonomy;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPPreAnalyzer : NSObject {
    VCPSceneProcessingImageManager *_imageManager;
    PVSceneTaxonomy *_sceneTaxonomy;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pool8Y;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
    VCPObjectPool *_sessionPool;
    VCPMAMLModel *_rotationModel;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _rotationPool;
    VCPObjectPool *_ivsPool;
}

+ (BOOL)_allowANE;
+ (BOOL)_includeRotation;
+ (BOOL)_includeMeme;
+ (BOOL)_includeDocument;
+ (BOOL)_useR14J9;
+ (BOOL)_includeDO;
+ (BOOL)_includeSO;
+ (BOOL)_includeLM;
+ (BOOL)_includeNSFW;
+ (BOOL)_includeSE;
+ (BOOL)_includeSDG;
+ (BOOL)_includeWP;
+ (BOOL)_includeIVS;
+ (unsigned long long)_getSHRevision;
+ (BOOL)_enableSceneAssetConcurrency;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)_createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool **)a0 withBufferSize:(long long)a1 andPixelFormat:(unsigned int)a2;
- (int)_convertFromBuffer:(struct __CVBuffer { } *)a0 toLumaPixelBuffer:(struct __CVBuffer **)a1 isPano:(BOOL)a2;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (id)_processBoundingBoxFromDetectedObjects:(id)a0 forSceneClassID:(id)a1;
- (void)_insertBoundingBox:(id)a0 toSortedBoundingBoxes:(id)a1;
- (id)_extractAndSortBoundingBoxFromDetectedObjects:(id)a0;
- (void)_parseClassificationObservations:(id)a0 toClassificationResults:(id)a1;
- (void)_parseClassificationObservations:(id)a0 withPrefix:(id)a1 toClassificationResults:(id)a2;
- (void)_generateSceneClassifications:(id)a0 fromRequests:(id)a1;
- (id)_obfuscateLabelName:(id)a0;
- (int)_createRequests:(id)a0;
- (int)_collectSceneAnalysisResults:(id *)a0 fromRequests:(id)a1 wpResults:(id)a2 ivsResults:(id)a3;
- (int)_performBlurAnalysis:(id *)a0 withPixelBuffer:(struct __CVBuffer { } *)a1 usingAnalyzer:(id)a2;
- (int)_performSceneAnalysis:(id *)a0 image:(id)a1 isPano:(BOOL)a2;
- (int)_performBlurAnalysis:(id *)a0 withLumaPixelBuffer:(struct __CVBuffer { } *)a1 isPano:(BOOL)a2 isSDOF:(BOOL)a3;
- (int)_performExposureAnalysis:(id *)a0 withLumaPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)_performRotationAnalysis:(id *)a0 withColorPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)_loadImageURL:(id)a0 isPano:(BOOL)a1 colorPixelBuffer:(struct __CVBuffer **)a2 andLumaPixelBuffer:(struct __CVBuffer **)a3 image:(id *)a4;
- (int)_performAnalysis:(id *)a0 isPano:(BOOL)a1 isSDOF:(BOOL)a2 colorPixelBuffer:(struct __CVBuffer { } *)a3 andLumaPixelBuffer:(struct __CVBuffer { } *)a4 image:(id)a5;
- (void)analyzeWithImageURL:(id)a0 isPano:(BOOL)a1 isSDOF:(BOOL)a2 completionHandler:(id /* block */)a3;
- (int)analyzeWithPixelBuffer:(struct __CVBuffer { } *)a0 isPano:(BOOL)a1 isSDOF:(BOOL)a2 results:(id *)a3 cancel:(id /* block */)a4;

@end
