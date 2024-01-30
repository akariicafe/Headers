@class NSDate;

@interface TimeAndLatencyAbm : NSObject

@property (retain) NSDate *time;
@property double latency;

- (id)initWithTime:(id)a0 andLatency:(double)a1;
- (void).cxx_destruct;

@end
