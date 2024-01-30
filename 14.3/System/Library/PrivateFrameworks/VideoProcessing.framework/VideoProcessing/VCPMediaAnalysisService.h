@class NSObject, NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableDictionary *_progressBlocks;
    int _nextRequestID;
}

+ (id)analysisService;
+ (int)queryProgress:(float *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;
+ (id)sharedAnalysisService;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibraryURL:(id)a1 andTaskID:(unsigned long long)a2;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;
+ (id)errorWithDescription:(id)a0;

- (void)cancelRequest:(int)a0;
- (void)cancelAllRequests;
- (int)requestVIPModelFilepathForPhotoLibraryURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (void).cxx_destruct;
- (int)requestBackgroundProcessingWithTaskID:(unsigned long long)a0 forPhotoLibrary:(id)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestSuggestedMePersonIdentifierWithContext:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestMultiWorkerProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestSceneProcessingForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestResetFaceClassificationModelForPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestFaceProcessingForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestVideoStabilizationForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestFaceProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestQuickFaceIdentificationForPhotoLibraryURL:(id)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;
- (int)requestReclusterFacesWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestRebuildPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestLivePhotoEffectsForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestProcessingWithTaskID:(unsigned long long)a0 forPhotoLibrary:(id)a1 withOptions:(id)a2 progessHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestFullProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestAnalysisTypes:(unsigned long long)a0 forAssetWithResourceURLs:(id)a1 withOptions:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (void)cancelBackgroundActivity;
- (int)requestProcessingWithTaskID:(unsigned long long)a0 forAssets:(id)a1 withOptions:(id)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;
- (int)requestClusterCacheValidationWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 photoLibraryURL:(id)a2 progessHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (int)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestSceneProcessingForPhotoLibrary:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestPersonPreferenceForPhotoLibraryURL:(id)a0 completionHandler:(id /* block */)a1;
- (int)requestBackgroundAnalysisForAssets:(id)a0 realTime:(BOOL)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (int)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (int)requestSceneprintProcessingForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
- (int)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 photoLibraryURL:(id)a3 progessHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (int)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)notifyLibraryAvailableAtURL:(id)a0;
- (void)invalidate;
- (id)connection;

@end
