@class NSDate;

@interface PLUsageSnapshot : NSObject

@property (retain) NSDate *timestamp;
@property double cpuUsage;

- (void).cxx_destruct;
- (id)description;

@end
