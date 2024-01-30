@class NSString, NSManagedObjectID, NSDate;

@interface PHPhotosHighlight : PHAssetCollection {
    unsigned long long _assetsCount;
}

@property (nonatomic, getter=isEnriched) BOOL enriched;
@property (nonatomic, getter=isRecent) BOOL recent;
@property (retain, nonatomic) NSDate *localStartDate;
@property (retain, nonatomic) NSDate *localEndDate;
@property (readonly, nonatomic) unsigned long long dayGroupAssetsCount;
@property (readonly, nonatomic) unsigned long long dayGroupExtendedAssetsCount;
@property (readonly, nonatomic) unsigned long long dayGroupSummaryAssetsCount;
@property (readonly, nonatomic) unsigned short enrichmentState;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) short highlightVersion;
@property (readonly, nonatomic) short enrichmentVersion;
@property (readonly, nonatomic) NSManagedObjectID *parentPhotosHighlight;
@property (readonly, nonatomic) NSManagedObjectID *keyAsset;
@property (readonly, nonatomic) NSManagedObjectID *dayGroupKeyAsset;
@property (readonly, nonatomic) NSManagedObjectID *monthKeyAsset;
@property (readonly, nonatomic) NSManagedObjectID *yearKeyAsset;
@property (readonly, nonatomic) NSManagedObjectID *keyAssetForKind;
@property (readonly, nonatomic) unsigned short preferredCurationType;
@property (readonly, nonatomic) NSString *dateDescription;
@property (readonly, nonatomic) NSString *smartDescription;
@property (readonly, nonatomic) NSString *verboseSmartDescription;
@property (readonly, nonatomic) unsigned short kind;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short category;
@property (readonly, nonatomic) unsigned short visibilityState;
@property (readonly, nonatomic, getter=isCurated) BOOL curated;
@property (readonly, nonatomic) long long startTimeZoneOffset;
@property (readonly, nonatomic) long long endTimeZoneOffset;
@property (readonly, nonatomic) double promotionScore;
@property (readonly, nonatomic) unsigned long long mood;
@property (readonly, nonatomic) unsigned long long extendedCount;
@property (readonly, nonatomic) unsigned long long summaryCount;

+ (id)dateRangeTitleGenerator;
+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)entityKeyMap;
+ (BOOL)cleanupEmptyHighlights;
+ (id)fetchParentHighlightForHighlight:(id)a0 options:(id)a1;
+ (id)fetchParentHighlightsForHighlights:(id)a0 options:(id)a1;
+ (id)fetchChildHighlightsForHighlight:(id)a0 options:(id)a1;
+ (id)fetchParentDayGroupHighlightForHighlight:(id)a0 options:(id)a1;
+ (id)fetchChildDayGroupHighlightsForHighlight:(id)a0 options:(id)a1;
+ (id)fetchPhotosHighlightUUIDByAssetUUIDForAssets:(id)a0 options:(id)a1;
+ (id)fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)a0 options:(id)a1;
+ (id)_fetchPhotosHighlightUUIDByAssetUUIDForAssetUUIDs:(id)a0 photoLibrary:(id)a1;
+ (id)fetchPhotosHighlightUUIDByMomentUUIDForMomentUUIDs:(id)a0 options:(id)a1;
+ (BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitles;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (BOOL)processRecentHighlights;
+ (BOOL)updateHighlightTitles;
+ (BOOL)processUnprocessedMomentLocations;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsRejectedState;

- (BOOL)canPerformEditOperation:(long long)a0;
- (void).cxx_destruct;
- (id)localizedSubtitle;
- (unsigned long long)countForCurationType:(unsigned short)a0;
- (id)dateDescriptionWithOptions:(unsigned long long)a0;
- (long long)assetCollectionSubtype;
- (id)description;
- (BOOL)canShowAvalancheStacks;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (unsigned long long)estimatedAssetCount;
- (id)title;

@end
