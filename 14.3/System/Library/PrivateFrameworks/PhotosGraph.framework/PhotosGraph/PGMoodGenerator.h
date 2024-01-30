@class PGMoodGeneratorOptions, PGMoodVector, PHAssetCollection, PGManager;

@interface PGMoodGenerator : NSObject {
    PHAssetCollection *_assetCollection;
    PGManager *_graphManager;
    unsigned long long _suggestedMood;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
}

@property (retain) PGMoodGeneratorOptions *options;
@property double positiveThreshold;
@property double negativeThreshold;

- (void).cxx_destruct;
- (unsigned long long)recommendedMoods;
- (unsigned long long)forbiddenMoods;
- (unsigned long long)suggestedMood;
- (id)positiveMoodVector;
- (id)negativeMoodVector;
- (id)historyWeightedPositiveMoodVector;
- (id)initWithAssetCollection:(id)a0 graphManager:(id)a1 options:(id)a2;
- (id)_moodSources;
- (void)_processMoodSources;

@end
