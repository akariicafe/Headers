@interface SNSystemConfiguration : NSObject

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int channelCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSampleRate:(double)a0 channelCount:(unsigned int)a1;

@end
