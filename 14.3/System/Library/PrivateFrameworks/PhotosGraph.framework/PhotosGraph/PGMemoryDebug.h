@class NSDictionary, NSArray, PGMoodVector;

@interface PGMemoryDebug : NSObject

@property (retain, nonatomic) NSDictionary *matchingKeywords;
@property (retain, nonatomic) NSDictionary *referenceKeywords;
@property (retain, nonatomic) NSDictionary *eventKeywords;
@property (retain, nonatomic) NSDictionary *additionalInfoKeywords;
@property (nonatomic) double contentScore;
@property (nonatomic) double meanContentScore;
@property (nonatomic) double matchingScore;
@property (nonatomic) double graphScore;
@property (nonatomic) double neighborScore;
@property (retain, nonatomic) NSArray *meaningLabels;
@property (nonatomic) double collectionMeaningScore;
@property (nonatomic) double collectionContentScore;
@property (retain, nonatomic) NSArray *collectionMeaningLabels;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long numberOfMoments;
@property (nonatomic) unsigned long long numberOfCollections;
@property (nonatomic) unsigned long long numberOfRelevantAssets;
@property (nonatomic) unsigned long long suggestedMood;
@property (nonatomic) unsigned long long recommendedMoods;
@property (nonatomic) unsigned long long forbiddenMoods;
@property (retain, nonatomic) PGMoodVector *positiveMoodVector;
@property (retain, nonatomic) PGMoodVector *negativeMoodVector;
@property (retain, nonatomic) PGMoodVector *historyWeightedPositiveMoodVector;
@property (retain, nonatomic) NSArray *moodKeywords;

- (void).cxx_destruct;

@end
