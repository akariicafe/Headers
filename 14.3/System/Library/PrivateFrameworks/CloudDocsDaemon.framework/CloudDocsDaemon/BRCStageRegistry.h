@class brc_task_tracker, NSString, BRCAccountSession, NSMutableSet, NSMutableDictionary, NSObject, BRCStagePersistedState;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate> {
    BRCAccountSession *_session;
    NSString *_stageDirectoryPath[7];
    unsigned long long _stageDirectoryFileID[7];
    NSMutableSet *_unflushedStagedFileIDs;
    NSMutableSet *_activeUploadStageIDs;
    NSMutableSet *_activeDownloadStageIDs;
    NSMutableDictionary *_watchedLockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    BOOL _lowDiskSpace;
    NSObject<OS_dispatch_queue> *_queue;
    brc_task_tracker *_tracker;
}

@property (readonly, nonatomic) int deviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

+ (unsigned short)computeItemModeFromStatInfo:(id)a0 isPackage:(BOOL)a1;
+ (BOOL)applySharingReadonlyACLsToFD:(int)a0 statInfo:(id)a1 version:(id)a2 clientZone:(id)a3 sharingOptions:(unsigned long long)a4;
+ (void)migrateStageToVersion2_0WithSession:(id)a0;

- (void)cancel;
- (void)close;
- (void).cxx_destruct;
- (void)resume;
- (void)open;
- (void)willFlushAllStagedFileIDs;
- (id)initWithAccountSession:(id)a0;
- (long long)purgeSpace:(long long)a0 withUrgency:(int)a1;
- (void)forgetWatchedLockedFileIDsForAppLibrary:(id)a0;
- (void)cleanupStagedDownloadWithID:(id)a0 forItemID:(id)a1;
- (id)createURLForDownloadWithStageID:(id)a0 name:(id)a1;
- (void)forgetWatchedLockedFileID:(id)a0;
- (BOOL)moveFromStageToGraveyard:(unsigned long long)a0 forItemID:(id)a1;
- (BOOL)makeSideFaultInStageGatherFileID:(unsigned long long *)a0 generationID:(unsigned int *)a1 documentID:(unsigned int *)a2 properties:(id)a3 inAppLibrary:(id)a4 forCreation:(BOOL)a5 error:(id *)a6;
- (BOOL)didFlushStagedFileID:(unsigned long long)a0;
- (BOOL)pendingFetchRecordDirExistsInStageWithStartingChangeToken:(id)a0 recordZoneID:(id)a1;
- (id)createURLForUploadWithStageID:(id)a0 name:(id)a1;
- (void)associateSyncUpStageID:(id)a0 withOperation:(id)a1;
- (BOOL)moveFromStage:(unsigned long long)a0 toPath:(id)a1 fileName:(id)a2 error:(id *)a3;
- (BOOL)copyPackageFileWithPackageFd:(int)a0 toStageFd:(int)a1 relpath:(id)a2;
- (int)_performInStageDirectory:(unsigned char)a0 block:(id /* block */)a1;
- (void)_fileIDMightHaveBeenUnlocked:(id)a0;
- (int)_openStageDirectory:(unsigned char)a0;
- (id)nonLocalFaultURLForAdditionName:(id)a0;
- (void)applyMetadataOnFileDescriptor:(int)a0 liveFileDescriptor:(int)a1 itemID:(id)a2 clientZone:(id)a3 statInfo:(id)a4 version:(id)a5 sharingOptions:(unsigned long long)a6;
- (void)_watchLockedRelpath:(id)a0;
- (id)_pathInStage:(unsigned long long)a0 index:(unsigned char *)a1 generationID:(unsigned int *)a2;
- (BOOL)_flockToMakeLiveAtPath:(id)a0 error:(id *)a1;
- (void)cleanupStagedSyncUpWithID:(id)a0;
- (id)_anchorNameForChangeToken:(id)a0 recordZoneID:(id)a1;
- (BOOL)_graveyardAt:(int)a0 path:(id)a1 forItemID:(id)a2;
- (long long)garbageCollectSpace:(long long)a0;
- (long long)purgeGraveyardSpace:(long long)a0 withUrgency:(int)a1;
- (long long)_purgeSpaceUnderQueue:(long long)a0 withUrgency:(int)a1;
- (void)garbageCollectPackages;
- (void)_updatePersistedStateWithLatestGCStartTime:(long long)a0;
- (void)lowDiskStatusChangedForDevice:(int)a0 hasEnoughSpace:(BOOL)a1;
- (BOOL)makeDirectoryInStageGatherFileID:(unsigned long long *)a0 generationID:(unsigned int *)a1 error:(id *)a2;
- (BOOL)makeSymlinkWithTarget:(id)a0 inStageGatherFileID:(unsigned long long *)a1 generationID:(unsigned int *)a2 error:(id *)a3;
- (id)makeNonLocalVersionSideFaultWithAdditionName:(id)a0 clientZone:(id)a1 statInfo:(id)a2 version:(id)a3 sharingOptions:(unsigned long long)a4 error:(id *)a5;
- (BOOL)makeItemLive:(id)a0 fromStage:(unsigned long long)a1 bySwappingWith:(id)a2 fileName:(id)a3 error:(id *)a4;
- (id)makePendingFetchRecordDirWithStartingChangeToken:(id)a0 recordZoneID:(id)a1;
- (void)cleanupStagedUploadWithID:(id)a0;
- (void)associateDownloadStageID:(id)a0 withOperation:(id)a1;
- (BOOL)rememberStagedDownloadWithID:(id)a0 gatherFileID:(unsigned long long *)a1 generationID:(unsigned int *)a2 documentID:(unsigned int *)a3 appLibrary:(id)a4 error:(id *)a5;
- (BOOL)moveOldVersionFromPath:(id)a0 error:(id *)a1;
- (BOOL)moveToGraveyardFromPath:(id)a0 forItemID:(id)a1 error:(id *)a2;
- (BOOL)existsInStage:(unsigned long long)a0 generationID:(unsigned int *)a1;
- (BOOL)existsInOldVersionStageOrGraveyard:(unsigned long long)a0;
- (BOOL)transferDocumentID:(unsigned int)a0 fromOldVersionStage:(unsigned long long)a1 toStage:(unsigned long long)a2;
- (long long)purgableSpace;
- (void)disarmLockedTestTimer;

@end
