@class NSNumber, NSDateFormatter, NSString, NSURL, NSObject, AVAudioRecorder;
@protocol OS_dispatch_queue, HFAudioRecorderDelegate, OS_dispatch_source;

@interface HFAudioRecorder : NSObject <AVAudioRecorderDelegate>

@property (weak, nonatomic) id<HFAudioRecorderDelegate> audioRecorderDelegate;
@property (nonatomic, getter=isRecording) BOOL recording;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerMeteringTimer;
@property (nonatomic, getter=isAudioSessionActive) BOOL audioSessionIsActive;
@property (retain, nonatomic) AVAudioRecorder *audioRecorder;
@property (nonatomic) double recordingStartTimeInterval;
@property (nonatomic) double recordingStopTimeInterval;
@property (nonatomic) struct OpaqueAudioFileID { } *recordingAudiofileID;
@property (retain, nonatomic) NSURL *recordingAudiofileURL;
@property (nonatomic) long long totalPacketsCount;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) unsigned int soundIDForRecordBegin;
@property (nonatomic) unsigned int soundIDForRecordEnd;
@property (nonatomic) unsigned long long recordingStopSource;
@property (retain, nonatomic) NSNumber *routeChangeReason;
@property (nonatomic) double recordingDurationLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecording;
- (void)startRecording;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)_setupAudioFileForRecording;
- (id)_audioRecorderSettings;
- (id)initWithAudioRecorderDelegate:(id)a0;
- (void)_deactivateRecordingAudioSession:(BOOL)a0;
- (void)_activateRecordingAudioSession;
- (void)_startPowerMeteringTimer;
- (void)_playStartRecordingToneWithCompletion:(id /* block */)a0;
- (void)_playStopRecordingToneWithCompletion:(id /* block */)a0;
- (void)_stopPowerMeteringTimer;
- (BOOL)_isPowerMeteringTimerValid;
- (id)initWithActivationMode:(long long)a0 delegate:(id)a1;
- (void)prepareRecording;
- (void)audioRecorderDidFinishRecording:(id)a0 successfully:(BOOL)a1;
- (void)audioSessionDidInterrupt:(id)a0;
- (void)audioSessionRouteChanged:(id)a0;
- (void)_deregisterAudioSessionObservers;
- (void)_registerAudioSessionObservers;
- (void)audioSessionMediaServicesWereLost:(id)a0;
- (void)audioSessionMediaServicesWereReset:(id)a0;
- (double)currentRecordedDuration;
- (void)playAlertSoundForType:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)_createSystemSounds;

@end
