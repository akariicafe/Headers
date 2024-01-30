@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, WFTimerHandler;

@interface WFTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (readonly, weak, nonatomic) id<WFTimerHandler> handler;
@property (readonly, nonatomic) double duration;

- (void)restart;
- (void)cancel;
- (void).cxx_destruct;
- (void)start;
- (id)initWithHandler:(id)a0 duration:(double)a1;
- (BOOL)shouldHaveTimeout;

@end
