@interface PLMediaAnalysisServiceRequestAdapter : NSObject

@property (class, readonly, nonatomic) long long invalidRequestID;
@property (class, readonly, nonatomic) unsigned long long faceAnalysisTaskID;

+ (void)cancelRequest:(long long)a0;
+ (long long)requestSuggestedMePersonIdentifierWithContext:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (long long)requestResetFaceClassificationModelForPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestQuickFaceIdentificationForPhotoLibraryURL:(id)a0 withOptions:(id)a1 andCompletionHandler:(id /* block */)a2;
+ (long long)requestReclusterFacesWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestRebuildPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibraryURL:(id)a1 andTaskID:(unsigned long long)a2;
+ (long long)requestClusterCacheValidationWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 photoLibraryURL:(id)a2 progessHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (long long)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)a0 photoLibraryURL:(id)a1 progessHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (long long)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (long long)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 photoLibraryURL:(id)a3 progessHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
+ (long long)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)a0 photoLibraryURL:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
