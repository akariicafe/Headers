@class NSArray;

@interface AVAudioPCMBuffer : AVAudioBuffer

@property (readonly, nonatomic) NSArray *peakPowerPerChannel;
@property (readonly, nonatomic) NSArray *averagePowerPerChannel;
@property (readonly, nonatomic) unsigned int frameCapacity;
@property (nonatomic) unsigned int frameLength;
@property (readonly, nonatomic) unsigned long long stride;
@property (readonly, nonatomic) float **floatChannelData;
@property (readonly, nonatomic) short **int16ChannelData;
@property (readonly, nonatomic) int **int32ChannelData;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPCMFormat:(id)a0 frameCapacity:(unsigned int)a1;
- (void)setByteLength:(unsigned int)a0;
- (id)calculatePower:(unsigned long long)a0;
- (void)_initChannelPtrs;
- (BOOL)appendDataFromBuffer:(id)a0;
- (BOOL)appendDataFromBuffer:(id)a0 channel:(long long)a1;
- (float)calculatePower:(unsigned long long)a0 forFloatData:(float *)a1 stride:(long long)a2 frameLength:(unsigned int)a3;
- (id)initWithPCMFormat:(id)a0 bufferListNoCopy:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 deallocator:(id /* block */)a2;
- (id)splitIntoSingleChannelBuffers;

@end
