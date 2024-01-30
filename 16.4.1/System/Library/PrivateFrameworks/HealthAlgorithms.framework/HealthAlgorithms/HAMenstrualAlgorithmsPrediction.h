@interface HAMenstrualAlgorithmsPrediction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int julianDayOfWindowStart;
@property (nonatomic) double startProbabilityMean;
@property (nonatomic) double endProbabilityMean;
@property (nonatomic) double startProbabilityStdDev;
@property (nonatomic) double endProbabilityStdDev;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lowRange;
@property (nonatomic) BOOL isOngoingMenstruation;
@property (nonatomic) unsigned char predictionPrimarySource;
@property (nonatomic) long long daysOffsetFromCalendarMethod;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
