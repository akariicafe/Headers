@class CSAudioTimeConverter;

@interface CSAudioCircularBuffer : NSObject {
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> { struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short>>> { void *__value_; } __ptr_; } _csAudioCircularBufferImpl;
}

@property (nonatomic) unsigned long long bufferLength;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;

- (void).cxx_destruct;
- (unsigned long long)sampleCount;
- (void)reset;
- (id).cxx_construct;
- (void)addSamples:(const void *)a0 numSamples:(unsigned long long)a1;
- (id)initWithNumChannels:(unsigned long long)a0 recordingDuration:(float)a1 samplingRate:(float)a2 audioTimeConverter:(id)a3;
- (id)copybufferFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)initWithNumChannels:(unsigned long long)a0 recordingDuration:(float)a1 samplingRate:(float)a2;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)a0;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1 channelIdx:(unsigned long long)a2;
- (void)addSamples:(const void *)a0 numSamples:(unsigned long long)a1 atHostTime:(unsigned long long)a2;
- (id)copySamplesFromHostTime:(unsigned long long)a0;

@end
