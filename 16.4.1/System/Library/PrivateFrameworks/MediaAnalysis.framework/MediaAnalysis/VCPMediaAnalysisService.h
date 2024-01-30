@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableDictionary *_progressBlocks;
    int _nextRequestID;
}

+ (int)queryCachedFaceAnalysisProgress:(id *)a0 forPhotoLibrary:(id)a1 withExtendTimeoutBlock:(id /* block */)a2;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibraryURL:(id)a1 andTaskID:(unsigned long long)a2 withExtendTimeoutBlock:(id /* block */)a3;
+ (id)analysisService;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibraryURL:(id)a1 andTaskID:(unsigned long long)a2;
+ (int)queryCachedFaceAnalysisProgress:(id *)a0 forPhotoLibrary:(id)a1;
+ (id)errorWithDescription:(id)a0;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2 withExtendTimeoutBlock:(id /* block */)a3;
+ (int)queryProgress:(float *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2 withExtendTimeoutBlock:(id /* block */)a3;
+ (id)sharedAnalysisService;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;
+ (int)queryProgress:(float *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;

- (int)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)connection;
- (int)queryAutoCounterOptInStatusForPhotoLibraryURL:(id)a0 withPersonLocalIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (int)requestDumpAutoCounterForPhotoLibraryURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelAllRequests;
- (int)requestResetFaceClassificationModelForPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestReclusterFacesWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestProcessingWithTaskID:(unsigned long long)a0 forPhotoLibrary:(id)a1 withOptions:(id)a2 progessHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestAnalysisTypes:(unsigned long long)a0 forAssetWithResourceURLs:(id)a1 withOptions:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestIdentificationOfFaces:(id)a0 withCompletionHandler:(id /* block */)a1;
- (int)requestMediaAnalysisDatabaseBackupForPhotoLibraryURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (int)requestRebuildPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)cancelRequest:(int)a0;
- (int)requestVideoStabilizationForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (int)requestFaceProcessingForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestBackgroundProcessingWithTaskID:(unsigned long long)a0 forPhotoLibrary:(id)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestFullProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestQuickFaceIdentificationForPhotoLibraryURL:(id)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;
- (int)requestVIPModelFilepathForPhotoLibraryURL:(id)a0 forModelType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (int)requestPersonPreferenceForPhotoLibraryURL:(id)a0 completionHandler:(id /* block */)a1;
- (int)requestSceneProcessingForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestBackgroundAnalysisForAssets:(id)a0 fromPhotoLibraryWithURL:(id)a1 realTime:(BOOL)a2 progessHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (int)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)notifyLibraryAvailableAtURL:(id)a0;
- (int)requestProcessingTypes:(unsigned long long)a0 forAssetsWithLocalIdentifiers:(id)a1 fromPhotoLibraryWithURL:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (int)requestWallpaperUpgradeAtURL:(id)a0 toDestinationURL:(id)a1 withOptions:(id)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestFaceProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestFRCForAssetURL:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestProcessingWithTaskID:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestSuggestedMePersonIdentifierWithContext:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)a0 completionHandler:(id /* block */)a1;
- (int)requestOptInAutoCounterForPhotoLibraryURL:(id)a0 withPersons:(id)a1 completionHandler:(id /* block */)a2;
- (int)requestBackgroundAnalysisForAssets:(id)a0 realTime:(BOOL)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestResetPetClassificationModelForPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestAutoCounterAccuracyCalculationForPhotoLibraryURL:(id)a0 clusterStateURL:(id)a1 groundTruthURL:(id)a2 completionHandler:(id /* block */)a3;
- (int)requestAutoCounterSIMLValidationForPhotoLibraryURL:(id)a0 simlGroundTruthURL:(id)a1 completionHandler:(id /* block */)a2;
- (int)requestPersonProcessingForPhotoLibraryURL:(id)a0 options:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (int)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 photoLibraryURL:(id)a2 progessHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (int)requestAnalysisTypes:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestLivePhotoEffectsForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestClusterCacheValidationWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;
- (int)requestSceneProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestSceneprintProcessingForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 photoLibraryURL:(id)a3 progessHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)cancelBackgroundActivity;
- (void).cxx_destruct;
- (int)requestMultiWorkerProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;

@end
