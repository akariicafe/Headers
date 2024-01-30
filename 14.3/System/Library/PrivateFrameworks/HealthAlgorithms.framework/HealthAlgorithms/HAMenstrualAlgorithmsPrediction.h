@class NSArray;

@interface HAMenstrualAlgorithmsPrediction : NSObject

@property (nonatomic) unsigned int julianDayOfWindowStart;
@property (retain, nonatomic) NSArray *startProbability;
@property (retain, nonatomic) NSArray *endProbability;
@property (retain, nonatomic) NSArray *convolvedProbability;
@property (nonatomic) double startProbabilityMean;
@property (nonatomic) double endProbabilityMean;
@property (nonatomic) double convolvedProbabilityMean;
@property (nonatomic) double startProbabilityStdDev;
@property (nonatomic) double endProbabilityStdDev;
@property (nonatomic) double convolvedProbabilityStdDev;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lowRange;
@property (nonatomic) BOOL isOngoingMenstruation;

- (void).cxx_destruct;

@end
