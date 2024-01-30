@class NSNumber, NSDateComponents;

@interface HAMenstrualAlgorithmsDayStreamProcessorConfig : NSObject

@property (retain, nonatomic) NSNumber *userReportedCycleLength;
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedCycleLength;
@property (retain, nonatomic) NSNumber *userReportedMenstruationLength;
@property (retain, nonatomic) NSNumber *julianDayOfUserReportedMenstruationLength;
@property (retain, nonatomic) NSDateComponents *birthDateComponents;
@property (nonatomic) float menstruationStartCoefficient;
@property (nonatomic) float menstruationEndCoefficient;
@property (nonatomic) float fertilityStartCoefficient;
@property (nonatomic) float fertilityEndCoefficient;
@property (nonatomic) float projectionOffCoefficient;
@property (nonatomic) unsigned int todayAsJulianDay;

- (void).cxx_destruct;

@end
