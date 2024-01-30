@class NSDate, NSString, NSArray, PGMusicCuration, PGGraphFeatureNodeCollection, NSDictionary, PGGraphMomentNodeCollection, PGFlexMusicCuration, NSIndexSet, PGMoodVector;
@protocol PGTriggeredMemoryProtocol;

@interface PGEnrichedMemory : NSObject <PGEnrichedMemoryProtocol> {
    id<PGTriggeredMemoryProtocol> _triggeredMemory;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSArray *chapterTitles;
@property (copy, nonatomic) NSString *keyAssetUUID;
@property (copy, nonatomic) NSArray *curatedAssetUUIDs;
@property (copy, nonatomic) NSArray *representativeAssetUUIDs;
@property (copy, nonatomic) NSArray *extendedCuratedAssetUUIDs;
@property (nonatomic) unsigned long long suggestedMood;
@property (nonatomic) unsigned long long recommendedMoods;
@property (nonatomic) unsigned long long forbiddenMoods;
@property (retain, nonatomic) PGMoodVector *positiveMoodVector;
@property (copy, nonatomic) NSArray *legacyMoodKeywords;
@property (nonatomic) long long notificationLevel;
@property (nonatomic) double score;
@property (nonatomic) BOOL featuresGuestAssets;
@property (nonatomic) unsigned long long numberOfRelevantAssets;
@property (nonatomic) long long titleCategory;
@property (nonatomic) unsigned long long failureReason;
@property (readonly, nonatomic) BOOL failedEnrichment;
@property (retain, nonatomic) PGFlexMusicCuration *flexMusicCuration;
@property (retain, nonatomic) PGMusicCuration *musicCuration;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSIndexSet *triggerTypes;
@property (readonly, nonatomic) long long photosGraphVersion;
@property (nonatomic) double electionScore;
@property (retain, nonatomic) NSArray *blockableFeatures;
@property (readonly, nonatomic) NSDictionary *validityIntervalByTriggerType;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier;
@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) unsigned long long memoryCategorySubcategory;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (readonly, nonatomic) BOOL generatedWithFallbackRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)enrichedDescription;
- (id)initWithTriggeredMemory:(id)a0;
- (id)memoryFeatureNodesInGraph:(id)a0;

@end
