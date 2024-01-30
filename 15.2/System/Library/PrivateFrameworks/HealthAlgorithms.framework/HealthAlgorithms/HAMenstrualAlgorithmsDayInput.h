@class NSNumber, HAMenstrualAlgorithmsHeartRateStatistics;

@interface HAMenstrualAlgorithmsDayInput : NSObject

@property (nonatomic) unsigned int julianDay;
@property (nonatomic) unsigned char flow;
@property (nonatomic) BOOL spotting;
@property (retain, nonatomic) NSNumber *flowUpdatedJulianDay;
@property (nonatomic) unsigned char ovulationTestResult;
@property (nonatomic) unsigned char cervicalMucusQuality;
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sedentaryHeartRateStatistics;
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sleepHeartRateStatistics;

- (void).cxx_destruct;

@end
