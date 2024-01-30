@class NSArray, _HMCameraAudioControl, HMCameraRecordingReachabilityEventManager, HMCameraRecordingEventManager, HMCameraClipManager, _HMCameraStreamControl, HMCameraUserSettings, _HMCameraSettingsControl, _HMCameraSnapshotControl;

@interface _HMCameraProfile : _HMAccessoryProfile

@property (readonly, copy) NSArray *controls;
@property (retain) HMCameraUserSettings *userSettings;
@property (retain) HMCameraRecordingEventManager *recordingEventManager;
@property (retain) HMCameraClipManager *clipManager;
@property (retain) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) _HMCameraStreamControl *streamControlInternal;
@property (readonly) _HMCameraSnapshotControl *snapshotControlInternal;
@property (readonly) _HMCameraSettingsControl *settingsControl;
@property (readonly) _HMCameraAudioControl *speakerControl;
@property (readonly) _HMCameraAudioControl *microphoneControl;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (id)initWithUUID:(id)a0 services:(id)a1;
- (void)_createControls:(id)a0;
- (void)addUserSettings:(id)a0;

@end
