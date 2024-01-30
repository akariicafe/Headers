@class VCPObjectPool, VCPSceneProcessingImageManager, NSObject, PVSceneTaxonomy;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPPreAnalyzer : NSObject {
    VCPSceneProcessingImageManager *_imageManager;
    PVSceneTaxonomy *_sceneTaxonomy;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pool8Y;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
    VCPObjectPool *_sessionPool;
}

+ (BOOL)_useR14J9;
+ (BOOL)_includeDO;
+ (unsigned long long)_panoVNRequestMethod;
+ (BOOL)_includeSO;
+ (BOOL)_includeLM;
+ (BOOL)_includeNSFW;
+ (unsigned long long)_getNSFWModelRevision;
+ (BOOL)_includeSE;
+ (unsigned long long)_getSERevision;
+ (BOOL)_includeSDG;
+ (unsigned long long)_getSDGModelRevision;
+ (BOOL)_enableSceneAssetConcurrency;
+ (unsigned long long)_getSHRevision;
+ (BOOL)_allowANE;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)_createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool **)a0 withPixelFormat:(unsigned int)a1;
- (int)_convertFromBuffer:(struct __CVBuffer { } *)a0 toLumaPixelBuffer:(struct __CVBuffer **)a1 isPano:(BOOL)a2;
- (id).cxx_construct;
- (void)_parseClassificationObservations:(id)a0 toClassificationResults:(id)a1;
- (void)_generateSceneClassifications:(id)a0 withClassificationResults:(id)a1 andDOResults:(id)a2 andJunkImageResults:(id)a3 andLMResults:(id)a4 andNSFWResults:(id)a5 andSEResults:(id)a6 andSDGResults:(id)a7;
- (int)_createAestheticsRequest:(id *)a0 andClassificationRequest:(id *)a1 andSceneprintRequest:(id *)a2 andJunkImageRequest:(id *)a3 andSaliencyImageRequest:(id *)a4 andDORequest:(id *)a5 andLMRequest:(id *)a6 andNSFWRequest:(id *)a7 andSERequest:(id *)a8 andSDGRequest:(id *)a9 andSORequest:(id *)a10 andRawSceneprintRequest:(id *)a11;
- (int)_collectSceneAnalysisResults:(id *)a0 withClassificationResults:(id)a1 andJunkImageResults:(id)a2 andAestheticsResults:(id)a3 andSaliencyResults:(id)a4 andSceneprintResults:(id)a5 andDOResults:(id)a6 andLMResults:(id)a7 andNSFWResults:(id)a8 andSEResults:(id)a9 andSDGResults:(id)a10 andSaliencyObjectnessResults:(id)a11;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (int)_performBlurAnalysis:(id *)a0 withPixelBuffer:(struct __CVBuffer { } *)a1 usingAnalyzer:(id)a2;
- (int)_performSceneAnalysis:(id *)a0 withRequestHandler:(id)a1;
- (int)_performBlurAnalysis:(id *)a0 withLumaPixelBuffer:(struct __CVBuffer { } *)a1 isPano:(BOOL)a2 isSDOF:(BOOL)a3;
- (int)_performExposureAnalysis:(id *)a0 withLumaPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)analyzeWithImageURL:(id)a0 isPano:(BOOL)a1 isSDOF:(BOOL)a2 completionHandler:(id /* block */)a3;
- (int)_loadImageURL:(id)a0 isPano:(BOOL)a1 withRequestHandler:(id *)a2 session:(id)a3 andLumaPixelBuffer:(struct __CVBuffer **)a4;
- (int)_performAnalysis:(id *)a0 isPano:(BOOL)a1 isSDOF:(BOOL)a2 withRequestHandler:(id)a3 andLumaPixelBuffer:(struct __CVBuffer { } *)a4;
- (int)analyzeWithPixelBuffer:(struct __CVBuffer { } *)a0 isPano:(BOOL)a1 isSDOF:(BOOL)a2 results:(id *)a3 cancel:(id /* block */)a4;

@end
