@class NSDate;

@interface BUBlockCallThrottler : NSObject

@property (retain, nonatomic) NSDate *lastBlockCallDate;
@property (nonatomic) BOOL running;
@property (nonatomic) double minimumTimeBetweenCalls;

- (void).cxx_destruct;
- (id)init;
- (void)runBlock:(id /* block */)a0;
- (BOOL)_runBlock:(id /* block */)a0 throttle:(BOOL)a1;
- (BOOL)runBlockThrottled:(id /* block */)a0;

@end
