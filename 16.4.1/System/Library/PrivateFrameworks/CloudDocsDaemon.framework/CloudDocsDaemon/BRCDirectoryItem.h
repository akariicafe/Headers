@class NSString, BRCDocumentItem, BRCAliasItem;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {
    BOOL _needsDeleteForItemIDTransfer;
}

@property (nonatomic) long long mtime;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (BOOL)isDirectory;
- (id)childItemCount;
- (BOOL)hasLostChildren;
- (id)asShareableItem;
- (BOOL)hasDeadChildren;
- (BOOL)hasLiveChildren;
- (BOOL)isShareableItem;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1 offline:(BOOL)a2;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithLocalItem:(id)a0;
- (id)_initWithRelativePath:(id)a0 parentGlobalID:(id)a1;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertRecursiveProperties;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (BOOL)_markChildrenLostForDeadParent;
- (void)_markLostDirectoryAsAlmostDead;
- (BOOL)_recomputeChildItemCount;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (id)_serverChildItemCount;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)_updateRecursiveProperties;
- (BOOL)changedAtRelativePath:(id)a0 scanPackage:(BOOL)a1;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (id)collaborationIdentifierIfComputable;
- (BOOL)containsDirFault;
- (BOOL)containsFault;
- (BOOL)containsOverQuotaItems;
- (BOOL)containsPendingDeleteDocuments;
- (BOOL)containsPendingDownload;
- (BOOL)containsPendingUploadOrSyncUp;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)folderRootStructureRecord;
- (BOOL)hasPendingLostChildren;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)isAppLibraryTrashFolder;
- (BOOL)isCrossZoneMoveTombstone;
- (BOOL)isDirectoryFault;
- (BOOL)isDirectoryWithPackageName;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (BOOL)markChildrenLost;
- (void)markNeedsDeleteForItemIDTransfer;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)a0;
- (BOOL)possiblyContainsSharedItem;
- (void)prepareForSyncUpInZone:(id)a0;
- (id)serverQuotaUsage;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 etagIfLoser:(id)a2 stageFileName:(id)a3 error:(id *)a4;
- (void)transformIntoFSRoot;
- (BOOL)updateFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)a0 parentGlobalID:(id)a1;

@end
