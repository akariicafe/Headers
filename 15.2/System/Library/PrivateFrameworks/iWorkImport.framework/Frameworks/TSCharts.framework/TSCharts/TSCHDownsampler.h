@interface TSCHDownsampler : NSObject

+ (id)downsampleDataUsingGridPartitioningWithSeries:(id)a0 xAxis:(id)a1 yAxis:(id)a2;
+ (id)downsampleDataUsingGridPartitioningWithSeries:(id)a0 xAxis:(id)a1 yAxis:(id)a2 sizeAxis:(id)a3;
+ (id)downsampleDataUsingTrianglesWithSeries:(id)a0 toValueCount:(unsigned long long)a1 radiusAxis:(id)a2 angleAxis:(id)a3;
+ (id)downsampleDataUsingTrianglesWithSeries:(id)a0 toValueCount:(unsigned long long)a1 xAxis:(id)a2 yAxis:(id)a3;

@end
