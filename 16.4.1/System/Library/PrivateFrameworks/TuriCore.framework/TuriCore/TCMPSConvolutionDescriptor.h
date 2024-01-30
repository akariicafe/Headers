@class NSString;

@interface TCMPSConvolutionDescriptor : NSObject

@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) unsigned long long strideWidth;
@property (nonatomic) unsigned long long strideHeight;
@property (nonatomic) unsigned long long paddingWidth;
@property (nonatomic) unsigned long long paddingHeight;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL updateWeights;

- (id)init;
- (void).cxx_destruct;

@end
