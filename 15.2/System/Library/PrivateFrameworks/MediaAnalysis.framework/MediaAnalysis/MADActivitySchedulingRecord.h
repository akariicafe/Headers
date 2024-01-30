@class NSDate;

@interface MADActivitySchedulingRecord : NSObject

@property (nonatomic) unsigned long long activityID;
@property (nonatomic) NSDate *startTime;
@property (nonatomic) double duration;
@property (nonatomic) int exitStatus;

- (id)description;

@end
