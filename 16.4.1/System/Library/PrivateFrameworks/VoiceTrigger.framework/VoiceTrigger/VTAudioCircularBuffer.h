@class NSObject;
@protocol OS_dispatch_queue;

@interface VTAudioCircularBuffer : NSObject {
    struct unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short>>> { struct __compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short>>> { void *__value_; } __ptr_; } _vtAudioCircularBufferImpl;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long bufferLength;

- (id).cxx_construct;
- (unsigned long long)sampleCount;
- (void)saveRecordingBufferFrom:(unsigned long long)a0 to:(unsigned long long)a1 toURL:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)addSamples:(void *)a0 numSamples:(unsigned long long)a1;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long *)a0;
- (id)initWithNumChannels:(unsigned long long)a0 recordingDuration:(unsigned long long)a1 samplingRate:(unsigned long long)a2;
- (id)copySamplesFrom:(unsigned long long)a0 to:(unsigned long long)a1 withNumSamplesCopiedIn:(unsigned long long *)a2;

@end
