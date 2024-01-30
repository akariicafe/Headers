@interface MPSNDArrayRandomUniform : MPSNDArrayRandom

@property (nonatomic) float minimum;
@property (nonatomic) float maximum;
@property (nonatomic) long long minimumInteger;
@property (nonatomic) long long maximumInteger;

- (id)initWithDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 minimum:(float)a1 maximum:(float)a2;
- (id)initWithDevice:(id)a0 minimumInteger:(unsigned long long)a1 maximumInteger:(unsigned long long)a2;

@end
