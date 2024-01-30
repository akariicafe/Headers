@class NSString, HMCameraAudioControl, HMCameraStreamControl, HMCameraRecordingReachabilityEventManager, HMCameraClipManager, HMCameraUserSettings, HMCameraRecordingEventManager, _HMCameraProfile, HMCameraSettingsControl, HMCameraSnapshotControl;
@protocol HMCameraProfileUserSettingsDelegate;

@interface HMCameraProfile : HMAccessoryProfile <HMFLogging>

@property (readonly, nonatomic) _HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HMCameraStreamControl *streamControl;
@property (retain, nonatomic) HMCameraSnapshotControl *snapshotControl;
@property (retain, nonatomic) HMCameraSettingsControl *settingsControl;
@property (retain, nonatomic) HMCameraAudioControl *speakerControl;
@property (retain, nonatomic) HMCameraAudioControl *microphoneControl;
@property (readonly) HMCameraUserSettings *userSettings;
@property (weak) id<HMCameraProfileUserSettingsDelegate> userSettingsDelegate;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) HMCameraRecordingEventManager *recordingEventManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)services;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)initWithCameraProfile:(id)a0;

@end
