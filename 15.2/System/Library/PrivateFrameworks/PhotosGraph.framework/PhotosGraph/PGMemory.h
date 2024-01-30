@class NSDate, NSString, NSArray, PHAsset, NSSet, NSDictionary, PGMemoryDebug, NSMutableSet, PHAssetCollection, CLLocation, NSIndexSet;

@interface PGMemory : NSObject <PGMemoryProtocol, PGMemoryCore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSArray *curatedAssets;
@property (retain, nonatomic) NSArray *extendedCuratedAssets;
@property (retain, nonatomic) NSArray *representativeAssets;
@property (retain, nonatomic) PHAsset *curatedKeyAsset;
@property (retain, nonatomic) NSDate *localStartDate;
@property (retain, nonatomic) NSDate *localEndDate;
@property (retain, nonatomic) NSDate *universalStartDate;
@property (retain, nonatomic) NSDate *universalEndDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSArray *encodedFeatures;
@property (retain, nonatomic) NSIndexSet *triggerTypes;
@property (retain, nonatomic) NSString *graphMemoryIdentifier;
@property (nonatomic) double score;
@property (nonatomic) long long sourceType;
@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long subcategory;
@property (nonatomic) unsigned long long originalSubcategory;
@property (nonatomic) unsigned long long matchedTypes;
@property (retain, nonatomic) NSDate *matchedLocalDate;
@property (retain, nonatomic) CLLocation *matchedLocation;
@property (retain, nonatomic) NSSet *matchedPersonLocalIdentifiers;
@property (retain, nonatomic) NSString *matchedEventName;
@property (retain, nonatomic) NSMutableSet *persistedFeatures;
@property (nonatomic) unsigned short graphSchemaVersion;
@property (nonatomic) unsigned short curationAlgorithmsVersion;
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (nonatomic) unsigned short memoriesAlgorithmsVersion;
@property (retain, nonatomic) NSDictionary *numberOfAssetsByMomentIDs;
@property (retain, nonatomic) NSArray *blockableFeatures;
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

+ (id)mustSeeMemoryCriteria;
+ (id)stellarMemoryCriteria;
+ (id)greatMemoryCriteria;
+ (id)otherMemoryCriteria;

- (BOOL)isGreat;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (BOOL)isMustSee;
- (BOOL)isStellar;
- (id)notificationQualityString;
- (double)legacyPHMemoryScore;
- (double)_scoreForMemoryCriteria:(id)a0;
- (id)initWithCreationDate:(id)a0;
- (void)setVersions;
- (void)addPersistedFeature:(id)a0;

@end
