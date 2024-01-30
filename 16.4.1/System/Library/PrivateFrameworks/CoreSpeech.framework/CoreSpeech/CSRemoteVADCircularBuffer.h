@interface CSRemoteVADCircularBuffer : NSObject {
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned char>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> { struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned char> *, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned char>>> { void *__value_; } __ptr_; } _remoteVADCircularBufferImpl;
    int _audioSamplesPerRemoteVAD;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long beginSampleCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (void)addSamples:(const void *)a0 numSamples:(unsigned long long)a1;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)copySamplesFromAudioSampleCount:(unsigned long long)a0 toAudioSampleCount:(unsigned long long)a1;
- (id)initWithRecordingDuration:(float)a0 audioSamplesPerRemoteVAD:(int)a1 audioSampleRate:(float)a2;
- (unsigned long long)remoteVADSampleCount;

@end
