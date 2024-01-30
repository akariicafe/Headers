@class NSUUID, HMCameraUserNotificationSettings, NSSet;

@interface _HMMutableCameraUserSettings : _HMCameraUserSettings

@property (copy) NSUUID *UUID;
@property unsigned long long supportedFeatures;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property unsigned long long currentAccessMode;
@property unsigned long long recordingEventTriggers;
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (copy) HMCameraUserNotificationSettings *notificationSettings;
@property (copy) NSSet *activityZones;
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
