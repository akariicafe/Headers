@class NSString, NSDate;

@interface CRKExecutionTimer : NSObject

@property (readonly, copy, nonatomic) NSString *timerDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (id)startedTimerWithDescription:(id)a0;

- (id)initWithDescription:(id)a0;
- (id)stop;
- (void)start;
- (void).cxx_destruct;

@end
