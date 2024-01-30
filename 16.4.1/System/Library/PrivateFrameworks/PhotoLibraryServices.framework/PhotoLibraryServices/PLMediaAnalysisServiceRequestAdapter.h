@interface PLMediaAnalysisServiceRequestAdapter : NSObject

@property (class, readonly, nonatomic) long long invalidRequestID;
@property (class, readonly, nonatomic) unsigned long long faceAnalysisTaskID;
@property (class, readonly, nonatomic) unsigned long long petVIPModelType;

+ (long long)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestResetFaceClassificationModelForPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestVIPModelFilepathForPhotoLibraryURL:(id)a0 forModelType:(unsigned long long)a1 andCompletionHandler:(id /* block */)a2;
+ (long long)requestPetsAnalysisForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (long long)requestReclusterFacesWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestRebuildPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (void)cancelRequest:(long long)a0;
+ (long long)requestQuickFaceIdentificationForPhotoLibraryURL:(id)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibraryURL:(id)a1 andTaskID:(unsigned long long)a2;
+ (long long)requestSceneProcessingForAssets:(id)a0 withOptions:(id)a1 progressHandler:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;
+ (long long)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (long long)requestProcessingTypes:(unsigned long long)a0 forAssetsWithLocalIdentifiers:(id)a1 fromPhotoLibraryWithURL:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (long long)requestSuggestedMePersonIdentifierWithContext:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (long long)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 photoLibraryURL:(id)a2 progessHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (long long)requestClusterCacheValidationWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (long long)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 photoLibraryURL:(id)a3 progessHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;

@end
