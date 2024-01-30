@class NSString, NSURL, HKObserverSet, _HKMobileAssetDownloadManager, HDPeriodicActivity, MAAsset, NSMutableDictionary, NSObject, HDDaemon;
@protocol OS_dispatch_queue, HDOntologyAssetAvailabilityObserver;

@interface HDOntologyAssetManager : NSObject <HDPeriodicActivityDelegate, HDOntologyAssetProvider> {
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSObject<OS_dispatch_queue> *_downloadManagerCallbackQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
    int _notificationRegistrationToken;
    HKObserverSet<HDOntologyAssetAvailabilityObserver> *_observers;
    MAAsset *_latestOntologyAsset;
    NSMutableDictionary *_completionsByActivityName;
    HDDaemon *_daemon;
}

@property (retain, nonatomic) MAAsset *currentOntologyAsset;
@property (nonatomic) long long simulatedCompatibilityVersion;
@property (nonatomic) BOOL assetDownloadEnabled;
@property (retain, nonatomic) HDPeriodicActivity *catalogUpdatePeriodicActivity;
@property (copy, nonatomic) id /* block */ AWDMetricPosterBlock;
@property (copy, nonatomic) id /* block */ unitTesting_newMobileAssetDownloadManagerHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSURL *assetFileURL;
@property (readonly, nonatomic) long long assetFileVersion;

- (id)initWithDaemon:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)addAssetAvailabilityObserver:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (id)setUserDefaultOverrideAssetFileURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)invalidateAndWait;
- (BOOL)clearUserDefaultOverrideAssetFileURLWithError:(id *)a0;
- (void)dealloc;
- (void)removeAssetAvailabilityObserver:(id)a0;

@end
