@interface SNSystemConfiguration : NSObject

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int channelCount;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSampleRate:(double)a0 channelCount:(unsigned int)a1;

@end
