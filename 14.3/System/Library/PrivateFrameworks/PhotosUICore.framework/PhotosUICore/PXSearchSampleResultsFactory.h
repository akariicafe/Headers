@interface PXSearchSampleResultsFactory : NSObject

+ (id)sampleAssetResults;
+ (id)samplePersonResults;
+ (id)_personTitles;
+ (id)sampleMomentResults;
+ (id)_momentTitles;
+ (id)_momentSubtitles;
+ (id)sampleMemoryResults;
+ (id)_memoryTitles;
+ (id)_memorySubtitles;
+ (id)sampleAlbumResults;
+ (id)_albumTitles;
+ (id)_albumSubtitles;
+ (id)sampleSceneResults;
+ (id)_categoryTitles;
+ (id)samplePlaceResults;
+ (id)_placeTitles;
+ (id)_uniqueSampleUUID;
+ (unsigned long long)_randomAssetCount:(unsigned long long)a0;

@end
