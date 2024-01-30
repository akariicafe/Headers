@interface MPSGraphDepthwiseConvolution2DOpDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) unsigned long long dataLayout;
@property (nonatomic) unsigned long long weightsLayout;

+ (id)descriptorWithDataLayout:(unsigned long long)a0 weightsLayout:(unsigned long long)a1;
+ (id)descriptorWithStrideInX:(unsigned long long)a0 strideInY:(unsigned long long)a1 dilationRateInX:(unsigned long long)a2 dilationRateInY:(unsigned long long)a3 paddingLeft:(unsigned long long)a4 paddingRight:(unsigned long long)a5 paddingTop:(unsigned long long)a6 paddingBottom:(unsigned long long)a7 paddingStyle:(unsigned long long)a8 dataLayout:(unsigned long long)a9 weightsLayout:(unsigned long long)a10;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)a0 paddingRight:(unsigned long long)a1 paddingTop:(unsigned long long)a2 paddingBottom:(unsigned long long)a3;

@end
