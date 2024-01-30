@interface CSAudioCircularBuffer : NSObject {
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > { struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > { struct CSAudioCircularBufferImpl<unsigned short> *__value_; } __ptr_; } _csAudioCircularBufferImpl;
}

@property (nonatomic) unsigned long long bufferLength;

+ (id)createAudioCircularBufferWithDefaultSettings;

- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
- (unsigned long long)sampleCount;
- (void)addSamples:(const void *)a0 numSamples:(unsigned long long)a1;
- (id)initWithNumChannels:(unsigned long long)a0 recordingDuration:(float)a1 samplingRate:(float)a2;
- (id)copybufferFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)a0;
- (void)addSamples:(const void *)a0 numSamples:(unsigned long long)a1 atHostTime:(unsigned long long)a2;
- (id)copySamplesFromHostTime:(unsigned long long)a0;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1 channelIdx:(unsigned long long)a2;

@end
