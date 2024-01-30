@interface MPSNDArrayRandomNormal : MPSNDArrayRandom

@property (nonatomic) unsigned int samplingMethod;
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;

- (id)initWithDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 mean:(float)a1 standardDeviation:(float)a2;

@end
