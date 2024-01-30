@class HMFTimer, HMDResidentReachabilityContext, NSString, HMDHome, HMDRemoteDeviceMonitor, HMDBulletinBoard, NSObject;
@protocol OS_dispatch_queue;

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) BOOL hasReachableResidentSupportingCameraRecording;
@property (readonly) BOOL hasCameraConfiguredForRecording;
@property (readonly) BOOL anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
@property (readonly) BOOL isCameraReachabilityNotificationDisabledForAllSettings;
@property (readonly, copy) id /* block */ timerFactory;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) HMFTimer *notificationDebounceTimer;
@property (retain) HMDResidentReachabilityContext *reachabilityContext;
@property BOOL notificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)initWithResidentReachabilityContext:(id)a0 workQueue:(id)a1;
- (void)configureWithHome:(id)a0 deviceMonitor:(id)a1;
- (void)_startDebounceTimer;
- (id)initWithResidentReachabilityContext:(id)a0 workQueue:(id)a1 timerFactory:(id /* block */)a2 bulletinBoard:(id)a3;
- (void)configureWithHome:(id)a0 deviceMonitor:(id)a1 notificationCenter:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleCameraProfileSettingsDidChange:(id)a0;
- (void)_handleCameraProfileUnconfigured:(id)a0;
- (void)_handleResidentUpdated:(id)a0;
- (void)_handleResidentAdded:(id)a0;
- (void)_handleResidentRemoved:(id)a0;
- (void)_handleNetworkReachabilityChange:(id)a0;
- (void)updateNotificationEnabled;
- (void)_evaluateReachabilityBulletin;
- (BOOL)shouldPostReachableNotification;
- (BOOL)shouldPostUnreachableNotification;

@end
