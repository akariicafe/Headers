@class NSCountedSet, PPU16CountedSet, NSSet, NSMutableSet, NSDate;
@protocol MLFeatureProvider;

@interface PPMutableAggregatedItem : NSObject <MLCustomModel, MLFeatureProvider> {
    NSDate *_previousSourceDate;
    unsigned char _domain;
    double _multiplier;
    double _perRecordDecayRate;
    NSDate *_scoringDate;
}

@property (readonly, nonatomic) PPU16CountedSet *algorithmCountedSet;
@property (readonly, nonatomic) PPU16CountedSet *namedEntityCategoryCountedSet;
@property (readonly, nonatomic) float maxScore;
@property (readonly, nonatomic) float minScore;
@property (readonly, nonatomic) float sumScore;
@property (readonly, nonatomic) PPU16CountedSet *rankHistogram;
@property (readonly, nonatomic) unsigned int sumDwellTimeInSeconds;
@property (readonly, nonatomic) unsigned int recordCount;
@property (readonly, nonatomic) unsigned int exactMatchInSourceTextCount;
@property (readonly, nonatomic) BOOL userCreated;
@property (readonly, nonatomic) NSMutableSet *osBuildSet;
@property (readonly, nonatomic) NSMutableSet *assetVersionSet;
@property (readonly, nonatomic) NSCountedSet *bundleIdCountedSet;
@property (readonly, nonatomic) NSMutableSet *groupIdSet;
@property (readonly, nonatomic) PPU16CountedSet *sourceHourCountedSet;
@property (readonly, nonatomic) PPU16CountedSet *sourceDayOfWeekCountedSet;
@property (readonly, nonatomic) NSDate *maxSourceDate;
@property (readonly, nonatomic) NSDate *minSourceDate;
@property (readonly, nonatomic) NSDate *maxRelevanceDate;
@property (readonly, nonatomic) float sumOfSourceDateInHours;
@property (readonly, nonatomic) float sumOfSquaredSourceDateInHours;
@property (readonly, nonatomic) float sumOfSquaredInterArrivalHours;
@property (readonly, nonatomic) float decayedSum;
@property (readonly, nonatomic) float decayRate;
@property (readonly, nonatomic) BOOL matchesPrimaryLanguage;
@property (readonly, nonatomic) id<MLFeatureProvider> recordOfMaxDecayedScore;
@property (readonly, nonatomic) float maxDecayedScore;
@property (readonly, nonatomic) unsigned long long sumLengthSeconds;
@property (readonly, nonatomic) unsigned long long sumLengthCharacters;
@property (readonly, nonatomic) unsigned long long sumDonationCount;
@property (readonly, nonatomic) unsigned long long sumContactHandleCount;
@property (readonly, nonatomic) NSSet *featureNames;

+ (float)_decay:(float)a0 decayRate:(float)a1 timeElapsedSeconds:(double)a2;

- (id)dictionaryForCountedSet:(id)a0;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (double)decayedScoreAddendForScore:(double)a0 sourceDate:(id)a1 featureProvider:(id)a2;
- (id)initWithLocationRecords:(id)a0 scoringDate:(id)a1 perRecordDecayRate:(float)a2 decayRate:(float)a3;
- (id)initWithTopicRecords:(id)a0 scoringDate:(id)a1 perRecordDecayRate:(float)a2 decayRate:(float)a3 ignoreMultiplier:(BOOL)a4;
- (id)initWithNamedEntityRecords:(id)a0 scoringDate:(id)a1 multiplier:(float)a2 perRecordDecayRate:(float)a3 decayRate:(float)a4;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;
- (id)_sortRecordsByDescendingSourceDate:(id)a0;
- (id)initWithNamedEntityRecords:(id)a0 scoringDate:(id)a1 multiplier:(float)a2 decayRate:(float)a3 sorted:(BOOL)a4;
- (void)_resetPropertiesWithAlgorithmMaxValue:(unsigned long long)a0 namedEntityCategoryMaxValue:(unsigned long long)a1;
- (id)initWithTopicRecords:(id)a0 scoringDate:(id)a1 decayRate:(float)a2 sorted:(BOOL)a3;

@end
