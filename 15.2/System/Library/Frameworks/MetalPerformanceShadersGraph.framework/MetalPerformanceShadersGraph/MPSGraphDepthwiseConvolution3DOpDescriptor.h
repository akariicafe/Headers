@class NSArray;

@interface MPSGraphDepthwiseConvolution3DOpDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *strides;
@property (copy, nonatomic) NSArray *dilationRates;
@property (copy, nonatomic) NSArray *paddingValues;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) long long channelDimensionIndex;

+ (id)descriptorWithStrides:(id)a0 dilationRates:(id)a1 paddingValues:(id)a2 paddingStyle:(unsigned long long)a3;
+ (id)descriptorWithPaddingStyle:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
