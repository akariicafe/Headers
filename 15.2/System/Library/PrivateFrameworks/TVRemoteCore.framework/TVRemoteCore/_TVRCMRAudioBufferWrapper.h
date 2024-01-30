@class NSString;

@interface _TVRCMRAudioBufferWrapper : NSObject <_TVRCAudioBuffer> {
    void *_buffer;
}

@property (nonatomic) unsigned long long packetCount;
@property (nonatomic) double sampleRate;
@property (nonatomic) double timestamp;
@property (nonatomic) float gain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)audioBuffer;
- (void)dealloc;
- (void)writeAudioData:(void *)a0 length:(unsigned long long)a1;
- (void)writePacketDescriptions:(void *)a0 length:(unsigned long long)a1;
- (id)initWithSettings:(id)a0 packetCapacity:(unsigned long long)a1 maxPacketSize:(unsigned long long)a2;

@end
