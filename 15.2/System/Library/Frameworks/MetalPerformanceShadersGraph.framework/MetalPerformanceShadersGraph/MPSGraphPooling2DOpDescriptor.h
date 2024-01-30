@interface MPSGraphPooling2DOpDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
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
@property (nonatomic) BOOL ceilMode;
@property (nonatomic) BOOL includeZeroPadToAverage;

+ (id)descriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 strideInX:(unsigned long long)a2 strideInY:(unsigned long long)a3 dilationRateInX:(unsigned long long)a4 dilationRateInY:(unsigned long long)a5 paddingLeft:(unsigned long long)a6 paddingRight:(unsigned long long)a7 paddingTop:(unsigned long long)a8 paddingBottom:(unsigned long long)a9 paddingStyle:(unsigned long long)a10 dataLayout:(unsigned long long)a11;
+ (id)descriptorWithKernelWidth:(unsigned long long)a0 kernelHeight:(unsigned long long)a1 strideInX:(unsigned long long)a2 strideInY:(unsigned long long)a3 paddingStyle:(unsigned long long)a4 dataLayout:(unsigned long long)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)a0 paddingRight:(unsigned long long)a1 paddingTop:(unsigned long long)a2 paddingBottom:(unsigned long long)a3;

@end
