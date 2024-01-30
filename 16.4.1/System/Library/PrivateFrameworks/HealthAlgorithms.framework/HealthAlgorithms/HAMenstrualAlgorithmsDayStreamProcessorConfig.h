@class NSNumber, NSDateComponents, HAMenstrualAlgorithmsDeviationInput;

@interface HAMenstrualAlgorithmsDayStreamProcessorConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *userReportedCycleLength;
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedCycleLength;
@property (retain, nonatomic) NSNumber *userReportedMenstruationLength;
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedMenstruationLength;
@property (retain, nonatomic) NSDateComponents *birthDateComponents;
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviationInput *deviationInput;
@property (nonatomic) unsigned int todayAsJulianDay;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
