@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CRKDispatchTimer : NSObject <CRKCancelable>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) double timeInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (copy, nonatomic) id /* block */ fireHandler;

+ (id)scheduledTimerWithTimerInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)resume;
- (void)dealloc;
- (void)cancel;
- (void)timerDidFire;
- (id)initWithTimeInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
