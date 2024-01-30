@class PLBackgroundJobLibraryCoordinator, NSString, PFCameraViewfinderSessionWatcher, PLForegroundMonitor, NSDictionary, NSObject, PFCoalescer;
@protocol PLBackgroundJobServiceDelegate, OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;

@interface PLBackgroundJobService : NSObject <PLBackgroundJobLibraryCoordinatorDelegate, PLForegroundMonitorDelegate, PFCameraViewfinderSessionWatcherDelegate> {
    NSObject<OS_xpc_object> *_xpcActivity;
    unsigned long long _state;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PFCoalescer *_registrationCoalescer;
    PLForegroundMonitor *_foregroundMonitor;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    double _registrationCoalescerPushBackTimeInterval;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByPriority;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesToProcessByPriorityLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_xpcActivityDeferTimer;
    BOOL _deferringService;
    BOOL _simulateXpcActivityDeferring;
    BOOL _cameraForeground;
}

@property (weak, nonatomic) id<PLBackgroundJobServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_criteriaForActivityPriority:(unsigned long long)a0;
+ (id)_activityIdentifierForPriority:(unsigned long long)a0;

- (void)_shutdown;
- (void)_updateCameraForegroundState:(BOOL)a0;
- (BOOL)_serviceReadyForRegistration;
- (id)initWithLibraryCoordinator:(id)a0;
- (void)_startRunningBackgroundJobsWithPriority:(unsigned long long)a0;
- (id)init;
- (void)_loadBundleRecordsDictionaryFromUserDefaults;
- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (void).cxx_destruct;
- (void)_simulateXPCShouldDefer;
- (void)_setServiceState:(unsigned long long)a0;
- (void)foregroundMonitor:(id)a0 changedStateToForeground:(BOOL)a1 forBundleIdentifier:(id)a2;
- (id)_getBundleRecordsFromProcessingSetForPriority:(unsigned long long)a0;
- (void)_verifyStateTransitionFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)cameraWatcherDidChangeState:(id)a0;
- (id)_getBundleRecordsFromProcessingSetForAllPriorites;
- (void)_registerActivityIfNecessaryOnBundles:(id)a0;
- (id)_bundlesToProcessByPriorityAsPathStrings;
- (void)registerActivityIfNecessaryOnBundle:(id)a0;
- (void)_stopPollingForActivityStatus;
- (void)invalidateLibraryBundle:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_getServiceStateAlreadyLocked;
- (void)_startPollingForActivityStatus;
- (void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)a0;
- (void)_removeBundleRecordFromProcessingSet:(id)a0 priority:(unsigned long long)a1;
- (void)signalBackgroundProcessingNeededOnLibrary:(id)a0;
- (unsigned long long)_getServiceState;
- (void)_persistBundleRecordsDictionaryToUserDefaults;
- (void)_stopRunningBackgroundJobsAndTearDownXPCDeferTimers;
- (id)_getBundlePathsToProcess;
- (void)_appendBundleRecordsToProcessingSet:(id)a0 priority:(unsigned long long)a1;
- (void)_setServiceStateAlreadyLocked:(unsigned long long)a0;
- (void)_stopRunningBackgroundJobs;
- (void)_registerActivityWithPriority:(unsigned long long)a0;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring:(BOOL)a0;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)a0 priority:(unsigned long long)a1;
- (void)_removeAllBundlesFromProcessingSet;

@end
