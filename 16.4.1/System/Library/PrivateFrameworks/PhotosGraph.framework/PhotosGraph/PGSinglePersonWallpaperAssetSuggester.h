@class NSEnumerator, NSArray, NSSet, PGSinglePersonWallpaperAssetSuggesterScoringContext, NSObject, PGSinglePersonWallpaperAssetSuggesterFilteringContext, PGSinglePersonWallpaperAssetSuggesterDistancingContext, CLSCurationContext;
@protocol OS_os_log;

@interface PGSinglePersonWallpaperAssetSuggester : NSObject {
    NSSet *_personLocalIdentifiers;
    CLSCurationContext *_curationContext;
    NSObject<OS_os_log> *_loggingConnection;
    NSEnumerator *_suggestedAssetEnumerator;
    unsigned long long _numberOfSuggestedAssets;
}

@property (retain, nonatomic) PGSinglePersonWallpaperAssetSuggesterFilteringContext *filteringContext;
@property (retain, nonatomic) PGSinglePersonWallpaperAssetSuggesterScoringContext *scoringContext;
@property (retain, nonatomic) PGSinglePersonWallpaperAssetSuggesterDistancingContext *distancingContext;
@property (nonatomic) BOOL bypassesFaceQualityAndCropScoreChecks;
@property (retain, nonatomic) NSArray *assetFetchPropertySets;
@property (retain, nonatomic) NSSet *forbiddenAssetUUIDs;

+ (id)_assetPredicate;
+ (BOOL)candidateAsset:(id)a0 andFace:(id)a1 passesPostfilteringWithContext:(id)a2 curationContext:(id)a3 bypassFaceQualityAndCropScoreChecks:(BOOL)a4 statistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct { unsigned int x0; } x13; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x14; } x12; } *)a5;
+ (BOOL)passesFilteringWithAsset:(id)a0 forTopWallpaperSuggestions:(BOOL)a1 curationContext:(id)a2 reason:(id *)a3;
+ (id)prefilteringInternalPredicateWithContext:(id)a0 forTargetAspectRatio:(double)a1;
+ (id)prefilteringSubpredicatesWithContext:(id)a0 forTargetAspectRatio:(double)a1;

- (void).cxx_destruct;
- (unsigned long long)expectedNumberOfSuggestedAssets;
- (id)_sortedDedupedCandidatesFromCandidates:(id)a0 progressBlock:(id /* block */)a1;
- (id)assetsFromCandidates:(id)a0;
- (void)computeSuggestedAssetsWithProgress:(id /* block */)a0;
- (id)initWithPersonLocalIdentifiers:(id)a0 curationContext:(id)a1 loggingConnection:(id)a2;
- (id)nextSuggestedAsset;
- (id)unsortedCandidatesFromPersonLocalIdentifiers:(id)a0 progressBlock:(id /* block */)a1;

@end
