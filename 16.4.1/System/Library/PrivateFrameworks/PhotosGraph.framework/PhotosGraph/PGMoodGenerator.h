@class PGEnrichedMemory, NSArray, PGMoodGeneratorOptions, PHPhotoLibrary, PHAssetCollection, PGMoodVector;

@interface PGMoodGenerator : NSObject {
    PHAssetCollection *_assetCollection;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _suggestedMood;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    PGEnrichedMemory *_enrichedMemory;
    NSArray *_extendedCuratedAssets;
}

@property (retain) PGMoodGeneratorOptions *options;
@property double positiveThreshold;
@property double negativeThreshold;

- (void).cxx_destruct;
- (id)_moodSources;
- (void)_processMoodSourcesWithGraph:(id)a0;
- (unsigned long long)forbiddenMoodsWithGraph:(id)a0;
- (id)historyWeightedPositiveMoodVectorWithGraph:(id)a0;
- (id)initWithAssetCollection:(id)a0 photoLibrary:(id)a1 options:(id)a2;
- (id)initWithEnrichedMemory:(id)a0 photoLibrary:(id)a1 options:(id)a2;
- (id)negativeMoodVectorWithGraph:(id)a0;
- (id)positiveMoodVectorWithGraph:(id)a0;
- (unsigned long long)recommendedMoodsWithGraph:(id)a0;
- (unsigned long long)suggestedMoodWithGraph:(id)a0;

@end
