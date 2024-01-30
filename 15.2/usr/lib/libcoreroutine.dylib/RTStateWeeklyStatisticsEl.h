@class NSUUID;

@interface RTStateWeeklyStatisticsEl : NSObject

@property (nonatomic) double numOfClustEntPerWeek;
@property (nonatomic) double avgAggTime_s;
@property (nonatomic) double stdAggTime_s;
@property (nonatomic) double daysPerWeek;
@property (copy, nonatomic) NSUUID *stateUUID;
@property (nonatomic) double topMedian;

- (void).cxx_destruct;
- (id)init;

@end
