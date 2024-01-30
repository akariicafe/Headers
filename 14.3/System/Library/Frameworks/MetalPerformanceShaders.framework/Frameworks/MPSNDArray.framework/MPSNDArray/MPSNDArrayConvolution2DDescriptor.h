@interface MPSNDArrayConvolution2DDescriptor : NSObject <NSCopying> {
    unsigned long long _channelMultiplier;
}

@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) unsigned long long strideInPixelsX;
@property (nonatomic) unsigned long long strideInPixelsY;
@property (nonatomic) unsigned long long groups;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned int dataFormat;
@property (nonatomic) unsigned int weightsFormat;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
