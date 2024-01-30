@class NSDate;

@interface OSLogPosition : NSObject

@property (readonly, nonatomic) long long precision;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) double offset;

- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithEventSource:(id)a0 timeIntervalSinceEnd:(double)a1;
- (id)initWithTimeIntervalSinceLatestBoot:(double)a0;

@end
