@class NSNumber, NSString, NSDate;

@interface VUIMediaStartTimeInfo : NSObject

@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *source;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartTime:(id)a0 timestamp:(id)a1 type:(long long)a2 source:(id)a3;

@end
