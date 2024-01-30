@class NSDate;

@interface TimeAndLatencyAbm : NSObject

@property (retain) NSDate *time;
@property double latency;

- (void).cxx_destruct;
- (id)initWithTime:(id)a0 andLatency:(double)a1;

@end
