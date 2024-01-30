@class HDPeriodicActivity, NSString, _HKMobileAssetDownloadManager, NSURL, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface HDRemoteFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate> {
    NSURL *_assetDirectoryOverride;
    double _retryInterval;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKMobileAssetDownloadManager *downloadManager;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity;
@property (retain, nonatomic) NSUserDefaults *unitTest_defaults;
@property (copy, nonatomic) id /* block */ unitTest_errorObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
