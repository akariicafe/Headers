@class NSString, NSSet, NSData, NSDate;

@interface PLSuggestion : PLManagedObject <PLCloudDeletable>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short subtype;
@property (nonatomic) unsigned short state;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) short version;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *activationDate;
@property (retain, nonatomic) NSDate *relevantUntilDate;
@property (retain, nonatomic) NSDate *expungeDate;
@property (retain, nonatomic) NSData *actionData;
@property (retain, nonatomic) NSData *featuresData;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSSet *keyAssets;
@property (retain, nonatomic) NSSet *representativeAssets;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (nonatomic) unsigned short featuredState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)suggestionWithUUID:(id)a0 inPhotoLibrary:(id)a1;
+ (id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1;
+ (unsigned long long)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)a0;
+ (void)resetCloudStateInPhotoLibrary:(id)a0;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;
+ (id)_syncablePredicate;
+ (id)_suggestionsMatchingPredicate:(id)a0 sortDescriptors:(id)a1 limit:(long long)a2 inManagedObjectContext:(id)a3;
+ (unsigned long long)deletePendingSuggestionsCreatedBefore:(id)a0 inManagedObjectContext:(id)a1;
+ (id)suggestionsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)predicateForAllAssetsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (id)suggestionsToPrefetchInManagedObjectContext:(id)a0;
+ (id)suggestionsToUploadInPhotoLibrary:(id)a0 limit:(long long)a1;
+ (id)_representativeAssetIDsInSuggestion:(id)a0 managedObjectContext:(id)a1;
+ (BOOL)_suggestionSubtypeAllowedToContainSyndicatedAssets:(unsigned short)a0;

- (void)delete;
- (BOOL)isPending;
- (id)cplFullRecord;
- (void)prepareForDeletion;
- (id)mutableRepresentativeAssets;
- (id)mutableKeyAssets;
- (void)willSave;
- (void)updateCachedCounts:(id)a0;
- (id)cplSuggestionChange;
- (void)updateWithCPLSuggestionChange:(id)a0 inPhotoLibrary:(id)a1;
- (void)removeRepresentativeAsset:(id)a0;
- (BOOL)isEmpty;
- (void)replaceKeyAsset:(id)a0;
- (void)updateStartAndEndDate;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;

@end
