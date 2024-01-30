@class PCPersistentTimer, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface RTPersistentTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) PCPersistentTimer *timer;

- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)_startTimer;
- (void)invalidate;
- (id)initWithFireDate:(id)a0 interval:(double)a1 serviceIdentifier:(id)a2 queue:(id)a3 handler:(id /* block */)a4;
- (void)_onTimerFired:(id)a0;
- (void)_setupNextTimer;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 queue:(id)a2 handler:(id /* block */)a3;

@end
