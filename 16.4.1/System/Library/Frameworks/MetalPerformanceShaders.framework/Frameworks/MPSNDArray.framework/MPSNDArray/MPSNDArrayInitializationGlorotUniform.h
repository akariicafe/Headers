@interface MPSNDArrayInitializationGlorotUniform : MPSNDArrayInitialization

@property (nonatomic) unsigned long long FanIn;
@property (nonatomic) unsigned long long FanOut;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 sourceCount:(unsigned long long)a1;
- (void)encodeToCommandBuffer:(id)a0 destinationArray:(id)a1;
- (id)initWithDevice:(id)a0 seed:(unsigned long long)a1;
- (unsigned long long)kernelDimensionalityForDestinationArray:(id)a0;

@end
