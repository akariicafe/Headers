@class HAMenstrualAlgorithmsWristTemperature, HAMenstrualAlgorithmsHeartRateStatistics;

@interface HAMenstrualAlgorithmsDayInput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int julianDay;
@property (nonatomic) unsigned char flow;
@property (nonatomic) BOOL spotting;
@property (nonatomic) unsigned char ovulationTestResult;
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sedentaryHeartRateStatistics;
@property (retain, nonatomic) HAMenstrualAlgorithmsHeartRateStatistics *sleepHeartRateStatistics;
@property (retain, nonatomic) HAMenstrualAlgorithmsWristTemperature *wristTemperature;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
