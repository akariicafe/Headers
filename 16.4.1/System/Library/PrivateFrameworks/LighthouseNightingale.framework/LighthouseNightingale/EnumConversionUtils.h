@interface EnumConversionUtils : NSObject

+ (unsigned char)HAMenstrualAlgorithmsOvulationTestResultFromHKMCOvulationTestResult:(long long)a0;
+ (long long)HKMCOvulationTestResultFromHAMenstrualAlgorithmsOvulationTestResult:(unsigned char)a0;
+ (unsigned char)HAMenstrualAlgorithmsFlowFromHKMCMenstrualFlow:(long long)a0;
+ (long long)HKMCMenstrualFlowFromHAMenstrualAlgorithmsFlow:(unsigned char)a0;
+ (long long)HKMCPredictionPrimarySourceFromHAMenstrualAlgorithmsPrimarySource:(unsigned char)a0;
+ (id)getStringRepresentationOfHAMenstrualAlgorithmsPrimarySource:(unsigned char)a0;
+ (id)stringFromHKMCPredictionPrimarySource:(long long)a0;

@end
