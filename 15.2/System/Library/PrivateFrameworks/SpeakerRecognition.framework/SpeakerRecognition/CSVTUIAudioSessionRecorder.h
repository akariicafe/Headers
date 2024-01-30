@class NSString, CSAudioPowerMeter, CSVTUIAudioRecorder, NSObject;
@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;

@interface CSVTUIAudioSessionRecorder : NSObject <CSVTUIAudioRecorderDelegate, CSVTUIAudioSession> {
    CSVTUIAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CSAudioPowerMeter *powerMeter;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMeters;
- (void)stopRecording;
- (BOOL)startRecording;
- (void)audioRecorderBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4 arrivalTimestampToAudioRecorder:(unsigned long long)a5 numberOfChannels:(int)a6;
- (BOOL)isRecording;
- (float)averagePower;
- (void)setEndpointerDelegate:(id)a0;
- (void)releaseAudioSession;
- (BOOL)hasAudioRoute;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)audioSource;
- (id)_audioRecorder;
- (void)audioRecorderDidStartRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)audioRecorderDidStopRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 reason:(long long)a2;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)a0 toConfiguration:(long long)a1;
- (void)audioRecorderDisconnected:(id)a0;
- (BOOL)prepareRecord;
- (BOOL)hasCorrectAudioRoute;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectOutputAudioRoute;
- (long long)convertStopReason:(long long)a0;
- (void)_handleDidStopWithReason:(long long)a0;
- (void)resetEndPointer;

@end
