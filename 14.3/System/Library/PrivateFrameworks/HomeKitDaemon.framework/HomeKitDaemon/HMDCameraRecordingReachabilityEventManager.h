@class NSDate, HMFMessageDispatcher, NSObject, HMBCloudZone, HMDCameraRecordingReachabilityEventModel, HMBLocalZone, NSString, NSHashTable, HMDHAPAccessory, _HMCameraUserSettings, HMDBulletinBoard, HMDLogEventDispatcher, HMFTimer, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingReachabilityEventManager : HMFObject <HMBLocalZoneModelObserver, HMFTimerDelegate, HMFMessageReceiver, HMFLogging, HMDCameraClipManagerDelegate, HMFNetMonitorDelegate>

@property (readonly, weak) HMDHAPAccessory *hapAccessory;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly) double initialReachabilityTimeout;
@property (readonly) double reachabilityChangeReachableDebounceTimeout;
@property (readonly) double reachabilityChangeUnreachableDebounceTimeout;
@property (retain) HMFMessageDispatcher *messageDispatcher;
@property (retain) NSHashTable *clientConnections;
@property (retain) HMDLogEventDispatcher *logEventDispatcher;
@property BOOL lastKnownCameraReachability;
@property BOOL currentCameraReachability;
@property (nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) BOOL currentDeviceConfirmedPrimaryResident;
@property (nonatomic, getter=isCurrentDeviceConnectedToNetwork) BOOL currentDeviceConnectedToNetwork;
@property unsigned long long reachabilityChangeDebounceCount;
@property (copy) _HMCameraUserSettings *currentSettings;
@property (copy) HMDCameraRecordingReachabilityEventModel *mostRecentReachabilityEventModel;
@property (retain) HMBLocalZone *localZone;
@property (retain) HMBCloudZone *cloudZone;
@property (retain) HMFTimer *initialReachabilityTimer;
@property (retain) HMFTimer *reachabilityChangeDebounceTimer;
@property (retain) NSDate *reachabilityChangeDebounceStartDate;
@property (copy) id /* block */ initialReachabilityTimerFactory;
@property (copy) id /* block */ reachabilityChangeDebounceTimerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)clipManagerDidStart:(id)a0;
- (void)clipManagerDidStop:(id)a0;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleAccessoryDisconnected:(id)a0;
- (void)handleResidentDeviceUpdated:(id)a0;
- (id)initWithHAPAccessory:(id)a0 workQueue:(id)a1;
- (void)networkMonitorIsReachable:(id)a0;
- (void)networkMonitorIsUnreachable:(id)a0;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 identifier:(id)a2 bulletinBoard:(id)a3 logEventDispatcher:(id)a4;
- (void)handleRemoteCameraReachabilityChange:(id)a0;
- (void)handleFetchEventsMessage:(id)a0;
- (void)handleFetchCountOfEventsMessage:(id)a0;
- (void)handleSubscribeMessage:(id)a0;
- (void)handleUnsubscribeMessage:(id)a0;
- (void)handlePerformCloudPullMessage:(id)a0;
- (void)handleDeleteAllEventsMessage:(id)a0;
- (void)handleCameraProfileSettingsDidChange:(id)a0;
- (id)fetchReachabilityEventsWithDateInterval:(id)a0;
- (void)handleHAPNotificationPingSucceededAccessoryReachable:(id)a0;
- (void)handleHAPNotificationPingFailedAccessoryNotReachable:(id)a0;
- (void)startInitialReachabilityTimer;
- (void)startReachabilityChangeDebounceTimerWithReachability:(BOOL)a0;
- (id)performCloudPullWithLabel:(id)a0;
- (BOOL)shouldAddInitialReachabilityEventForCurrentCameraReachability:(BOOL)a0;
- (void)addCameraReachabilityEventForCurrentCameraReachability:(BOOL)a0 dateOfOccurrence:(id)a1;
- (id)reachabilityEventModelForCurrentCameraReachability:(BOOL)a0 dateOfOccurrence:(id)a1;
- (void)notifySubscribersOfRemoteCameraReachabilityEvent;
- (void)submitLogEventWithCurrentModel:(id)a0;
- (void)handleUpdatedCameraReachability:(BOOL)a0;
- (void)notifyTransportOfUpdatedEvents:(id)a0 removedEventUUIDs:(id)a1;
- (void)cleanUpEvents;
- (void)handleInitialCameraReachability;
- (void)configureWithMessageDispatcher:(id)a0 isCurrentDeviceConfirmedPrimaryResident:(BOOL)a1;

@end
