@class PFSerialQueue, NSString, PHASleepWakeMonitor, PHAPhotoLibraryList, NSMutableDictionary, PHAActivityLog, NSMutableSet, NSObject, NSMutableArray;
@protocol PFDTransactionDispatchQueue, OS_xpc_object, OS_voucher, OS_dispatch_source;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, NSXPCListenerDelegate> {
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
}

@property (retain) NSMutableSet *clients;
@property (retain) NSMutableDictionary *managersByLibraryPath;
@property unsigned char state;
@property (retain) PHAPhotoLibraryList *photoLibraryList;
@property (retain) PHASleepWakeMonitor *sleepWakeMonitor;
@property long long countOfCoordinatorsRunningBackgroundAnalysis;
@property (retain) NSObject<OS_dispatch_source> *backgroundAnalysisMonitorTimer;
@property (retain) NSObject<OS_xpc_object> *backgroundAnalysisActivity;
@property (readonly) PHAActivityLog *activityLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unregisterBackgroundActivities;
+ (id)bootDateForTurboLibraryRegistration;

- (void)shutdown;
- (void)stopAllBackgroundActivities;
- (void)dumpStatusToLog;
- (id)managerForPhotoLibraryURL:(id)a0;
- (id)init;
- (void)_backgroundActivityDidBegin;
- (void).cxx_destruct;
- (void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)a0 skipActivityStateCheck:(BOOL)a1;
- (void)terminateManagerForPhotoLibraryURL:(id)a0;
- (void)dealloc;
- (id)clientInfoForManager:(id)a0;
- (void)dispatchAsyncToExecutiveStateQueue:(id /* block */)a0;
- (void)_registerCuratedLibraryActivity;
- (void)stopBackgroundActivityForManager:(id)a0;
- (BOOL)turboIsEnabledForManager:(id)a0;
- (void)_localeDidChangeNotification:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)triggerBackgroundActivity;
- (void)terminateManagerIfQuiescentAndNoConnectedClients:(id)a0;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)handleOperation:(id)a0;
- (void)writeQALog:(id)a0;
- (BOOL)_photoAnalysisEnabled;
- (void)_registerBackgroundActivity;
- (void)removeClientHandler:(id)a0;
- (void)_runTurboProcessing:(id)a0;
- (void)setupAnalyticsEnvironment;
- (void)_stopAllBackgroundAnalysisWithCompletion:(id /* block */)a0;
- (BOOL)_photoAnalysCoreDuetSchedulingDisabled;
- (void)disableTurboModeForManager:(id)a0;
- (void)_registerTurboActivity;
- (BOOL)hasPhotosConnectionForManager:(id)a0;
- (id)statusAsDictionary;
- (BOOL)hasConnectedClientsForManager:(id)a0;
- (void)addProcessingActivityToStatusDictionary:(id)a0;
- (void)startup;
- (void)photoLibraryDidBecomeUnavailable:(id)a0;
- (void)checkQuiescenceForManager:(id)a0;
- (void)notifyLibraryAvailableAtURL:(id)a0;
- (void)_startBackgroundAnalysis;
- (void)enableTurboModeForManager:(id)a0;
- (void)_installBackgroundAnalysisMonitor;

@end
