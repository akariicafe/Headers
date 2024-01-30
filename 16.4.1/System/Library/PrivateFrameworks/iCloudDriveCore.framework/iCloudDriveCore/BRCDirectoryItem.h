@class NSString, BRCDocumentItem, BRCAliasItem, BRCItemGlobalID;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {
    BOOL _needsDeleteForItemIDTransfer;
}

@property (nonatomic) long long mtime;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCItemGlobalID *prevZoneGlobalID;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (BOOL)isDirectory;
- (void).cxx_destruct;
- (id)childItemCount;
- (id)asShareableItem;
- (BOOL)hasDeadChildren;
- (BOOL)hasLiveChildren;
- (BOOL)isShareableItem;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1 offline:(BOOL)a2;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithLocalItem:(id)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_insertRecursiveProperties;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (BOOL)_recomputeChildItemCount;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (id)_serverChildItemCount;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)_updateRecursiveProperties;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (id)collaborationIdentifierIfComputable;
- (BOOL)containsDirFault;
- (BOOL)containsOverQuotaItems;
- (BOOL)containsPendingDeleteDocuments;
- (BOOL)containsPendingDownload;
- (BOOL)containsPendingUploadOrSyncUp;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (id)folderRootStructureRecord;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)isAppLibraryTrashFolder;
- (BOOL)isCrossZoneMoveTombstone;
- (BOOL)isDirectoryFault;
- (BOOL)isDirectoryWithPackageName;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (void)markNeedsDeleteForItemIDTransfer;
- (BOOL)possiblyContainsSharedItem;
- (void)prepareForSyncUpInZone:(id)a0;
- (id)serverQuotaUsage;
- (void)transformIntoFSRoot;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (void)_crossZoneMoveToParent:(id)a0;
- (void)_insertZombieForCrossZoneMove;
- (void)_markZombieForCrossZoneMove;
- (void)_signalPropagationToChildren;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary;
- (void)markChildPropagationComplete;
- (void)markCrossZoneProgagationComplete;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;
- (BOOL)updateFromServerItem:(id)a0;
- (void)updateWithContentModificationDate:(id)a0;

@end
