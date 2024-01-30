@class CSAudioRecorder, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSFallbackAudioSessionReleaseProvider : NSObject <CSAudioRecorderDelegate, CSFallbackAudioSessionReleaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAudioRecorder *audioRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioRecorderWillBeDestroyed:(id)a0;
- (void)audioRecorderBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4 arrivalTimestampToAudioRecorder:(unsigned long long)a5 numberOfChannels:(int)a6;
- (BOOL)fallbackDeactivateAudioSession:(unsigned long long)a0 error:(id *)a1;
- (void)audioRecorderBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2;
- (void).cxx_destruct;
- (id)initWithAudioRecorder:(id)a0;

@end
