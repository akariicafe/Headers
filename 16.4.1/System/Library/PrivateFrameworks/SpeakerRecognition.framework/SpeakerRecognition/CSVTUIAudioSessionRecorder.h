@class NSString, CSAudioPowerMeter, CSVTUIAudioRecorder, NSObject;
@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;

@interface CSVTUIAudioSessionRecorder : NSObject <CSVTUIAudioRecorderDelegate, CSVTUIAudioSession> {
    CSVTUIAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isRemoteDarwinDisplayConnected;
    BOOL _forceSupportsRemoteDarwinDisplay;
}

@property (retain, nonatomic) CSAudioPowerMeter *powerMeter;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMeters;
- (void)setEndpointerDelegate:(id)a0;
- (void)stopRecording;
- (void)audioRecorderBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4 arrivalTimestampToAudioRecorder:(unsigned long long)a5 numberOfChannels:(int)a6;
- (BOOL)hasAudioRoute;
- (BOOL)startRecording;
- (void)releaseAudioSession;
- (id)init;
- (float)averagePower;
- (void).cxx_destruct;
- (BOOL)isRecording;
- (unsigned long long)audioSource;
- (id)_audioRecorder;
- (void)audioRecorderDidStartRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)audioRecorderDidStopRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 reason:(long long)a2;
- (void)audioRecorderDisconnected:(id)a0;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)a0 toConfiguration:(long long)a1;
- (void)resetEndPointer;
- (void)_handleDidStopWithReason:(long long)a0;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectOutputAudioRoute;
- (void)_updateRemoteDarwinDisplayConnectedIfNeeded;
- (long long)convertStopReason:(long long)a0;
- (BOOL)hasCorrectAudioRoute;
- (id)initWithAudioRecorder:(id)a0 forceSupportsRemoteDarwinDisplay:(BOOL)a1;
- (BOOL)prepareRecord;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)a0 deviceUUIDs:(id)a1;

@end
