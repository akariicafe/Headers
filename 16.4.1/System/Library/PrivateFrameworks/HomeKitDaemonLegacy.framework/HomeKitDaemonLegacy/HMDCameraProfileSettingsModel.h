@class NSSet, HMDBulletinBoardNotification, NSData, NSNumber;

@interface HMDCameraProfileSettingsModel : HMBModel

@property (copy) NSNumber *versionField;
@property (copy) NSNumber *accessModeAtHomeField;
@property (copy) NSNumber *accessModeNotAtHomeField;
@property (copy) NSNumber *recordingEventTriggersField;
@property (copy) NSNumber *accessModeIndicatorEnabledField;
@property (copy) NSNumber *nightVisionModeEnabledField;
@property (copy) NSNumber *snapshotsAllowedField;
@property (copy) NSNumber *periodicSnapshotsAllowedField;
@property (copy) NSNumber *recordingAudioEnabledField;
@property (copy) NSNumber *accessModeChangeNotificationEnabledField;
@property (copy) NSNumber *reachabilityEventNotificationEnabledField;
@property (copy) NSData *smartBulletinBoardNotificationDataField;
@property (copy) NSData *activityZonesField;
@property (copy) NSNumber *activityZonesIncludedForSignificantEventDetectionField;
@property unsigned long long currentAccessMode;
@property (readonly) BOOL hasAnyNotificationFieldsSet;
@property (readonly) unsigned long long mostPrivateAccessMode;
@property long long version;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property unsigned long long recordingEventTriggers;
@property BOOL accessModeIndicatorEnabled;
@property BOOL nightVisionModeEnabled;
@property BOOL snapshotsAllowed;
@property BOOL periodicSnapshotsAllowed;
@property BOOL recordingAudioEnabled;
@property BOOL cameraManuallyDisabled;
@property (retain) NSSet *activityZones;
@property BOOL activityZonesIncludedForSignificantEventDetection;
@property (readonly) BOOL accessModeChangeNotificationEnabled;
@property (readonly) HMDBulletinBoardNotification *smartBulletinBoardNotification;
@property (readonly) BOOL reachabilityEventNotificationEnabled;

+ (id)hmbProperties;

@end
