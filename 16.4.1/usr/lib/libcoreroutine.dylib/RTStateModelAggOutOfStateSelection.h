@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject

@property (retain, nonatomic) NSMutableArray *selectOOStStates;
@property (nonatomic) double weeklyDensityCorrection;
@property (nonatomic) double dailyDensityCorrection;

- (id)init;
- (id)initWithSelectOOStStates:(id)a0 dailyDensityCorrection:(double)a1 weeklyDensityCorrection:(double)a2;
- (void).cxx_destruct;

@end
