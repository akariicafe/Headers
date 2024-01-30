@class PFSerialQueue, NSString, PHAPhotoLibraryList, NSMutableDictionary, PHAActivityLog, NSObject, NSMutableArray, PHAMusicActivity, NSMutableSet;
@protocol PFDTransactionDispatchQueue, OS_xpc_object, OS_voucher, OS_dispatch_source;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, PHAActivityDelegate, PHAServiceOperationHandling, NSXPCListenerDelegate> {
    BOOL _isPhotoAnalysisAgent;
    BOOL _backgroundAnalysisActivityTriggered;
    PFSerialQueue<PFDTransactionDispatchQueue> *_executiveStateQueue;
    NSObject<OS_voucher> *_turboModeBoostVoucher;
    NSMutableArray *_processingLog;
    PHAActivityLog *_currentLog;
    NSMutableArray *_cachedTurboLibraryURLs;
    NSObject<OS_xpc_object> *_turboAnalysisActivity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _turboLibrariesLock;
    NSMutableSet *_pendingBackgroundLibraries;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectedClientsLock;
    BOOL _shouldDeferActivity;
    NSMutableSet *_runningActivities;
}

@property (retain) NSMutableDictionary *clientsByLibraryPath;
@property (retain) NSMutableDictionary *managersByLibraryPath;
@property unsigned char state;
@property (retain) PHAPhotoLibraryList *photoLibraryList;
@property long long countOfCoordinatorsRunningBackgroundAnalysis;
@property (retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer;
@property (retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity;
@property (retain) PHAMusicActivity *musicActivity;
@property (readonly) PHAActivityLog *activityLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unregisterAllActivities;
+ (id)bootDateForTurboLibraryRegistration;

- (void)handleOperation:(id)a0;
- (void)_registerTurboActivity;
- (void)_startBackgroundAnalysis;
- (void)notifyLibraryAvailableAtURL:(id)a0;
- (void)unregisterRunningActivity:(id)a0;
- (void)stopAllBackgroundActivities;
- (BOOL)_photoAnalysisEnabled;
- (void)shutdown;
- (void)startup;
- (void)disableTurboModeForManager:(id)a0;
- (void)dispatchAsyncToExecutiveStateQueue:(id /* block */)a0;
- (void)addProcessingActivityToStatusDictionary:(id)a0;
- (BOOL)hasConnectedClientsForManager:(id)a0;
- (BOOL)_photoAnalysCoreDuetSchedulingDisabled;
- (void)_stopAllBackgroundActivitiesWithCompletion:(id /* block */)a0;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (BOOL)registerActivityToRun:(id)a0;
- (void)triggerBackgroundActivity;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)hasPhotosConnectionForManager:(id)a0;
- (void)terminateManagerForPhotoLibraryURL:(id)a0;
- (void)dumpStatusToLog;
- (void)terminateManagerIfQuiescentAndNoConnectedClients:(id)a0;
- (void)stopAllBackgroundActivitiesWithCompletion:(id /* block */)a0;
- (id)managerForPhotoLibraryURL:(id)a0;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (id)init;
- (void)_localeDidChangeNotification:(id)a0;
- (void)removeClientHandler:(id)a0;
- (void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)a0 skipActivityStateCheck:(BOOL)a1;
- (void)checkQuiescenceForManager:(id)a0;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void)_backgroundActivityDidBegin;
- (void)addClientHandler:(id)a0 forLibraryURL:(id)a1;
- (void)stopBackgroundActivityForManager:(id)a0;
- (void)enableTurboModeForManager:(id)a0;
- (BOOL)turboIsEnabledForManager:(id)a0;
- (void)dealloc;
- (void)writeQALog:(id)a0;
- (void)setupAnalyticsEnvironment;
- (void)_registerBackgroundActivity;
- (id)clientInfoForManager:(id)a0;
- (void)_stopAllBackgroundAnalysisWithCompletion:(id /* block */)a0;
- (void)_runTurboProcessing:(id)a0;
- (void)_installBackgroundAnalysisMonitor;

@end
