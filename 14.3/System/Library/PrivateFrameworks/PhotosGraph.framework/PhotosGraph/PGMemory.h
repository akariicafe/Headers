@class NSDate, NSString, NSArray, PHAsset, NSSet, NSDictionary, PGMemoryDebug, NSMutableSet, PHAssetCollection, CLLocation;

@interface PGMemory : NSObject <PGMemoryProtocol, PGMemoryCore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSArray *curatedAssets;
@property (retain, nonatomic) NSArray *extendedCuratedAssets;
@property (retain, nonatomic) PHAsset *curatedKeyAsset;
@property (retain, nonatomic) NSDate *localStartDate;
@property (retain, nonatomic) NSDate *localEndDate;
@property (retain, nonatomic) NSDate *universalStartDate;
@property (retain, nonatomic) NSDate *universalEndDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) double score;
@property (nonatomic) long long sourceType;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long subcategory;
@property (nonatomic) unsigned long long originalSubcategory;
@property (nonatomic) unsigned long long matchedTypes;
@property (retain, nonatomic) NSDate *matchedLocalDate;
@property (retain, nonatomic) CLLocation *matchedLocation;
@property (retain, nonatomic) NSSet *matchedPeople;
@property (retain, nonatomic) NSString *matchedEventName;
@property (retain, nonatomic) NSMutableSet *persistedFeatures;
@property (nonatomic) unsigned short graphSchemaVersion;
@property (nonatomic) unsigned short curationAlgorithmsVersion;
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (nonatomic) unsigned short memoriesAlgorithmsVersion;
@property (retain, nonatomic) NSDictionary *numberOfAssetsByMomentIDs;
@property (retain, nonatomic) NSArray *blacklistableFeatures;
@property (nonatomic) NSString *rejectionCause;
@property (nonatomic) long long titleCategory;
@property (readonly, nonatomic) unsigned long long aggregatedVersions;
@property (retain, nonatomic) NSSet *momentIDs;
@property (retain, nonatomic) PGMemoryDebug *debug;
@property (nonatomic) long long notificationQuality;
@property (copy, nonatomic) NSDictionary *musicGenreDistribution;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) NSSet *features;
@property (readonly, nonatomic) NSArray *meaningLabels;
@property (readonly, nonatomic) NSArray *moodKeywords;
@property (readonly, nonatomic) unsigned long long suggestedMood;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForSourceType:(long long)a0;
+ (id)mustSeeMemoryCriteria;
+ (id)stellarMemoryCriteria;
+ (id)greatMemoryCriteria;
+ (id)otherMemoryCriteria;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (BOOL)isGreat;
- (BOOL)isMustSee;
- (BOOL)isStellar;
- (double)phMemoryScore;
- (double)_scoreForMemoryCriteria:(id)a0;
- (id)_localIdentifiersInAssetCollection:(id)a0;
- (void)addPersistedFeature:(id)a0;

@end
