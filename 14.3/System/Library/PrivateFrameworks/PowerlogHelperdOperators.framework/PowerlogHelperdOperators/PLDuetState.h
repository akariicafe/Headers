@class NSDictionary, NSMutableArray, NSDate;

@interface PLDuetState : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property double cpuSeconds;
@property (retain) NSMutableArray *overlappingStates;
@property (retain) NSDictionary *info;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (double)duration;

@end
