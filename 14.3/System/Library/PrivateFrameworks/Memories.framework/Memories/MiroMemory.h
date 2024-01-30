@class NSDate, NSString, NSURL, NSArray, PHAsset, NSMutableDictionary, NSDictionary, PHAssetCollection, NSObject, NSSet, PHFetchResult, MiroBlueprint;
@protocol OS_dispatch_queue;

@interface MiroMemory : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *saveQueue;
@property (retain) NSString *keyAssetID;
@property (retain, nonatomic) NSArray *autoPickedAssetIDs;
@property (retain, nonatomic) NSDictionary *assetsRanges;
@property (nonatomic) double savedDuration;
@property (nonatomic) double maximumPossibleMemoryDuration;
@property (nonatomic) struct Buckets { long long shortCount; long long mediumCount; long long longCount; double shortDuration; double mediumDuration; double longDuration; int defaultBucketIsNotShort; } buckets;
@property (retain, nonatomic) MiroBlueprint *customBlueprint;
@property (retain, nonatomic) NSMutableDictionary *blueprints;
@property (retain, nonatomic) NSDictionary *loadedFreezeRanges;
@property (retain, nonatomic) NSArray *featuredPeople;
@property (retain, nonatomic) NSURL *localPersistentFile;
@property (nonatomic) long long allAssetCount;
@property (nonatomic) long long schema;
@property (retain, nonatomic) NSDate *viewedDate;
@property (retain) NSString *localizedTitle;
@property (retain) NSString *localizedSubTitle;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *displaySubtitle;
@property (readonly, nonatomic) long long maxDurationRange;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) double minimumPossibleMemoryDuration;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (nonatomic) BOOL hasBuildingPosterImageBegun;
@property (nonatomic) BOOL storedPosterExists;
@property (retain, nonatomic) NSArray *posters;
@property (nonatomic) BOOL isPregenerating;
@property (readonly, nonatomic) BOOL needsTitleCard;
@property (retain, nonatomic) NSArray *requestedKeywords;
@property (retain, nonatomic) NSString *requestedMoodID;
@property (retain, nonatomic) NSDictionary *requestedMusicGenreDistribution;
@property (retain, nonatomic) NSString *keywordedSongID;
@property (retain, nonatomic) NSString *initalKeyAssetIdentifier;
@property (retain, nonatomic) NSSet *manuallyAddedAssetIDs;
@property (retain, nonatomic) NSSet *manuallyRemovedAssetIDs;
@property (readonly, nonatomic) long long pickedItemCount;
@property (retain, nonatomic) NSDictionary *freezeRanges;
@property (retain, nonatomic) NSSet *suggestions;
@property (readonly, nonatomic) PHFetchResult *allAssets;
@property (readonly, nonatomic) NSArray *moodIDs;
@property (retain, nonatomic) NSString *moodID;

+ (id)_displayableUuidWithUuid:(id)a0;
+ (id)_saveURL;
+ (id)_assetCollectionUniqueLocalIdentifier:(id)a0;
+ (id)fileURLWithUuid:(id)a0;
+ (id)memoryWithPHAssetCollection:(id)a0;
+ (id)grabTestKeywords;
+ (id)memoryWithPHAssetCollection:(id)a0 keyAsset:(id)a1;
+ (id)miroMoodIDForPHMemoryMood:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)_saveMetadata;
- (void)persist;
- (BOOL)isPending;
- (id)dataRepresentation;
- (BOOL)isPersistable;
- (void)_writeMetadata:(id)a0;
- (id)freezeRangesToEncode;
- (void)_deleteMetadata;
- (void)setRanges:(id)a0 replaceType:(unsigned long long)a1 forAssetID:(id)a2;
- (id)rangesWithType:(unsigned long long)a0 forAssetID:(id)a1;
- (id)blueprintForMoodID:(id)a0;
- (id)_newBlueprintWithMoodID:(id)a0;
- (void)_updateAddedRemovedLists;
- (void)persistWithoutFreeze;
- (void)unPersist;
- (void)_persistentRangesChanged:(id)a0;
- (void)_initAllAssetMetadata;
- (void)clearFreezeDataForPregenerate;
- (void)adornIrisUsableToAssets:(id)a0;
- (void)manuallyModify:(id)a0 changeInSegmentCount:(long long)a1;
- (void)manuallyAdd:(id)a0 remove:(id)a1;
- (BOOL)wasManuallyAdded:(id)a0;
- (BOOL)wasManuallyRemoved:(id)a0;
- (id)trimRangesForAsset:(id)a0;

@end
