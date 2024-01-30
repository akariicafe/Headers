@class NSNumber;

@interface HAMenstrualAlgorithmsStats : NSObject

@property (retain, nonatomic) NSNumber *medianCycleLength;
@property (retain, nonatomic) NSNumber *medianMenstruationLength;
@property (retain, nonatomic) NSNumber *lowerCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *lowerMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *upperCycleLengthPercentile;
@property (retain, nonatomic) NSNumber *upperMenstruationLengthPercentile;
@property (retain, nonatomic) NSNumber *numberOfCyclesFound;
@property (retain, nonatomic) NSNumber *julianDayOfFirstCycleStart;
@property (retain, nonatomic) NSNumber *julianDayOfLastCycleStart;

- (void).cxx_destruct;

@end
