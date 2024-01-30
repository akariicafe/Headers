@interface MPSGraphConvolution3DOpDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;
@property (nonatomic) unsigned long long strideInZ;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned long long dilationRateInZ;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingFront;
@property (nonatomic) unsigned long long paddingBack;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) unsigned long long dataLayout;
@property (nonatomic) unsigned long long weightsLayout;
@property (nonatomic) unsigned long long groups;

+ (id)descriptorWithStrideInX:(unsigned long long)a0 strideInY:(unsigned long long)a1 strideInZ:(unsigned long long)a2 dilationRateInX:(unsigned long long)a3 dilationRateInY:(unsigned long long)a4 dilationRateInZ:(unsigned long long)a5 groups:(unsigned long long)a6 paddingLeft:(unsigned long long)a7 paddingRight:(unsigned long long)a8 paddingTop:(unsigned long long)a9 paddingBottom:(unsigned long long)a10 paddingFront:(unsigned long long)a11 paddingBack:(unsigned long long)a12 paddingStyle:(unsigned long long)a13 dataLayout:(unsigned long long)a14 weightsLayout:(unsigned long long)a15;
+ (id)descriptorWithStrideInX:(unsigned long long)a0 strideInY:(unsigned long long)a1 strideInZ:(unsigned long long)a2 dilationRateInX:(unsigned long long)a3 dilationRateInY:(unsigned long long)a4 dilationRateInZ:(unsigned long long)a5 groups:(unsigned long long)a6 paddingStyle:(unsigned long long)a7 dataLayout:(unsigned long long)a8 weightsLayout:(unsigned long long)a9;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)a0 paddingRight:(unsigned long long)a1 paddingTop:(unsigned long long)a2 paddingBottom:(unsigned long long)a3 paddingFront:(unsigned long long)a4 paddingBack:(unsigned long long)a5;

@end
