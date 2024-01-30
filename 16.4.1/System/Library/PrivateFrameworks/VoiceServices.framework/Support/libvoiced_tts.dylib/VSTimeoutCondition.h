@class NSCondition;

@interface VSTimeoutCondition : NSObject

@property (retain, nonatomic) NSCondition *refreshTimeoutCondition;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic) double timeoutValue;

- (void)refresh;
- (BOOL)wait;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)_waitForTimeInterval:(double)a0;
- (id)initWithTimeoutValue:(double)a0;

@end
