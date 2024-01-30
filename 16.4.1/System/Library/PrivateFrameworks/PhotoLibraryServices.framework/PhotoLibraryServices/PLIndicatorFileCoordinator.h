@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)setWipeCPLOnOpen;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)forceSoftResetSync;
- (BOOL)isWipeCPLOnOpen;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (BOOL)isEnableICloudPhotos;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (id)_readPListWithFilename:(id)a0;
- (void)setDupeAnalysisNeeded:(BOOL)a0;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (id)_pauseDataOnPath:(id)a0;
- (id)initWithPathManager:(id)a0;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (void)dealloc;
- (BOOL)isUserPause;
- (short)currentPauseReason;
- (id)dupeAnalysisNeededFilePath;
- (BOOL)isDisableICloudPhotos;
- (void)writeEnableICloudPhotosMarker;
- (BOOL)isForceSoftResetSync;
- (void)clearWipeCPLOnOpen;
- (BOOL)isDupeAnalysisNeeded;
- (id)_rebuildingPersonsIndicatorFilePath;
- (BOOL)isRebuildingPersons;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (void)setTakingPhotoIsBusy:(BOOL)a0;
- (BOOL)isICloudPhotosPaused;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (BOOL)hasItemToDownload;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (void)writeDisableICloudPhotosMarker;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 crashRecovery:(id /* block */)a2;
- (id)unpauseTime;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (void)setCreatingAssetIsBusy:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;

@end
