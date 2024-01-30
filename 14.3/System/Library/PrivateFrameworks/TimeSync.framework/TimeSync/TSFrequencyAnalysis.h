@interface TSFrequencyAnalysis : NSObject

@property (nonatomic) double averagePeriod;
@property (nonatomic) double averageFrequency;
@property (nonatomic) double averageTimeError;
@property (nonatomic) double lowestFrequency;
@property (nonatomic) double highestFrequency;

- (id)initWithTimeErrorValues:(id)a0;

@end
