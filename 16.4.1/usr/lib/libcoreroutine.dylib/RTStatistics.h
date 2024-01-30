@interface RTStatistics : NSObject

+ (double)betaDistributionCdfAtX:(double)a0 paramA:(double)a1 paramB:(double)a2;
+ (double)calculateModelConfidenceWithCorrectPredictions:(double)a0 incorrectPredictions:(double)a1;
+ (double)calculateModelConfidenceWithCorrectPredictions:(double)a0 incorrectPredictions:(double)a1 iterations:(unsigned long long)a2 minimumConfidence:(double)a3;

@end
