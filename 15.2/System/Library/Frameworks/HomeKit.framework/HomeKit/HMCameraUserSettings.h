@class NSUUID, NSString, NSArray, HMAccessory, NSSet, HMFUnfairLock, _HMContext, NSObject, _HMCameraUserSettings, HMCameraBulletinBoardSmartNotification;
@protocol OS_dispatch_queue, HMCameraUserSettingsDelegate;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject> {
    HMFUnfairLock *_lock;
}

@property (copy) _HMCameraUserSettings *cameraUserSettings;
@property (retain) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly, getter=areSnapshotsAllowed) BOOL snapshotsAllowed;
@property (readonly, getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;
@property (readonly, getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled;
@property (readonly, getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;
@property (readonly, getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;
@property (readonly, getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (readonly, getter=activityZones) NSSet *activityZones;
@property (readonly, getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;
@property (readonly, getter=isReachabilityChangeNotificationEnabled) BOOL reachabilityChangeNotificationEnabled;
@property (readonly, getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;
@property (weak) id<HMCameraUserSettingsDelegate> delegate;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)messageDestination;
- (id)initWithCameraUserSettings:(id)a0;
- (void)configureWithAccessory:(id)a0 context:(id)a1;
- (unsigned long long)accessModeForPresenceType:(unsigned long long)a0;
- (id)smartNotificationBulletinForSettings:(id)a0;
- (void)updateAccessMode:(unsigned long long)a0 forPresenceEventType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)updateRecordingEventTriggers:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateAccessModeIndicatorEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateSnapshotsAllowed:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateNightVisionModeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateRecordingAudioEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateAccessModeChangeNotificationEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateActivityZones:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateActivityZones:(id)a0 areActivityZonesIncludedForSignificantEventDetection:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updateReachabilityChangeNotificationEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateReachabilityEventNotificationEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)handleSettingsDidUpdateMessage:(id)a0;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeNotAtHome;
- (void)_updateSettings:(id)a0 shouldNotifyDelegate:(BOOL)a1 mergeOperations:(id)a2;
- (void)_notifyDelegatesOfUpdatedSettings;
- (void)_mergeNewSettings:(id)a0 operations:(id)a1;

@end
