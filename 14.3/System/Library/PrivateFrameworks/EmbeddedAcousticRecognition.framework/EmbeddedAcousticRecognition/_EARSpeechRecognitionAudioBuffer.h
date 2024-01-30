@class _EARSpeechRecognizer, NSObject;
@protocol OS_dispatch_queue;

@interface _EARSpeechRecognitionAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase *__ptr_; struct __shared_weak_count *__cntrl_; } _buffer;
    NSObject<OS_dispatch_queue> *_queue;
    _EARSpeechRecognizer *_speechRecognizer;
    BOOL _cancelled;
    BOOL _ended;
}

@property (readonly, nonatomic) double bufferedAudioDuration;

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)endAudio;
- (void)cancelRecognition;
- (void)triggerServerSideEndPointer;
- (void)addAudioSampleData:(id)a0;
- (void)addAudioSamples:(const short *)a0 count:(unsigned long long)a1;
- (void)_detachFromRecognizer;
- (id)_initWithAudioBuffer:(struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase *x0; struct __shared_weak_count *x1; })a0 speechRecognizer:(id)a1;
- (void)_setUnderlyingBuffer:(struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase *x0; struct __shared_weak_count *x1; })a0;

@end
