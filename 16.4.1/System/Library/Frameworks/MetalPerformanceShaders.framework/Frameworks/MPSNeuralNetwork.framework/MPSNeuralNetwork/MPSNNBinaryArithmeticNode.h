@interface MPSNNBinaryArithmeticNode : MPSNNFilterNode

@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) unsigned long long primaryStrideInPixelsX;
@property (nonatomic) unsigned long long primaryStrideInPixelsY;
@property (nonatomic) unsigned long long primaryStrideInFeatureChannels;
@property (nonatomic) unsigned long long secondaryStrideInPixelsX;
@property (nonatomic) unsigned long long secondaryStrideInPixelsY;
@property (nonatomic) unsigned long long secondaryStrideInFeatureChannels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

+ (id)nodeWithLeftSource:(id)a0 rightSource:(id)a1;
+ (id)nodeWithSources:(id)a0;

- (id)initWithSources:(id)a0;
- (id)gradientFilterWithSources:(id)a0;
- (id)gradientFiltersWithSources:(id)a0;
- (id)initWithLeftSource:(id)a0 rightSource:(id)a1;
- (Class)gradientClass;

@end
