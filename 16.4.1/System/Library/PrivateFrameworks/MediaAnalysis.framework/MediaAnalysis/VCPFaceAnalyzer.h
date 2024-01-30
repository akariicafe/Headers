@class VCPFaceMerger, VCPObjectPool;

@interface VCPFaceAnalyzer : NSObject {
    int _processingVersion;
    VCPFaceMerger *_faceMerger;
    VCPObjectPool *_sessionPool;
}

+ (BOOL)_downsampleBeforeFaceProcessing;
+ (BOOL)_faceprintFastMode;

- (int)updateMissingFaceprintForFaces:(id)a0 withAsset:(id)a1;
- (int)_createBlurRequests:(id *)a0 andExposureRequests:(id *)a1 forFaceObservations:(id)a2;
- (id)_existingFacesFromAsset:(id)a0;
- (void)_checkAnalysisRequests:(id)a0 forTooSmallFaceObservations:(id)a1 withAnalysisResults:(id)a2;
- (int)analyzeFaceQuality:(id *)a0 withAsset:(id)a1 andCancelBlock:(id /* block */)a2;
- (int)analyzeAsset:(id)a0 withResource:(id)a1 resourceURL:(id)a2 quickMode:(BOOL)a3 results:(id *)a4;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (int)quickAnalyzeAsset:(id)a0 results:(id *)a1;
- (int)_performAnalysis:(id *)a0 withRequestHandler:(id)a1 quickMode:(BOOL)a2 sourceWidth:(unsigned long long)a3 sourceHeight:(unsigned long long)a4;
- (int)_loadImageRequestHandler:(id *)a0 orientation:(unsigned int *)a1 bufferWidth:(int *)a2 bufferHeight:(int *)a3 withResource:(id)a4 resourceURL:(id)a5 andAsset:(id)a6;
- (int)refineAnalysis:(id *)a0 requestHandler:(id)a1 forAsset:(id)a2 orientedWidth:(unsigned long long)a3 orientedHeight:(unsigned long long)a4;
- (void).cxx_destruct;

@end
