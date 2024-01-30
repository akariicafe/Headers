@interface PGMemoryMomentRequirements : NSObject

@property (nonatomic) BOOL filterUninterestingWithAlternateJunking;
@property (nonatomic) BOOL filterUninterestingForMemories;
@property (nonatomic) BOOL filterMomentsWithNotEnoughScenesProcessed;
@property (nonatomic) unsigned long long minimumNumberOfRelevantAssets;
@property (nonatomic) unsigned long long minimumNumberOfAssetsInExtendedCuration;
@property (nonatomic) double aboveContentScoreThreshold;
@property (nonatomic) unsigned long long minimumNumberOfPersons;

@end
