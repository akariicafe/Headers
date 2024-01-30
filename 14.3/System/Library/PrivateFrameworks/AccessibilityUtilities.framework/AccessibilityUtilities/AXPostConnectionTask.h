@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject

@property (copy, nonatomic) id /* block */ postConnectionBlock;
@property (retain, nonatomic) AXAccessQueueTimer *timeoutTimer;
@property (nonatomic) BOOL didTimeout;

- (void).cxx_destruct;
- (void)_performTask;
- (id)initWithConnectBlock:(id /* block */)a0 timeout:(double)a1 accessQueue:(id)a2;
- (void)performTask;

@end
