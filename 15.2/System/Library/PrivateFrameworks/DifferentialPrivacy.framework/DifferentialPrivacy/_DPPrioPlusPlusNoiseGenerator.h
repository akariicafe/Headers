@interface _DPPrioPlusPlusNoiseGenerator : NSObject

+ (id)randomize:(id)a0 dimension:(unsigned long long)a1 stddev:(double)a2;
+ (BOOL)isValidSigma:(double)a0;
+ (BOOL)isValidDimension:(unsigned long long)a0;

@end
