@class PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (id)initWithPathManager:(id)a0;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 crashRecovery:(id /* block */)a2;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)writeEnableICloudPhotosMarker;
- (BOOL)isEnableICloudPhotos;
- (void)forceSoftResetSync;
- (id)_readPListWithFilename:(id)a0;
- (BOOL)isDupeAnalysisNeeded;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (short)currentPauseReason;
- (void)setDupeAnalysisNeeded:(BOOL)a0;
- (id)_pauseDataOnPath:(id)a0;
- (BOOL)hasItemToDownload;
- (id)dupeAnalysisNeededFilePath;
- (void)writeDisableICloudPhotosMarker;
- (void).cxx_destruct;
- (BOOL)isDisableICloudPhotos;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (BOOL)isICloudPhotosPaused;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (id)_rebuildingPersonsIndicatorFilePath;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (BOOL)isUserPause;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (void)setWipeCPLOnOpen;
- (void)clearWipeCPLOnOpen;
- (id)unpauseTime;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (BOOL)isForceSoftResetSync;
- (void)setTakingPhotoIsBusy:(BOOL)a0;
- (BOOL)isWipeCPLOnOpen;
- (BOOL)isRebuildingPersons;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;

@end
