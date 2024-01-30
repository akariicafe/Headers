@class NSUUID, NSString, NSArray, HMAccessory, NSSet, _HMContext, NSObject, HMCharacteristic, _HMCameraUserSettings, HMCameraBulletinBoardSmartNotification;
@protocol OS_dispatch_queue, HMCameraUserSettingsDelegate;

@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy) _HMCameraUserSettings *cameraUserSettings;
@property (retain) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly, getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;
@property (readonly, getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (readonly, getter=activityZones) NSSet *activityZones;
@property (readonly, getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;
@property (readonly, getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;
@property (weak) id<HMCameraUserSettingsDelegate> delegate;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) HMCharacteristic *snapshotsAllowedCharacteristic;
@property (readonly, getter=areSnapshotsAllowed) BOOL snapshotsAllowed;
@property (readonly) HMCharacteristic *accessModeIndicatorEnabledCharacteristic;
@property (readonly, getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;
@property (readonly) HMCharacteristic *nightVisionModeEnabledCharacteristic;
@property (readonly, getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled;
@property (readonly) HMCharacteristic *recordingAudioEnabledCharacteristic;
@property (readonly, getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;
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
- (id)messageDestination;
- (void).cxx_destruct;
- (void)handleSettingsDidUpdateMessage:(id)a0;
- (void)configureWithAccessory:(id)a0 context:(id)a1;
- (id)_characteristicWithType:(id)a0 serviceType:(id)a1;
- (void)_mergeNewSettings:(id)a0;
- (void)_sendSettingsUpdateMessage:(id)a0 completion:(id /* block */)a1 successHandler:(id /* block */)a2;
- (void)_updateSettings:(id)a0 shouldNotifyDelegate:(BOOL)a1;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeForPresenceType:(unsigned long long)a0;
- (unsigned long long)accessModeNotAtHome;
- (id)initWithCameraUserSettings:(id)a0;
- (id)smartNotificationBulletinForSettings:(id)a0;
- (void)updateAccessMode:(unsigned long long)a0 forPresenceEventType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)updateAccessModeChangeNotificationEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateAccessModeIndicatorEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateActivityZones:(id)a0 areActivityZonesIncludedForSignificantEventDetection:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updateBulletinNotificationEnabled:(BOOL)a0 condition:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateNightVisionModeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateReachabilityEventNotificationEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateRecordingAudioEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)updateRecordingEventTriggers:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateSnapshotsAllowed:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
