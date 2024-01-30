@class NSUUID;

@interface RTStateWeeklyStatisticsEl : NSObject

@property (nonatomic) double numOfClustEntPerWeek;
@property (nonatomic) double avgAggTime_s;
@property (nonatomic) double stdAggTime_s;
@property (nonatomic) double daysPerWeek;
@property (copy, nonatomic) NSUUID *stateUUID;
@property (nonatomic) double topMedian;

- (id)init;
- (void).cxx_destruct;

@end
