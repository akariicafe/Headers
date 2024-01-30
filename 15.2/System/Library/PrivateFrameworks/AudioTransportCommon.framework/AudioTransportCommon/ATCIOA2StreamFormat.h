@interface ATCIOA2StreamFormat : NSObject <NSCopying>

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int formatID;
@property (nonatomic) unsigned int formatFlags;
@property (nonatomic) unsigned int bytesPerPacket;
@property (nonatomic) unsigned int framesPerPacket;
@property (nonatomic) unsigned int bytesPerFrame;
@property (nonatomic) unsigned int channelsPerFrame;
@property (nonatomic) unsigned int bitsPerChannel;

+ (id)aeaStreamFormatWithDictionary:(id)a0;
+ (id)aeaStreamFormatsWithRangedDictionary:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioStreamBasicDescription;
- (id)initWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (unsigned int)framesToBytes:(unsigned int)a0;
- (id)initWithSampleRate:(double)a0 numChannels:(unsigned int)a1 commonPCMFormat:(unsigned int)a2 isInterleaved:(BOOL)a3;
- (id)initWithIOAudio2Dictionary:(id)a0;

@end
