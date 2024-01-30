@interface _EARLanguageDetectorAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBuffer> { struct RecogAudioBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } _buffer;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)endAudio;
- (void)addAudioSampleData:(id)a0;
- (void)addAudioSamples:(const short *)a0 count:(unsigned long long)a1;
- (id)_initWithAudioBuffer:(const struct shared_ptr<quasar::RecogAudioBuffer> { struct RecogAudioBuffer *x0; struct __shared_weak_count *x1; } *)a0;

@end
