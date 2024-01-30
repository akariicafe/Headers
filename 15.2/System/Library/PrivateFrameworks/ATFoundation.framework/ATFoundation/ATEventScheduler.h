@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ATEventScheduler : NSObject {
    NSMutableDictionary *_events;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventAccessQueue;
    BOOL _started;
}

+ (id)sharedInstance;

- (void)_postExpiredEvents;
- (void)scheduleRecurringEvent:(id)a0 withInterval:(double)a1 afterDelay:(double)a2 withUserData:(id)a3;
- (void)_scheduleNextEvent;
- (void)scheduleEvent:(id)a0 afterDelay:(double)a1 withUserData:(id)a2;
- (BOOL)hasScheduledEvent:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)removeEvent:(id)a0;

@end
