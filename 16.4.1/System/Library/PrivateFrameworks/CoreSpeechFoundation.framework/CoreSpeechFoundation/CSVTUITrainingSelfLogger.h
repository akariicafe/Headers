@interface CSVTUITrainingSelfLogger : NSObject

+ (id)sharedLogger;

- (void)logSiriSetupPHSEnrollmentDigitalZeroDetectionCompletedWithSiriSetupID:(id)a0 withPageNumber:(int)a1 withPhId:(id)a2 withMaxNumContinuousZeros:(int)a3 withMaxNumAllowedContinuousZeros:(int)a4 withIsMaxNumContinuousZerosOverThreshold:(BOOL)a5;
- (void)logSiriSetupPHSEnrollmentUtteranceCompletedWithSiriSetupID:(id)a0 withPageNumber:(int)a1 withPhId:(id)a2 withTopScoreForUtterance:(float)a3 withStartSampleCount:(int)a4 withEndSampleCount:(int)a5 withHasSpeechDetected:(int)a6;

@end
