@interface MPSMatrixRandomDistributionDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long distributionType;
@property (nonatomic) float minimum;
@property (nonatomic) float maximum;
@property (nonatomic) float mean;
@property (nonatomic) float standardDeviation;

+ (id)defaultDistributionDescriptor;
+ (id)normalDistributionDescriptorWithMean:(float)a0 standardDeviation:(float)a1;
+ (id)normalDistributionDescriptorWithMean:(float)a0 standardDeviation:(float)a1 minimum:(float)a2 maximum:(float)a3;
+ (id)uniformDistributionDescriptorWithMinimum:(float)a0 maximum:(float)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
