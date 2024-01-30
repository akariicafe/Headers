@class NSString, NSMapTable, NSOperationQueue, NSMutableDictionary, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface PHAVisionServiceWorker : PHAWorker <PHAVisionServiceAssetsAnalyzingOperationDelegate, PVVisionIntegrating> {
    NSOperationQueue *_assetAnalysisOperationQueue;
    NSObject<OS_dispatch_queue> *_commandDispatchQueue;
    NSMapTable *_jobToAssetsAnalyzingOperationMapTable;
    NSMutableDictionary *_coalescedAnalysisResultsByAssetLocalIdentifier;
    NSMutableDictionary *_coalescedJobResultsByAssetLocalIdentifier;
    NSNumber *_lastRecordedDarkWakeState;
    _Atomic unsigned long long _lastPerformedJobScenario;
}

@property BOOL analysisJobCancelled;
@property (nonatomic) unsigned int visionAlgorithmUmbrellaVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id /* block */)assetResourceLargestToSmallestComparator;
+ (id)preferredAssetResourcesForAnalyzingAsset:(id)a0;
+ (id)analysisLog;
+ (id)defaultImageCreationOptions;
+ (void)disableANEForRequest:(id)a0;
+ (id /* block */)assetResourceSmallestToLargestComparator;

- (BOOL)stopAnalysisJob:(id)a0 error:(id *)a1;
- (id)initWithPhotoAnalysisManager:(id)a0 dataLoader:(id)a1;
- (void)performVisionForcedCleanupWithOptions:(id)a0;
- (void)performVisionForcedCleanup;
- (void)shutdown;
- (void).cxx_destruct;
- (BOOL)processAsset:(id)a0 error:(id *)a1;
- (unsigned long long)analyzeImageData:(id)a0 forAsset:(id)a1 withAttributes:(id)a2 error:(id *)a3;
- (BOOL)getLocallyAvailableAssetResource:(id *)a0 forAnalyzingAsset:(id)a1 error:(id *)a2;
- (BOOL)startAnalysisJob:(id)a0 error:(id *)a1;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)a0 forAsset:(id)a1 withAttributes:(id)a2 error:(id *)a3;
- (void)configureRequest:(id)a0 algorithmUmbrellaVersion:(unsigned int)a1;
- (void)startup;
- (void)willCompleteJob:(id)a0;
- (void)visionServiceAssetsProcessingOperation:(id)a0 didExecuteToCompletion:(BOOL)a1;
- (void)didPerformJob:(id)a0;
- (void)coalesceJobResult:(unsigned long long)a0 forAssetLocalIdentifier:(id)a1;
- (BOOL)supportsCoalescingResults;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)a0 workerJob:(id)a1 error:(id *)a2;
- (void)willPerformJob:(id)a0;
- (void)_checkForDarkWakeStateTransition;
- (BOOL)isExecutingDuringDarkWake;
- (unsigned long long)lastPerformedJobScenario;
- (Class)assetsAnalyzingOperationClass;
- (BOOL)canProvideAnalysisJobResultInformation:(id)a0 withoutRequiringAssetResourceForAsset:(id)a1;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)a0 dataLoadingOptions:(id)a1 usingBlock:(id /* block */)a2 error:(id *)a3;
- (struct CGImage { } *)_createCGImageFromImageSource:(struct CGImageSource { } *)a0 imageOptions:(id)a1 orientation:(unsigned long long *)a2 error:(id *)a3;
- (id)assetWithLocalIdentifier:(id)a0 error:(id *)a1;
- (id)assetResourcesForAsset:(id)a0 fromDesiredTypes:(const long long *)a1 count:(unsigned long long)a2;
- (id)localFileURLForAssetResource:(id)a0 error:(id *)a1;
- (id)imageDataForAssetResource:(id)a0 error:(id *)a1;
- (struct CGImage { } *)createCGImageForAssetResource:(id)a0 imageOptions:(id)a1 orientation:(unsigned long long *)a2 error:(id *)a3;
- (struct CGImage { } *)createCGImageFromImageFileURL:(id)a0 imageOptions:(id)a1 orientation:(unsigned long long *)a2 error:(id *)a3;
- (void)coalesceResultsDictionary:(id)a0 forAssetLocalIdentifier:(id)a1;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)a0 forAsset:(id)a1;

@end
