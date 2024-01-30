@class NSDictionary, AVAudioCompressedBuffer;

@interface MRAudioBuffer : NSObject

@property (readonly, nonatomic) AVAudioCompressedBuffer *buffer;
@property (readonly, nonatomic) NSDictionary *formatSettings;

- (void).cxx_destruct;
- (id)initWithFormatSettings:(id)a0 packetCapacity:(unsigned long long)a1 maximumPacketSize:(unsigned long long)a2;

@end
