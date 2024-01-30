@class NSString, NSURL, HDDaemon, _HKMobileAssetDownloadManager, HDPeriodicActivity, NSMutableDictionary, MAAsset, NSObject;
@protocol OS_dispatch_queue;

@interface HDOntologyAssetManager : NSObject <HDPeriodicActivityDelegate> {
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSObject<OS_dispatch_queue> *_downloadManagerCallbackQueue;
    NSObject<OS_dispatch_queue> *_handlerInvocationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    int _notificationRegistrationToken;
    NSMutableDictionary *_registeredHandlers;
}

@property (readonly, nonatomic) MAAsset *latestOntologyAsset;
@property (readonly, nonatomic) _HKMobileAssetDownloadManager *assetDownloadManager;
@property (readonly, copy, nonatomic) NSMutableDictionary *completionsByActivityName;
@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (retain, nonatomic) MAAsset *currentOntologyAsset;
@property (nonatomic) long long simulatedCompatibilityVersion;
@property (nonatomic) BOOL assetDownloadEnabled;
@property (retain, nonatomic) HDPeriodicActivity *catalogUpdatePeriodicActivity;
@property (copy, nonatomic) id /* block */ AWDMetricPosterBlock;
@property (readonly, copy, nonatomic) NSURL *assetFileURL;
@property (readonly, nonatomic) long long assetFileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateAndWait;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)unregisterHandlerForToken:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDaemon:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (id)registerAssetAvailabilityHandler:(id /* block */)a0;
- (id)setUserDefaultOverrideAssetFileURL:(id)a0 error:(id *)a1;
- (BOOL)clearUserDefaultOverrideAssetFileURLWithError:(id *)a0;
- (id)_newAssetDownloadManager;
- (id)_userDefaultOverrideAssetFileURL;
- (id)_localFileURLForAsset:(id)a0;
- (void)_registerNotifyDispatchHandler;
- (void)_lock_schedulePeriodicActivity;
- (long long)_lock_assetAvailability;
- (void)_updateAssetCatalogForReason:(unsigned long long)a0;
- (void)_lock_unschedulePeriodicActivity;
- (double)_catalogUpdateIntervalOverride;
- (id)_newPeriodicActivityWithName:(id)a0;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidComplete:(id)a0;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidFail:(id)a0;
- (double)_normalIntervalForActivityNamed:(id)a0;
- (double)_retryIntervalForActivityNamed:(id)a0;
- (void)_downloadManagerCallbackQueue_assetDownloadDidComplete:(id)a0;
- (void)_downloadManagerCallbackQueue_assetDownloadDidFail:(id)a0;
- (long long)_effectiveSystemCompatibilityVersion;
- (void)_lock_invokeCompletionForPeriodicActivityName:(id)a0 withResult:(long long)a1 error:(id)a2;
- (void)_postAWDMetricEventWithAssetDownloadPhase:(int)a0;
- (id)_bestAssetInArray:(id)a0;
- (BOOL)_lock_saveContentInfoForAsset:(id)a0;
- (void)_lock_invokeAvailabilityHandlers;
- (void)_startAssetDownload;
- (BOOL)_ignoreAssetEqualityComparison;
- (id)_lastModifiedDateForFileAtURL:(id)a0;
- (id)_lock_currentOntologyAssetFileURL;
- (long long)_hoursSinceLastModifiedForFileAtURL:(id)a0;

@end
