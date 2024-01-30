@class NSDictionary, NSMutableArray, NSDate;

@interface PLDuetState : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property double cpuSeconds;
@property (retain) NSMutableArray *overlappingStates;
@property (retain) NSDictionary *info;

- (double)duration;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
