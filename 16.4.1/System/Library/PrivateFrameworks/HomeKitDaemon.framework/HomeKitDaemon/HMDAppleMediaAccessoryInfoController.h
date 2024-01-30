@class HMFWiFiNetworkInfo, NSNotificationCenter, HMFWiFiManager, NSObject;
@protocol OS_dispatch_queue, HMDAppleMediaAccessoryInfoControllerDataSource, HMDAppleMediaAccessoryInfoControllerDelegate;

@interface HMDAppleMediaAccessoryInfoController : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak) id<HMDAppleMediaAccessoryInfoControllerDataSource> dataSource;
@property (readonly, weak) id<HMDAppleMediaAccessoryInfoControllerDelegate> delegate;
@property (retain) NSNotificationCenter *notificationCenter;
@property (retain) HMFWiFiNetworkInfo *lastWifiNetworkInfo;
@property (retain) HMFWiFiManager *wifiManager;

+ (id)logCategory;

- (void)configure;
- (void)handleCurrentNetworkChangedNotification:(id)a0;
- (void).cxx_destruct;
- (void)_notifyDelegateWifiInfoUpdated:(id)a0;
- (void)_postUpdateSoftwareVersionIfDifferent:(id)a0;
- (void)_postUpdateWifiNetworkInfoIfDifferent:(id)a0;
- (id)currentWifiNetworkInfo;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 delegate:(id)a2 notificationCenter:(id)a3 wifiManager:(id)a4;

@end
