@class VCPObjectPool, VCPFaceMerger, NSObject, VCPPhotosFaceProcessingContext;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPFaceAnalyzer : NSObject {
    VCPPhotosFaceProcessingContext *_context;
    VCPFaceMerger *_faceMerger;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    VCPObjectPool *_sessionPool;
}

+ (BOOL)_faceprintFastMode;
+ (BOOL)_allowANE;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (double)_calculateIoUBetweenObservation:(id)a0 andObservation:(id)a1;
- (double)_calculateOverlappingBetweenFaceObservation:(id)a0 andHumanObservation:(id)a1;
- (id)getVCPPhotosFaceFromFaceObservation:(id)a0 humanObservation:(id)a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 visionRequests:(id)a4 algorithmVersion:(int)a5 force:(BOOL)a6 andError:(id *)a7;
- (long long)_qualityMeasureForFace:(id)a0 countOfFacesOnAsset:(unsigned long long)a1;
- (BOOL)_isColocatingAnimalObservation:(id)a0 withFaceObservations:(id)a1 orTorsoObservations:(id)a2;
- (void)_checkAnalysisRequests:(id)a0 forTooSmallFaceObservations:(id)a1 withAnalysisResults:(id)a2;
- (int)_createBlurRequests:(id *)a0 andExposureRequests:(id *)a1 forFaceObservations:(id)a2;
- (id)getVCPPhotosFacesFromFaceObservations:(id)a0 humanObservations:(id)a1 animalObservations:(id)a2 sourceWidth:(unsigned long long)a3 sourceHeight:(unsigned long long)a4 visionRequests:(id)a5 blurScorePerFace:(id)a6 exposureScorePerFace:(id)a7 tooSmallFaceObservations:(id)a8 algorithmVersion:(int)a9;
- (id)_vcpPhotosFaceArrayFromAsset:(id)a0;
- (id)_verifiedPersonsFetchResultWithLocalIdentifiers:(id)a0 andPhotoLibrary:(id)a1 andError:(id *)a2;
- (int)analyzeWithImage:(id)a0 andAsset:(id)a1 andOptions:(id)a2 andResults:(id *)a3;
- (int)_performAnalysis:(id *)a0 withRequestHandler:(id)a1 options:(id)a2 sourceWidth:(unsigned long long)a3 sourceHeight:(unsigned long long)a4;
- (int)_refineAnalysis:(id *)a0 forAsset:(id)a1 andImage:(id)a2;
- (int)_loadPVImage:(id *)a0 forAsset:(id)a1;
- (int)_detectFacesWithPVImage:(id)a0 forAsset:(id)a1 withAnalysis:(id *)a2;
- (int)processAsset:(id)a0 withAnalysis:(id *)a1;

@end
