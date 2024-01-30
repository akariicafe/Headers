@class PGMoodGeneratorOptions, NSDictionary, PGMoodVector, PHAssetCollection, PGManager;

@interface PGMoodSource : NSObject

@property (readonly) PHAssetCollection *assetCollection;
@property (readonly) PGManager *graphManager;
@property (readonly) PGMoodGeneratorOptions *options;
@property (retain) PGMoodVector *positiveVector;
@property (retain) PGMoodVector *negativeVector;
@property (readonly) NSDictionary *moodSourceDictionary;

+ (id)_plistName;

- (void).cxx_destruct;
- (double)weight;
- (id)_plistMoodIdentifiers;
- (id)initWithAssetCollection:(id)a0 graphManager:(id)a1 options:(id)a2;
- (id)_moodVectorForMoodIdentifier:(id)a0;
- (id)_moodVectors;
- (void)_combineMoodVectors;
- (unsigned long long)_sourceInputCount;

@end
