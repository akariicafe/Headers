@class NSArray, NSEntityDescription, NSManagedObjectModel;

@interface RCQueryManager : NSObject {
    NSManagedObjectModel *_model;
}

@property (class, readonly, nonatomic) NSArray *defaultSortDescriptors;
@property (class, readonly, nonatomic) NSArray *defaultFetchedProperties;

@property (readonly, nonatomic) NSEntityDescription *cloudRecordingEntity;
@property (readonly, nonatomic) NSEntityDescription *folderEntity;

+ (id)favoritePredicate;
+ (id)customLabelSearchPredicateWithString:(id)a0;
+ (id)cacheDeletedOnWatchPredicate;
+ (id)clearTransientFlagsBatchUpdateRequest;
+ (id)playablePredicate;
+ (id)musicMemoPredicate;
+ (id)watchOSPredicate;
+ (id)recordingsInFolderPredicate:(id)a0;

- (id)initWithModel:(id)a0;
- (id)allFoldersForSortingFetchRequest;
- (id)recordingsWithTitleFetchRequest:(id)a0;
- (id)_labelPresetsForQuery:(id)a0;
- (id)foldersWithUUIDFetchRequest:(id)a0;
- (id)allCustomLabelsFetchRequest;
- (id)recordingMatchingNameCaseInsensitiveFetchRequest:(id)a0;
- (id)foldersWithNameFetchRequest:(id)a0 searchOption:(int)a1;
- (id)visibleRecordingsFetchRequest;
- (id)evictionDateBeforeFetchRequest:(id)a0;
- (id)databasePropertyKeyToPropertyFetchRequest:(id)a0;
- (id)allDeletedRecordingsFetchRequest;
- (id)recordingsInFolderFetchRequest:(id)a0;
- (id)deletedRecordingsFetchRequest;
- (id)_cloudRecordingFetchRequest;
- (id)encryptedFieldsMigrationsFetchRequest;
- (id)recordingsWithNilEncryptedTitleOrCustomLabelFetchRequest;
- (id)playableRecordingsFetchRequestWithSubPredicate:(id)a0;
- (id)foldersWithhRankFetchRequest:(long long)a0;
- (unsigned long long)playableRecordingsCountWithContext:(id)a0;
- (id)recordingsForPathFetchRequest:(id)a0;
- (id)userDefinedFoldersFetchRequest;
- (id)recordingsForSpotlightSearchFetchRequest:(id)a0;
- (void).cxx_destruct;
- (void)updateFetchRequestTemplates;
- (id)recordingsWithUniqueIDFetchRequest:(id)a0;
- (id)legacyRecordingWithUniqueIDFetchRequest:(id)a0;
- (id)recordingsWithUniqueIDsFetchRequest:(id)a0;

@end
