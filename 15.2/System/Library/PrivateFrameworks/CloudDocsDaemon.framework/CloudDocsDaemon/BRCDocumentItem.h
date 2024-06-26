@class NSError, NSData, NSString, BRCDesiredVersion, NSDictionary, NSMutableSet, BRCLocalVersion, BRCAliasItem, BRCDirectoryItem;

@interface BRCDocumentItem : BRCLocalItem <BRCTopLevelShareable>

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BOOL hasLocalContent;
@property (readonly, nonatomic) BOOL isEvictable;
@property (readonly, nonatomic) BOOL isAutomaticallyEvictable;
@property (readonly, nonatomic) BOOL isVisibleIniCloudDrive;
@property (readonly, nonatomic) BOOL isDownloadRequested;
@property (readonly, nonatomic) BOOL isDownloadRequestedForThumbnail;
@property (readonly, nonatomic) BOOL shouldBeGreedy;
@property (readonly, nonatomic) BOOL shouldHaveThumbnail;
@property (readonly, nonatomic) BOOL shouldTransferThumbnail;
@property (readonly, nonatomic) unsigned int queryItemStatus;
@property (readonly, nonatomic) unsigned short downloadStatus;
@property (readonly, nonatomic) BRCLocalVersion *currentVersion;
@property (readonly, nonatomic) BRCDesiredVersion *desiredVersion;
@property (readonly, nonatomic) NSError *uploadError;
@property (retain, nonatomic) NSMutableSet *liveConflictLoserEtags;
@property (readonly, nonatomic) NSMutableSet *resolvedConflictLoserEtags;
@property (readonly, nonatomic) NSDictionary *conflictLoserState;
@property (readonly, nonatomic) BOOL shouldAutomaticallyDownloadThumbnail;
@property (retain, nonatomic) NSData *liveThumbnailSignature;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isDocumentAutomaticallyEvictableWithExtension:(id)a0;
+ (BOOL)isDocumentAutomaticallyEvictableWithName:(id)a0;
+ (BOOL)shouldDocumentBeGreedyWithName:(id)a0;
+ (id)reverseAliasEnumeratorWithUnsaltedBookmarkData:(id)a0 session:(id)a1;
+ (id)anyReverseAliasWithUnsaltedBookmarkData:(id)a0 inAppLibrary:(id)a1;
+ (id)reverseAliasEnumeratorWithRelativePath:(id)a0;
+ (id)anyReverseAliasInAppLibrary:(id)a0 toRelativePath:(id)a1;

- (void)handleUnknownItemError;
- (BOOL)isFault;
- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)changedAtRelativePath:(id)a0 scanPackage:(BOOL)a1;
- (id)_initWithLocalItem:(id)a0;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)markOverQuotaWithError:(id)a0;
- (void)markUploadedWithRecord:(id)a0;
- (id)asShareableItem;
- (void)markNeedsUploadOrSyncingUp;
- (id)setOfAppLibraryIDsWithReverseAliases;
- (BOOL)isShareableItem;
- (BOOL)updateFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (id)contentsRecordID;
- (void)markDead;
- (void)clearFromStage;
- (BOOL)markLatestSyncRequestAcknowledgedInZone:(id)a0;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (void)markLatestSyncRequestRejectedInZone:(id)a0;
- (BOOL)updateXattrInfoFromPath:(id)a0 error:(id *)a1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (id)_initWithRelativePath:(id)a0 parentGlobalID:(id)a1;
- (void)markItemForgottenByServer;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (void)markForceNeedsSyncUp;
- (void)_insertTombstoneForPreviousZoneGlobalID;
- (BOOL)isDocumentBeingCopiedToNewZone;
- (void)markLiveFromStageWithPath:(id)a0;
- (void)learnItemID:(id)a0 serverItem:(id)a1 path:(id)a2 markLost:(BOOL)a3;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_isInterestingUpdateForNotifs;
- (void)markNeedsReading;
- (void)clearVersionSignatures:(unsigned long long)a0 isPackage:(BOOL)a1;
- (BOOL)isDocument;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_needsSyncBubbleRecomputeForError:(id)a0 origError:(id)a1;
- (id)baseContentsRecord;
- (void)updateVersionMetadataFromServerItem:(id)a0 preventVersionDiffs:(BOOL)a1;
- (void)appDidResolveConflictLoserWithEtag:(id)a0;
- (void)_updateReadThrottleIfNeededForRowID:(unsigned long long)a0 forCreation:(BOOL)a1;
- (BOOL)isPackage;
- (BOOL)supportsServerSideAssetCopies;
- (void)clearDesiredVersion;
- (BOOL)validateLoggingToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)updateContentsCKInfoAndDeviceIDFromServerItem:(id)a0;
- (void)forceVersionConflictByClearkingCKInfo;
- (BOOL)_nukePackageItemsFromDB:(id)a0;
- (id)anyReverseAliasInAppLibrary:(id)a0;
- (void)stageFaultForCreation:(BOOL)a0 name:(id)a1 size:(id)a2 isPackage:(BOOL)a3;
- (void)forceiWorkSharingInfoResend;
- (void)addResolvedConflictLoserEtag:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (int)updateDesiredVersionWithServerItem:(id)a0 options:(unsigned int)a1 needsSave:(BOOL *)a2;
- (id)aliasItemID;
- (id)initWithCoder:(id)a0;
- (void)_updateLiveConflictLoserFromFSAtPath:(id)a0;
- (void)_markAsDeadTombstoneWithPreviousGlobalID;
- (void)removeLiveConflictLoserEtag:(id)a0;
- (void)markForceUpload;
- (int)updateDesiredVersionWithServerItem:(id)a0 diffs:(unsigned long long)a1 options:(unsigned int)a2 needsSave:(BOOL *)a3;
- (void)_updateRecursivePropertiesInDB:(id)a0 dbRowID:(unsigned long long)a1 diffs:(unsigned long long)a2;
- (void)stageFaultForCreation:(BOOL)a0 serverItem:(id)a1;
- (void)learnThumbnailSignatureFromLiveVersion:(id)a0;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (void)markCrossZoneMovedForServerAssetCopyWithParentItem:(id)a0 path:(id)a1;
- (id)descriptionWithContext:(id)a0;
- (void)_updateUploadJobIfNeededWithDiffs:(unsigned long long)a0;
- (void)forceiWorkConflictEtag:(id)a0;
- (id)syncContextUsedForTransfers;
- (id)_filenameOverrideForPath:(id)a0;
- (id)reverseAliasEnumerator;
- (BOOL)contentRecordNeedsForceAllFieldsWhenDeadInServerTruth:(BOOL)a0;

@end
