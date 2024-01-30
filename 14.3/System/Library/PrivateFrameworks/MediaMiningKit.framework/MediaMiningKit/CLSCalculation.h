@interface CLSCalculation : NSObject

+ (double)cumulativeNormalDistributionForX:(double)a0 mu:(double)a1 sigma:(double)a2;
+ (void)calculateStandardDeviationForItems:(id)a0 valueBlock:(id /* block */)a1 result:(id /* block */)a2;

@end
