@interface MLCPoolingDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) int poolingType;
@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long strideInX;
@property (readonly, nonatomic) unsigned long long strideInY;
@property (readonly, nonatomic) unsigned long long dilationRateInX;
@property (readonly, nonatomic) unsigned long long dilationRateInY;
@property (readonly, nonatomic) int paddingPolicy;
@property (readonly, nonatomic) unsigned long long paddingSizeInX;
@property (readonly, nonatomic) unsigned long long paddingSizeInY;
@property (readonly, nonatomic) BOOL countIncludesPadding;

+ (id)poolingDescriptorWithType:(int)a0 kernelSize:(unsigned long long)a1 stride:(unsigned long long)a2;
+ (id)poolingDescriptorWithType:(int)a0 kernelSizes:(id)a1 strides:(id)a2 paddingPolicy:(int)a3 paddingSizes:(id)a4;
+ (id)poolingDescriptorWithType:(int)a0 kernelSizes:(id)a1 strides:(id)a2 dilationRates:(id)a3 paddingPolicy:(int)a4 paddingSizes:(id)a5;
+ (id)maxPoolingDescriptorWithKernelSizes:(id)a0 strides:(id)a1 paddingPolicy:(int)a2 paddingSizes:(id)a3;
+ (id)maxPoolingDescriptorWithKernelSizes:(id)a0 strides:(id)a1 dilationRates:(id)a2 paddingPolicy:(int)a3 paddingSizes:(id)a4;
+ (id)averagePoolingDescriptorWithKernelSizes:(id)a0 strides:(id)a1 paddingPolicy:(int)a2 paddingSizes:(id)a3 countIncludesPadding:(BOOL)a4;
+ (id)averagePoolingDescriptorWithKernelSizes:(id)a0 strides:(id)a1 dilationRates:(id)a2 paddingPolicy:(int)a3 paddingSizes:(id)a4 countIncludesPadding:(BOOL)a5;
+ (id)l2NormPoolingDescriptorWithKernelSizes:(id)a0 strides:(id)a1 paddingPolicy:(int)a2 paddingSizes:(id)a3;
+ (id)l2NormPoolingDescriptorWithKernelSizes:(id)a0 strides:(id)a1 dilationRates:(id)a2 paddingPolicy:(int)a3 paddingSizes:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(int)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInX:(unsigned long long)a3 strideInY:(unsigned long long)a4 dilationRateInX:(unsigned long long)a5 dilationRateInY:(unsigned long long)a6 paddingPolicy:(int)a7 paddingSizeInX:(unsigned long long)a8 paddingSizeInY:(unsigned long long)a9 countIncludesPadding:(BOOL)a10;

@end
