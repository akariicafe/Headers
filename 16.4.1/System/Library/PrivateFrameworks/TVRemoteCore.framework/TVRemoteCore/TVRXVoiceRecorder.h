@class NSString, AVAudioFormat, AVVoiceController;
@protocol TVRXVoiceRecorderDelegate;

@interface TVRXVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate> {
    long long _state;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioFormat;
    AVAudioFormat *_avAudioFormat;
    AVVoiceController *_voiceController;
}

@property (weak, nonatomic) id<TVRXVoiceRecorderDelegate> delegate;
@property (nonatomic) BOOL recordsAutomatically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)voiceControllerDidStopRecording:(id)a0 forReason:(long long)a1;
- (void)voiceControllerEncoderErrorDidOccur:(id)a0 error:(id)a1;
- (void)voiceControllerRecordBufferAvailable:(id)a0 buffer:(id)a1;
- (void)_processAudioBufferOnMainQueue:(id)a0;
- (id)audioFormatSettings;

@end
