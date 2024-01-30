@class NSArray;

@interface MPSGraphPooling4DOpDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *kernelSizes;
@property (copy, nonatomic) NSArray *strides;
@property (copy, nonatomic) NSArray *dilationRates;
@property (copy, nonatomic) NSArray *paddingValues;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) BOOL ceilMode;
@property (nonatomic) BOOL includeZeroPadToAverage;

+ (id)descriptorWithKernelSizes:(id)a0 strides:(id)a1 dilationRates:(id)a2 paddingValues:(id)a3 paddingStyle:(unsigned long long)a4;
+ (id)descriptorWithKernelSizes:(id)a0 paddingStyle:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
