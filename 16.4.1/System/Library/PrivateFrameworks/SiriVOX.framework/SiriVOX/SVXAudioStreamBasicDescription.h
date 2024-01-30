@interface SVXAudioStreamBasicDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) unsigned int formatID;
@property (readonly, nonatomic) unsigned int formatFlags;
@property (readonly, nonatomic) unsigned int bytesPerPacket;
@property (readonly, nonatomic) unsigned int framesPerPacket;
@property (readonly, nonatomic) unsigned int bytesPerFrame;
@property (readonly, nonatomic) unsigned int channelsPerFrame;
@property (readonly, nonatomic) unsigned int bitsPerChannel;
@property (readonly, nonatomic) unsigned int reserved;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (id)initWithSampleRate:(double)a0 formatID:(unsigned int)a1 formatFlags:(unsigned int)a2 bytesPerPacket:(unsigned int)a3 framesPerPacket:(unsigned int)a4 bytesPerFrame:(unsigned int)a5 channelsPerFrame:(unsigned int)a6 bitsPerChannel:(unsigned int)a7 reserved:(unsigned int)a8;

@end
