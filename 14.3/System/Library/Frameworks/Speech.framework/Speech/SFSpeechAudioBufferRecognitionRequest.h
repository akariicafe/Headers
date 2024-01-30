@class NSObject, AVAudioConverter, NSMutableArray, AVAudioFormat;
@protocol OS_dispatch_queue, SFSpeechRecognitionBufferDelegate;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {
    id<SFSpeechRecognitionBufferDelegate> _bufferDelegate;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    AVAudioConverter *_converter;
    BOOL _audioEnded;
}

@property (readonly, nonatomic) AVAudioFormat *nativeAudioFormat;

- (id)init;
- (void).cxx_destruct;
- (void)_appendAudioPCMBuffer:(id)a0;
- (void)_convertAndFeedPCMBuffer:(id)a0;
- (void)_drainAndClearAudioConverter;
- (void)appendAudioPCMBuffer:(id)a0;
- (void)endAudio;
- (id)_startedConnectionWithLanguageCode:(id)a0 delegate:(id)a1 taskHint:(long long)a2 requestIdentifier:(id)a3;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_endAudio;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
