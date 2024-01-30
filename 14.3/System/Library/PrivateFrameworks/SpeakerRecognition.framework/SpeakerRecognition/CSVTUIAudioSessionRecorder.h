@class NSString, CSAudioPowerMeter, CSAudioRecorder, NSObject;
@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;

@interface CSVTUIAudioSessionRecorder : NSObject <CSAudioRecorderDelegate, CSVTUIAudioSession> {
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CSAudioPowerMeter *powerMeter;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRecording;
- (void)stopRecording;
- (BOOL)startRecording;
- (id)init;
- (void).cxx_destruct;
- (void)setEndpointerDelegate:(id)a0;
- (void)releaseAudioSession;
- (void)updateMeters;
- (BOOL)hasAudioRoute;
- (float)averagePower;
- (void)audioRecorderBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4;
- (void)audioRecorderBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2;
- (id)_audioRecorder;
- (unsigned long long)audioSource;
- (void)audioRecorderDidStartRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)audioRecorderDidStopRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 reason:(long long)a2;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)a0 toConfiguration:(long long)a1;
- (void)audioRecorderDisconnected:(id)a0;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectOutputAudioRoute;
- (long long)convertStopReason:(long long)a0;
- (void)_handleDidStopWithReason:(long long)a0;
- (BOOL)prepareRecord;
- (void)resetEndPointer;
- (BOOL)hasCorrectAudioRoute;

@end
