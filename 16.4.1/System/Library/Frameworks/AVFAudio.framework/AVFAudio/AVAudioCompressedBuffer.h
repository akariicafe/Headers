@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (readonly, nonatomic) unsigned int packetCapacity;
@property (nonatomic) unsigned int packetCount;
@property (readonly, nonatomic) long long maximumPacketSize;
@property (readonly, nonatomic) void *data;
@property (readonly, nonatomic) unsigned int byteCapacity;
@property (nonatomic) unsigned int byteLength;
@property (readonly, nonatomic) struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *packetDescriptions;

- (id)initWithFormat:(id)a0 packetCapacity:(unsigned int)a1 maximumPacketSize:(long long)a2;
- (id)initWithFormat:(id)a0 packetCapacity:(unsigned int)a1;

@end
