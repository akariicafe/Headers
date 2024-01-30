@class HMCameraUserNotificationSettings, NSUUID, NSSet, NSString, NSArray;

@interface _HMCameraUserSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUUID *UUID;
@property unsigned long long supportedFeatures;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property unsigned long long currentAccessMode;
@property unsigned long long recordingEventTriggers;
@property (getter=areSnapshotsAllowed) BOOL snapshotsAllowed;
@property (getter=arePeriodicSnapshotsAllowed) BOOL periodicSnapshotsAllowed;
@property (getter=isAccessModeIndicatorEnabled) BOOL accessModeIndicatorEnabled;
@property (getter=isNightVisionModeEnabled) BOOL nightVisionModeEnabled;
@property (getter=isRecordingAudioEnabled) BOOL recordingAudioEnabled;
@property (getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (copy) HMCameraUserNotificationSettings *notificationSettings;
@property (copy) NSSet *activityZones;
@property (getter=areActivityZonesIncludedForSignificantEventDetection) BOOL activityZonesIncludedForSignificantEventDetection;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
