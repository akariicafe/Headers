@interface ML3MigrationDirectives : NSObject

@property (readonly, nonatomic) int originalUserVersion;
@property (nonatomic) int currentUserVersion;
@property (nonatomic) BOOL needsToRecreateIndexes;
@property (nonatomic) BOOL needsToRecreateTriggers;
@property (nonatomic) BOOL needsToRemoveLocationsForItemsMissingAssets;
@property (nonatomic) BOOL needsToReloadStoreBookmarkMetadataIdentifiers;
@property (nonatomic) BOOL needsToReloadContainerMediaTypes;
@property (nonatomic) BOOL needsToReloadCollectionRepresentativeItems;
@property (nonatomic) BOOL needsAnalyze;
@property (nonatomic) BOOL needsToAutogenerateArtworkVariants;
@property (nonatomic) BOOL needsToUpdateSortMap;
@property (nonatomic) BOOL forceUpdateOriginals;

- (id)initWithOriginalUserVersion:(int)a0;

@end
