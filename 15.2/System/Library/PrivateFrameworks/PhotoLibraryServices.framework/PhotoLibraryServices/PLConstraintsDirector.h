@class PFCameraViewfinderSessionWatcher, NSString, PLPhotoAnalysisServiceClient, PLForegroundMonitor, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLConstraintsDirector : NSObject <PLForegroundMonitorDelegate, PFCameraViewfinderSessionWatcherDelegate> {
    BOOL _didTransitionToOpportunisticDisallowed;
    BOOL _photosAppInForeground;
    BOOL _cameraAppInForeground;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_bonusTimer;
    PLForegroundMonitor *_foregroundMonitor;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    PLPhotoAnalysisServiceClient *_photoAnalysisServiceClient;
    long long _faceQuickClassificationRequestID;
    NSURL *_photoLibraryURL;
}

@property (class, readonly) BOOL constraintsAllowSchedulingUserInitiatedAnalysisForAssets;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_photoanalysisdIsRunning;

- (void)informCameraAppForegroundState:(BOOL)a0;
- (id)initWithPhotoAnalysisClient:(id)a0 photoLibraryURL:(id)a1;
- (void)foregroundMonitor:(id)a0 changedStateToForeground:(BOOL)a1 forBundleIdentifier:(id)a2;
- (void)_disableAutoFGAndUserFGConstraints;
- (void).cxx_destruct;
- (void)_addBonusTime;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)informOpportunisticTasksAllowed:(BOOL)a0;
- (void)informCameraAppCameraViewControllerVisibilityChanged:(BOOL)a0;
- (BOOL)shouldScheduleUserInitiatedAnalysisForAssets;

@end
