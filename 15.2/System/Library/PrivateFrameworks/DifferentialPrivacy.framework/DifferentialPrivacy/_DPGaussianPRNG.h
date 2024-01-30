@interface _DPGaussianPRNG : NSObject

+ (id)generateSeed;
+ (unsigned long long)seedLength;
+ (id)randomFloatVectorFromSeed:(id)a0 length:(unsigned long long)a1 mean:(double)a2 stddev:(double)a3;
+ (BOOL)generateGaussianFloatsWithMean:(double)a0 stddev:(double)a1 x:(int)a2 y:(int)a3 out1:(float *)a4 out2:(float *)a5;

@end
