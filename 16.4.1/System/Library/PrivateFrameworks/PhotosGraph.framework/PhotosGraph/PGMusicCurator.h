@interface PGMusicCurator : NSObject

+ (id)emptyCuration;
+ (id)curateMusicForFeatures:(id)a0 context:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)extractMusicCurationFeaturesForAssets:(id)a0 graph:(id)a1 context:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (id)extractMusicCurationFeaturesForEnrichedMemory:(id)a0 graph:(id)a1 context:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (id)extractMusicCurationFeaturesForMemory:(id)a0 graph:(id)a1 context:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (void)fetchSongAdamIDsForPurchasedSongID:(id)a0 inflationContext:(id)a1 progressReport:(id)a2 completionHandler:(id /* block */)a3;
+ (void)fetchSongDisplayMetadataJSONForAdamIDs:(id)a0 inflationContext:(id)a1 progressReporter:(id)a2 completionHandler:(id /* block */)a3;
+ (id)generateDebugInformationForAssetCollection:(id)a0 graph:(id)a1 context:(id)a2 progressReporter:(id)a3 error:(id *)a4;
+ (id)generateDebugInformationForSongWithAdamID:(id)a0 context:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (void)inflateDisplayMetadataForMusicCuration:(id)a0 inflationContext:(id)a1 progressReporter:(id)a2 completionHandler:(id /* block */)a3;

- (id)init;

@end
