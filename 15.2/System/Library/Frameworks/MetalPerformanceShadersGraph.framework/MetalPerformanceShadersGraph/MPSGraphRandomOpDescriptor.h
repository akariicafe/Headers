@interface MPSGraphRandomOpDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long distribution;
@property (nonatomic) unsigned int dataType;
@property (nonatomic) float min;
@property (nonatomic) float max;
@property (nonatomic) long long minInteger;
@property (nonatomic) long long maxInteger;
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;
@property (nonatomic) unsigned long long samplingMethod;

+ (id)descriptorWithDistribution:(unsigned long long)a0 dataType:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
