@class NSString;

@interface SiriTaskConfiguration : NSObject

@property (retain, nonatomic) NSString *eventTime;
@property (retain, nonatomic) NSString *taskName;
@property (retain, nonatomic) NSString *taskType;
@property (nonatomic) long long minDurationInSeconds;

- (void).cxx_destruct;
- (id)init;
- (id)initWithJSONData:(id)a0;

@end
