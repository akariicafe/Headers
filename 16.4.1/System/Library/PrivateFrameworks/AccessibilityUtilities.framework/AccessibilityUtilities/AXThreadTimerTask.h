@interface AXThreadTimerTask : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic, getter=isCancelled) BOOL cancel;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isActive) BOOL active;

- (void)run;
- (void).cxx_destruct;
- (void)runAfterDelay:(float)a0;

@end
