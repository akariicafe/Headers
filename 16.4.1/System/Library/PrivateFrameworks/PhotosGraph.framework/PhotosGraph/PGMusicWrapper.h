@interface PGMusicWrapper : NSObject

+ (void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)a0 reply:(id /* block */)a1;
+ (BOOL)cacheRemoveAllForPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)cacheStatusWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (void)fetchMusicCatalogAdamIDsForPurchasedSongID:(id)a0 inflationContext:(id)a1 progressReporter:(id)a2 completionHandler:(id /* block */)a3;
+ (void)fetchSongDisplayMetadataJSONForAdamIDs:(id)a0 inflationContext:(id)a1 progressReporter:(id)a2 completionHandler:(id /* block */)a3;
+ (id)generateMusicCurationDebugInformationForAssetCollection:(id)a0 graphManager:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)generateMusicCurationDebugInformationForSongWithAdamID:(id)a0 graphManager:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (void)requestFlexMusicCurationDebugInformationForAssetCollection:(id)a0 reply:(id /* block */)a1;
+ (void)requestFlexMusicCurationForAssetCollection:(id)a0 curationOptions:(id)a1 photoLibrary:(id)a2 reply:(id /* block */)a3;
+ (void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)a0 curationOptions:(id)a1 photoLibrary:(id)a2 reply:(id /* block */)a3;
+ (void)requestMusicCurationForAssetCollection:(id)a0 curationOptions:(id)a1 graphManager:(id)a2 reply:(id /* block */)a3;
+ (void)requestMusicCurationForAssetFetchResult:(id)a0 curationOptions:(id)a1 graphManager:(id)a2 reply:(id /* block */)a3;

@end
