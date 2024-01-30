@class NSMutableArray;

@interface HMDCameraAccessorySettingsConfiguration : HMFObject

@property (retain, nonatomic) NSMutableArray *numPointsInActivityZones;
@property (readonly) BOOL isRecordingCapable;
@property (readonly) BOOL isRecordingEnabled;
@property (readonly) BOOL isRecordingAudioEnabled;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly) unsigned long long numActivityZones;
@property (readonly) BOOL inclusionZone;
@property (readonly) BOOL smartBulletinBoardNotificationEnabled;
@property (readonly) BOOL reachabilityNotificationEnabled;

- (void).cxx_destruct;
- (id)initWithCameraAccessory:(id)a0;

@end
