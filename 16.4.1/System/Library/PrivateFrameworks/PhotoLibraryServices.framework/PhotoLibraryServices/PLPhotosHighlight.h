@class NSObject, NSArray, NSString, NSSet, NSDate, PLManagedAsset;
@protocol NSCopying;

@interface PLPhotosHighlight : PLManagedObject <PLPhotosHighlightData> {
    BOOL _waitingForSharedAssetContainerRecalc;
}

@property (class, readonly, copy, nonatomic) NSArray *sortByTimeSortDescriptors;

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *verboseSmartDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, retain, nonatomic) NSDate *localStartDate;
@property (readonly, retain, nonatomic) NSDate *localEndDate;
@property (nonatomic) unsigned short visibilityState;
@property (nonatomic) unsigned short kind;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short category;
@property (nonatomic) int startTimeZoneOffset;
@property (nonatomic) int endTimeZoneOffset;
@property (nonatomic) double promotionScore;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic) unsigned long long mood;
@property (nonatomic) int extendedCount;
@property (nonatomic) int summaryCount;
@property (nonatomic) int dayGroupAssetsCount;
@property (nonatomic) int dayGroupExtendedAssetsCount;
@property (nonatomic) int dayGroupSummaryAssetsCount;
@property (retain, nonatomic) NSSet *childPhotosHighlights;
@property (retain, nonatomic) PLPhotosHighlight *parentPhotosHighlight;
@property (retain, nonatomic) NSSet *childDayGroupPhotosHighlights;
@property (retain, nonatomic) PLPhotosHighlight *parentDayGroupPhotosHighlight;
@property (nonatomic) short highlightVersion;
@property (nonatomic) short enrichmentVersion;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *summaryAssets;
@property (retain, nonatomic) NSSet *extendedAssets;
@property (retain, nonatomic) PLManagedAsset *keyAssetPrivate;
@property (retain, nonatomic) PLManagedAsset *monthKeyAssetPrivate;
@property (retain, nonatomic) PLManagedAsset *yearKeyAssetPrivate;
@property (retain, nonatomic) NSSet *moments;
@property (retain, nonatomic) NSSet *dayGroupAssets;
@property (retain, nonatomic) NSSet *dayGroupExtendedAssets;
@property (retain, nonatomic) NSSet *dayGroupSummaryAssets;
@property (retain, nonatomic) PLManagedAsset *dayGroupKeyAssetPrivate;
@property (retain, nonatomic) PLManagedAsset *keyAssetForKindPrivate;
@property (nonatomic) short searchIndexRebuildState;
@property (readonly, retain, nonatomic) NSArray *momentsSortedByTime;
@property (retain, nonatomic) NSString *titleShared;
@property (retain, nonatomic) NSString *titleMixed;
@property (retain, nonatomic) NSString *subtitleShared;
@property (retain, nonatomic) NSString *subtitleMixed;
@property (retain, nonatomic) NSString *verboseSmartDescriptionShared;
@property (retain, nonatomic) NSString *verboseSmartDescriptionMixed;
@property (nonatomic) int extendedCountShared;
@property (readonly, nonatomic) int extendedCountPrivate;
@property (nonatomic) int summaryCountShared;
@property (readonly, nonatomic) int summaryCountPrivate;
@property (nonatomic) int dayGroupAssetsCountShared;
@property (readonly, nonatomic) int dayGroupAssetsCountPrivate;
@property (nonatomic) int dayGroupExtendedAssetsCountShared;
@property (readonly, nonatomic) int dayGroupExtendedAssetsCountPrivate;
@property (nonatomic) int dayGroupSummaryAssetsCountShared;
@property (readonly, nonatomic) int dayGroupSummaryAssetsCountPrivate;
@property (retain, nonatomic) PLManagedAsset *keyAssetShared;
@property (retain, nonatomic) PLManagedAsset *monthKeyAssetShared;
@property (retain, nonatomic) PLManagedAsset *yearKeyAssetShared;
@property (retain, nonatomic) PLManagedAsset *dayGroupKeyAssetShared;
@property (retain, nonatomic) PLManagedAsset *keyAssetForKindShared;
@property (nonatomic) unsigned short mixedSharingCompositionKeyAssetRelationship;
@property (readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property (nonatomic) int assetsCount;
@property (nonatomic) int assetsCountShared;
@property (readonly, nonatomic) int assetsCountPrivate;
@property (nonatomic) unsigned short visibilityStateShared;
@property (nonatomic) unsigned short visibilityStateMixed;
@property (readonly, retain, nonatomic) NSSet *assetsPrivate;
@property (readonly, retain, nonatomic) NSSet *summaryAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *extendedAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *dayGroupAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *dayGroupExtendedAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *dayGroupSummaryAssetsPrivate;
@property (readonly, retain, nonatomic) NSSet *assetsShared;
@property (readonly, retain, nonatomic) NSSet *summaryAssetsShared;
@property (readonly, retain, nonatomic) NSSet *extendedAssetsShared;
@property (readonly, retain, nonatomic) NSSet *dayGroupAssetsShared;
@property (readonly, retain, nonatomic) NSSet *dayGroupExtendedAssetsShared;
@property (readonly, retain, nonatomic) NSSet *dayGroupSummaryAssetsShared;
@property (readonly, nonatomic) BOOL missingKeyAssetForKindPrivate;
@property (readonly, nonatomic) BOOL missingKeyAssetForKindShared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isRecent;
@property (readonly, nonatomic) short sharingComposition;
@property (readonly, nonatomic) int photoAssetsSuggestedByPhotosCount;
@property (readonly, nonatomic) int videoAssetsSuggestedByPhotosCount;

+ (id)entityName;
+ (id)batchFetchPhotosHighlightUUIDsByMomentUUIDsWithMomentUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
+ (id)batchFetchPhotosHighlightUUIDsByAssetUUIDsWithAssetUUIDs:(id)a0 library:(id)a1 error:(id *)a2;
+ (id)_predicateForHighlightsOfKind:(unsigned short)a0;
+ (id)fetchRequest;
+ (id)predicateForInvalidDayGroupHighlights;
+ (id)insertNewPhotosHighlightInManagedObjectContext:(id)a0 error:(id *)a1;
+ (id)_libraryScopePredicateForSharingConsideration:(long long)a0;
+ (id)predicateForInvalidHighlightsOfAllKinds;
+ (id)predicateForAllAssetsInPhotosHighlight:(id)a0;
+ (id)predicateForInvalidMonthOrYearHighlights;
+ (id)predicateForInvalidDayHighlights;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1 title:(id)a2;
+ (id)allPhotosHighlightsInManagedObjectContext:(id)a0 predicate:(id)a1 keyPathsForPrefetching:(id)a2 error:(id *)a3;
+ (id)_kindDescription:(unsigned short)a0;
+ (short)calculateSharingCompositionForPhotosHighlight:(id)a0;
+ (id)needsSearchIndexingForRebuildPredicate;
+ (id)predicateForAllTripHighlights;
+ (id)defaultPropertiesToFetchForMomentList;
+ (id)isEligibleForSearchIndexingPredicate;
+ (id)allowedPropertiesForMomentList;
+ (id)predicateForEmptyHighlightsOfKind:(unsigned short)a0;
+ (id)baseSearchIndexPredicate;

- (void)delete;
- (void)_appendLibraryScopeToCollection:(id)a0;
- (BOOL)_isGoldilocksEnabled;
- (void)_appendPersonsWithUUIDs:(id)a0 toCollection:(id)a1;
- (void)_appendBusinessNames:(id)a0 toCollection:(id)a1;
- (void)willSave;
- (void)_notifyChildSharingCompositionDidChangeFrom:(short)a0 to:(short)a1;
- (void)addSearchIndexContentsToCollection:(id)a0 fromDictionary:(id)a1 withDateFormatter:(id)a2 synonymsDictionaries:(id)a3 sceneTaxonomyProvider:(id)a4;
- (void)awakeFromInsert;
- (int)dayGroupSummaryAssetsCountShared;
- (int)assetsCount;
- (void)setAssets:(id)a0;
- (int)summaryCountShared;
- (void)setExtendedAssets:(id)a0;
- (void)_appendDates:(id)a0 withDateFormatter:(id)a1 withSynonyms:(id)a2 toCollection:(id)a3;
- (void)_appendHomeToCollection:(id)a0;
- (int)dayGroupExtendedAssetsCount;
- (void)recalculateSharedAssetContainerCachedValues;
- (BOOL)supportsDiagnosticInformation;
- (unsigned long long)searchAssetsCountShared;
- (void)_appendBusinessCategories:(id)a0 toCollection:(id)a1;
- (void)setParentPhotosHighlight:(id)a0;
- (unsigned long long)numberOfAssetsInExtendedForSharingConsideration:(long long)a0;
- (void)_appendScenesWithIdentifiers:(id)a0 toCollection:(id)a1 sceneTaxonomyProvider:(id)a2;
- (void)setSummaryAssets:(id)a0;
- (int)dayGroupAssetsCountShared;
- (void)_appendSocialGroupIdentifiers:(id)a0 toCollection:(id)a1;
- (void)_appendPOIs:(id)a0 withSynonyms:(id)a1 toCollection:(id)a2;
- (void)_appendPublicEventCategories:(id)a0 withSynonyms:(id)a1 toCollection:(id)a2;
- (void)setDayGroupSummaryAssets:(id)a0;
- (int)extendedCount;
- (short)sharingComposition;
- (int)dayGroupSummaryAssetsCount;
- (BOOL)isEligibleForSearchIndexing;
- (int)videoAssetsSuggestedByPhotosCount;
- (void)_appendROIs:(id)a0 withSynonyms:(id)a1 toCollection:(id)a2;
- (int)_cachedSharedAssetContainerValueWithRecalcIfNeededForKey:(id)a0;
- (void)setDayGroupAssets:(id)a0;
- (int)dayGroupAssetsCount;
- (int)assetsCountShared;
- (int)extendedCountShared;
- (void)_appendLocationsInfo:(id)a0 toCollection:(id)a1;
- (int)_cachedAssetCountForCountKey:(id)a0 collectionKey:(id)a1 isShared:(BOOL)a2;
- (int)dayGroupExtendedAssetsCountShared;
- (void)_appendWorkText:(id)a0 toCollection:(id)a1;
- (id)diagnosticInformation;
- (int)summaryCount;
- (void)removeAssetData:(id)a0;
- (void)_notifyChildPhotoOrVideoAssetsSuggestedByPhotosCountDidChangeFrom:(int)a0 to:(int)a1 forKeyPath:(id)a2;
- (void)reportSharedAssetContainerIncrementalChange:(id)a0 forAllAssetsCountKey:(id)a1;
- (void)_appendMeanings:(id)a0 withSynonyms:(id)a1 toCollection:(id)a2;
- (int)photoAssetsSuggestedByPhotosCount;
- (void)bumpHighlightVersion;
- (void)_appendHolidays:(id)a0 toCollection:(id)a1;
- (void)setDayGroupExtendedAssets:(id)a0;
- (unsigned long long)searchAssetsCountPrivate;
- (void)_appendPublicEventStrings:(id)a0 toCollection:(id)a1 forSearchIndexCategory:(unsigned long long)a2;

@end
