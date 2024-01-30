@class VCPObjectPool, VCPFaceMerger, NSObject, PVContext;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPFaceAnalyzer : NSObject {
    PVContext *_context;
    VCPFaceMerger *_faceMerger;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    VCPObjectPool *_sessionPool;
}

+ (BOOL)_allowANE;

- (id)initWithContext:(id)a0;
- (int)_createFaceRectanglesRequest:(id *)a0 andFaceprintRequest:(id *)a1;
- (void).cxx_destruct;
- (int)_performAnalysis:(id *)a0 withRequestHandler:(id)a1 options:(id)a2 sourceWidth:(unsigned long long)a3 sourceHeight:(unsigned long long)a4;
- (void)_checkAnalysisRequests:(id)a0 forTooSmallFaceObservations:(id)a1 withAnalysisResults:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectFromMappingNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)_verifiedPersonsFetchResultWithLocalIdentifiers:(id)a0 andPhotoLibrary:(id)a1 andError:(id *)a2;
- (long long)_qualityMeasureForFace:(id)a0 countOfFacesOnAsset:(unsigned long long)a1;
- (int)analyzeWithImage:(id)a0 andAsset:(id)a1 andOptions:(id)a2 andResults:(id *)a3;
- (int)_refineAnalysis:(id *)a0 forAsset:(id)a1 andImage:(id)a2;
- (id)getPVFaceFromVNFaceObservation:(id)a0 withSourceWidth:(unsigned long long)a1 andSourceHeight:(unsigned long long)a2 andVisionRequests:(id)a3 andAlgorithmVersion:(int)a4 andError:(id *)a5;
- (int)_createFaceRectanglesRequest:(id *)a0 andFaceLandmarksRequest:(id *)a1 andFaceExpressionsRequest:(id *)a2 andFacePoseRequest:(id *)a3 andFaceprintRequest:(id *)a4 andClassifyFaceAttributesRequest:(id *)a5 andFaceCaptureQualityRequest:(id *)a6;
- (void)_addRegion:(id)a0 toBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (int)_createBlurRequests:(id *)a0 andExposureRequests:(id *)a1 forFaceObservations:(id)a2;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (id)_pvFaceArrayFromAsset:(id)a0;

@end
