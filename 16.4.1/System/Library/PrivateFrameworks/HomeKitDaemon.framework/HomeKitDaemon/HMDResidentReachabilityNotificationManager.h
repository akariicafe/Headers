@class HMFTimer, HMDResidentReachabilityContext, NSString, HMDHome, HMDRemoteDeviceMonitor, HMDBulletinBoard, NSObject;
@protocol OS_dispatch_queue;

@interface HMDResidentReachabilityNotificationManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDRemoteDeviceMonitor *deviceMonitor;
@property (readonly) BOOL hasReachableResidentSupportingCameraRecording;
@property (readonly) BOOL anyEnabledResidentSupportsCameraRecordingReachabilityNotifications;
@property (readonly, getter=isReachabilityEventNotificationEnabledForAnyCamera) BOOL reachabilityEventNotificationEnabledForAnyCamera;
@property (readonly) BOOL hasMultipleResidentsSupportingCameraRecording;
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

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)shouldPostReachableNotification;
- (void)_evaluateReachabilityBulletin;
- (void)_handleCameraProfileSettingsDidChange:(id)a0;
- (void)_handleCameraProfileUnconfigured:(id)a0;
- (void)_handleNetworkReachabilityChange:(id)a0;
- (void)_handleResidentAdded:(id)a0;
- (void)_handleResidentRemoved:(id)a0;
- (void)_handleResidentUpdated:(id)a0;
- (void)_startDebounceTimer;
- (void)configureWithHome:(id)a0 deviceMonitor:(id)a1;
- (void)configureWithHome:(id)a0 deviceMonitor:(id)a1 notificationCenter:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithResidentReachabilityContext:(id)a0 workQueue:(id)a1;
- (id)initWithResidentReachabilityContext:(id)a0 workQueue:(id)a1 timerFactory:(id /* block */)a2 bulletinBoard:(id)a3;
- (BOOL)shouldPostUnreachableNotification;
- (void)updateNotificationEnabled;

@end
