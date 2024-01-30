@class PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (id)initWithPathManager:(id)a0;
- (BOOL)isForceSoftResetSync;
- (void)setTakingPhotoIsBusy:(BOOL)a0;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void).cxx_destruct;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (BOOL)isICloudPhotosPaused;
- (BOOL)isUserPause;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (void)writeEnableICloudPhotosMarker;
- (BOOL)isDupeAnalysisNeeded;
- (id)dupeAnalysisNeededFilePath;
- (BOOL)isDisableICloudPhotos;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)setDupeAnalysisNeeded:(BOOL)a0;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (void)forceSoftResetSync;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 crashRecovery:(id /* block */)a2;
- (id)unpauseTime;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (id)_pauseDataOnPath:(id)a0;
- (short)currentPauseReason;
- (id)_readPListWithFilename:(id)a0;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (BOOL)isEnableICloudPhotos;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (BOOL)isRebuildingPersons;
- (void)writeDisableICloudPhotosMarker;
- (BOOL)hasItemToDownload;

@end
