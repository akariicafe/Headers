@interface FBKTimeIntervalEvent : NSObject

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) double endTimeInterval;

- (id)initWithType:(unsigned long long)a0;
- (id)description;

@end
