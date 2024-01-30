@interface _EARLanguageDetectorAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBuffer> { struct RecogAudioBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } _buffer;
}

- (void)endAudio;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addAudioSampleData:(id)a0;
- (void)addAudioSamples:(const short *)a0 count:(unsigned long long)a1;
- (id)_initWithAudioBuffer:(const void *)a0;

@end
