@interface MathUtility : NSObject

+ (unsigned int)getMegabytesSignificantFiguresHistogramBinIndexForBytes:(unsigned long long)a0;
+ (double)computeNewMeanFromValue:(double)a0 currentMean:(double)a1 currentCount:(unsigned long long)a2;
+ (double)computeNewVarianceFromValue:(double)a0 currentMean:(double)a1 currentCount:(unsigned long long)a2 currentVariance:(double)a3;

@end
