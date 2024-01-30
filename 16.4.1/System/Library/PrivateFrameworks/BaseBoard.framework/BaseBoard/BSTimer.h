@class NSString, BSDispatchSource, NSObject;
@protocol OS_dispatch_queue;

@interface BSTimer : NSObject <BSTimer> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    id /* block */ _handler;
    BSDispatchSource *_source;
    double _leewayInterval;
    BOOL _oneShot;
}

@property (readonly, nonatomic) double repeatInterval;
@property (readonly, nonatomic) unsigned long long fireCount;
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double fireInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scheduledTimerWithFireInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;

- (void)schedule;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFireInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithFireInterval:(double)a0 repeatInterval:(double)a1 leewayInterval:(double)a2 queue:(id)a3 handler:(id /* block */)a4;

@end
