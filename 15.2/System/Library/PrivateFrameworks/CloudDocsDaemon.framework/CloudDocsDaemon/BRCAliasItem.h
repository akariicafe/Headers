@class BRCItemID, BRCAppLibrary, BRCDocumentItem, BRCDirectoryItem, BRCClientZone;

@interface BRCAliasItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCAppLibrary *targetAppLibrary;
@property (readonly, nonatomic) BRCClientZone *targetClientZone;
@property (readonly, nonatomic) BRCItemID *targetItemID;

+ (void)fillStructureRecord:(id)a0 inZone:(id)a1 itemID:(id)a2 ckInfo:(id)a3 parentID:(id)a4 targetItemID:(id)a5 targetZone:(id)a6 diffs:(unsigned long long)a7 isFolderShare:(BOOL)a8 beingDeadInServerTruth:(BOOL)a9 shouldPCSChainStatus:(unsigned char)a10;
+ (id)targetReferenceWithItemID:(id)a0 targetZone:(id)a1 isFolderShare:(BOOL)a2;

- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)changedAtRelativePath:(id)a0 scanPackage:(BOOL)a1;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)markNeedsUploadOrSyncingUp;
- (BOOL)isBRAlias;
- (void)targetMovedToTrashOrDeleted;
- (void)markLatestSyncRequestRejectedInZone:(id)a0;
- (BOOL)updateXattrInfoFromPath:(id)a0 error:(id *)a1;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)a0;
- (id)structureRecordBeingDeadInServerTruth:(BOOL)a0 stageID:(id)a1 shouldPCSChainStatus:(unsigned char)a2;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (void)learnTarget:(id)a0;
- (BOOL)updateOnDiskWithAliasTarget:(id)a0 forServerEdit:(BOOL)a1;
- (void)_removeAliasAndMarkDead;
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)a0;
- (id)targetDocument;
- (void)targetMovedToThisAppLibrary;

@end
