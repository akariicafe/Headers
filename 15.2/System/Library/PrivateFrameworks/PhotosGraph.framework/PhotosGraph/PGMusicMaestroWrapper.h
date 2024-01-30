@interface PGMusicMaestroWrapper : NSObject

+ (id)curateMusicForNormalizedSupportedKeywordsByAssetCollectionLocalIdentifier:(id)a0 keywordsByAdamID:(id)a1 progressReporter:(id)a2 error:(id *)a3;
+ (id)curateMusicForNormalizedKeywordsByAssetCollectionLocalIdentifier:(id)a0 keywordsByAdamID:(id)a1 progressReporter:(id)a2 error:(id *)a3;

- (id)init;

@end
