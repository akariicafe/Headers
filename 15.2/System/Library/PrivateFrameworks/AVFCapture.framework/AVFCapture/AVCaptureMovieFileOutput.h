@class NSArray, AVCaptureMovieFileOutputInternal;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
    AVCaptureMovieFileOutputInternal *_internal;
}

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } movieFragmentInterval;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property (nonatomic, getter=isPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled) BOOL primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
@property (readonly, nonatomic) long long primaryConstituentDeviceSwitchingBehaviorForRecording;
@property (readonly, nonatomic) unsigned long long primaryConstituentDeviceRestrictedSwitchingBehaviorConditionsForRecording;

+ (long long)uniqueID;
+ (void)initialize;
+ (id)new;
+ (BOOL)updateMovieMetadataInFile:(id)a0 withMetadata:(id)a1 error:(id *)a2;
+ (BOOL)consolidateMovieFragmentsInFile:(id)a0 error:(id *)a1;

- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)connectionMediaTypes;
- (void)removeConnection:(id)a0;
- (id)addConnection:(id)a0 error:(id *)a1;
- (void)stopRecording;
- (BOOL)canAddConnection:(id)a0 failureReason:(id *)a1;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)resumeRecording;
- (void)pauseRecording;
- (BOOL)isRecording;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (id)init;
- (id)outputFileURL;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (void)_updateDepthDataDeliverySupportedForSourceDevice:(id)a0;
- (void)dealloc;
- (void)_updateSupportedPropertiesForSourceDevice:(id)a0;
- (BOOL)isRecordingPaused;
- (struct CGSize { double x0; double x1; })outputSizeForSourceFormat:(id)a0;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)a0;
- (id)bravoCameraSelectionBehaviorForRecording;
- (BOOL)_recordingInProgress;
- (id)outputSettingsForConnection:(id)a0;
- (BOOL)isDepthCaptureEnabled;
- (void)_startRecording:(id)a0;
- (int)_stopRecording;
- (void)setPrimaryConstituentDeviceSwitchingBehaviorForRecording:(long long)a0 restrictedSwitchingBehaviorConditions:(unsigned long long)a1;
- (void)_propagateBravoSwitchingBehaviorWhenRecording;
- (id)supportedOutputSettingsKeysForConnection:(id)a0;
- (void)handleDidStopRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1 demoof:(BOOL)a2 addMetadata:(BOOL)a3;
- (void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)a0 withPayload:(id)a1 demoof:(BOOL)a2 addMetadata:(BOOL)a3;
- (id)_avErrorUserInfoDictionaryForError:(int)a0 wrapper:(id)a1 payload:(id)a2;
- (void)_removeRecordingDelegateWrapper:(id)a0;
- (void)handleDidStartRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidPauseRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (void)handleDidResumeRecordingNotificationForWrapper:(id)a0 withPayload:(id)a1;
- (BOOL)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)a0;
- (void)_updateAvailableVideoCodecTypesForSourceDevice:(id)a0;
- (void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)a0;
- (void)setSendsLastVideoPreviewFrame:(BOOL)a0;
- (BOOL)sendsLastVideoPreviewFrame;
- (void)setOutputSettings:(id)a0 forConnection:(id)a1;
- (void)setRecordsVideoOrientationAndMirroringChanges:(BOOL)a0 asMetadataTrackForConnection:(id)a1;
- (void)startRecordingMovieWithSettings:(id)a0 delegate:(id)a1;
- (void)setConnectionsActive:(BOOL)a0;
- (void)setDepthCaptureEnabled:(BOOL)a0;

@end
