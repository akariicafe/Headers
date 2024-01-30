@class NSString, PCPersistentTimer, NSObject;
@protocol OS_dispatch_queue;

@interface BSPersistentTimer : NSObject <BSTimer> {
    double _fireInterval;
    NSString *_serviceIdentifier;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    id /* block */ _handler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PCPersistentTimer *_timer;
}

@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double fireInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scheduledTimerWithFireInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;

- (void)cancel;
- (void)schedule;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFireInterval:(double)a0 serviceIdentifier:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (id)initWithFireInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)_timerFired:(id)a0;

@end
