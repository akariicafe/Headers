@class RTStateModelLocation;

@interface RTStateDepictionAggStateStats : NSObject

@property (retain, nonatomic) RTStateModelLocation *location;
@property (nonatomic) double aggregateTime_s;
@property (nonatomic) double lastExit_s;
@property (nonatomic) int numOfEntries;

- (void).cxx_destruct;
- (id)init;

@end
