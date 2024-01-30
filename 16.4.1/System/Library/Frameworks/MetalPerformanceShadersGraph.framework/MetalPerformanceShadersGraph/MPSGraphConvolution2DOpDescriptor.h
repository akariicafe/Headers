@interface MPSGraphConvolution2DOpDescriptor : NSObject <NSCopying>

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
@property (nonatomic) unsigned long long groups;

+ (id)descriptorWithStrideInX:(unsigned long long)a0 strideInY:(unsigned long long)a1 dilationRateInX:(unsigned long long)a2 dilationRateInY:(unsigned long long)a3 groups:(unsigned long long)a4 paddingLeft:(unsigned long long)a5 paddingRight:(unsigned long long)a6 paddingTop:(unsigned long long)a7 paddingBottom:(unsigned long long)a8 paddingStyle:(unsigned long long)a9 dataLayout:(unsigned long long)a10 weightsLayout:(unsigned long long)a11;
+ (id)descriptorWithStrideInX:(unsigned long long)a0 strideInY:(unsigned long long)a1 dilationRateInX:(unsigned long long)a2 dilationRateInY:(unsigned long long)a3 groups:(unsigned long long)a4 paddingStyle:(unsigned long long)a5 dataLayout:(unsigned long long)a6 weightsLayout:(unsigned long long)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)a0 paddingRight:(unsigned long long)a1 paddingTop:(unsigned long long)a2 paddingBottom:(unsigned long long)a3;

@end
