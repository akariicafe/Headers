@class NSString, BRCDocumentItem, BRCAliasItem;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) long long mtime;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (BOOL)isDirectoryWithPackageName;
- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)changedAtRelativePath:(id)a0 scanPackage:(BOOL)a1;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)asShareableItem;
- (BOOL)isShareableItem;
- (BOOL)updateFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)transformIntoFSRoot;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (BOOL)_repopulateRecursivePropertiesOnDocumentsDirectoryIfNecessary;
- (BOOL)containsPendingUploadOrSyncUp;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (BOOL)containsOverQuotaItems;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)a0;
- (BOOL)possiblyContainsSharedItem;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (id)_initWithRelativePath:(id)a0 parentGlobalID:(id)a1;
- (id)folderRootStructureRecord;
- (BOOL)containsFault;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)hasDeadChildren;
- (BOOL)possiblyContainsSharedByMeItem;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (unsigned long long)childItemCount;
- (BOOL)_recomputeChildItemCount;
- (BOOL)isDirectory;
- (BOOL)_insertRecursiveProperties;
- (BOOL)_markChildrenLostForDeadParent;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)hasPendingLostChildren;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (void)_markLostDirectoryAsAlmostDead;
- (BOOL)_updateRecursiveProperties;
- (BOOL)possiblyContainsSharedToMeItem;
- (BOOL)markChildrenLost;
- (BOOL)hasLostChildren;
- (BOOL)containsPendingDownload;
- (BOOL)hasLiveChildren;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)containsPendingDeleteDocuments;

@end
