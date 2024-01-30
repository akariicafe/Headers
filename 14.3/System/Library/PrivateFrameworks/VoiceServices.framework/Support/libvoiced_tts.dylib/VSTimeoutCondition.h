@class NSCondition;

@interface VSTimeoutCondition : NSObject

@property (retain, nonatomic) NSCondition *refreshTimeoutCondition;
@property (nonatomic) BOOL shouldStop;
@property (nonatomic) double timeoutValue;

- (void)refresh;
- (BOOL)wait;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithTimeoutValue:(double)a0;
- (BOOL)_waitForTimeInterval:(double)a0;

@end
