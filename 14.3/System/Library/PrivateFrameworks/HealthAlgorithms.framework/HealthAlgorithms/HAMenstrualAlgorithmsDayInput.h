@class NSNumber;

@interface HAMenstrualAlgorithmsDayInput : NSObject

@property (nonatomic) unsigned int julianDay;
@property (nonatomic) unsigned char flow;
@property (nonatomic) BOOL spotting;
@property (retain, nonatomic) NSNumber *flowUpdatedJulianDay;
@property (nonatomic) unsigned char ovulationTestResult;

- (void).cxx_destruct;

@end
