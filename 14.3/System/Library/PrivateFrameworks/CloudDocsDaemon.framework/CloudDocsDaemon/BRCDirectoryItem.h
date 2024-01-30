@class NSString, BRCDocumentItem, BRCAliasItem;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) long long mtime;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (BOOL)isDirectory;
- (unsigned long long)childItemCount;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (BOOL)changedAtRelativePath:(id)a0 scanPackage:(BOOL)a1;
- (id)asShareableItem;
- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)possiblyContainsSharedItem;
- (BOOL)isShareableItem;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (BOOL)containsPendingUploadOrSyncUp;
- (BOOL)possiblyContainsSharedToMeItem;
- (BOOL)hasDeadChildren;
- (BOOL)isDirectoryWithPackageName;
- (id)_initWithRelativePath:(id)a0 parentGlobalID:(id)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (BOOL)updateFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (id)folderRootStructureRecord;
- (BOOL)containsFault;
- (BOOL)containsPendingDeleteDocuments;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)markChildrenLost;
- (BOOL)hasPendingLostChildren;
- (BOOL)_markChildrenLostForDeadParent;
- (BOOL)hasLostChildren;
- (void)_markLostDirectoryAsAlmostDead;
- (BOOL)_updateRecursiveProperties;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (BOOL)_insertRecursiveProperties;
- (BOOL)possiblyContainsSharedByMeItem;
- (BOOL)containsOverQuotaItems;
- (BOOL)containsPendingDownload;
- (void)transformIntoFSRoot;
- (BOOL)hasLiveChildren;

@end
