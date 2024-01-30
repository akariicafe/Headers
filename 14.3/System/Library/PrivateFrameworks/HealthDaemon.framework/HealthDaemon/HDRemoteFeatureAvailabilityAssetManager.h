@class HDPeriodicActivity, NSString, NSURL, _HKMobileAssetDownloadManager, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface HDRemoteFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate>

@property (readonly, nonatomic) NSURL *assetDirectoryOverride;
@property (readonly, nonatomic) double retryInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKMobileAssetDownloadManager *downloadManager;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity;
@property (retain, nonatomic) NSUserDefaults *unitTest_defaults;
@property (copy, nonatomic) id /* block */ unitTest_errorObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isInTestMode;

- (id)initWithProfile:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)_updateMobileAssetsDownloadedMetricDefaultsValues;
- (void).cxx_destruct;
- (void)_queue_downloadDidCompleteWithError:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)_queue_downloadDidCompleteWithAssets:(id)a0;
- (void)_configureDownloadManager;

@end
