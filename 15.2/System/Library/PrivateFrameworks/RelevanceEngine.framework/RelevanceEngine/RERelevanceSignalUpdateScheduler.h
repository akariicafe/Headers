@class NSMutableDictionary, NSDate, NSObject, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceSignalUpdateScheduler : RESingleton {
    NSMutableDictionary *_updateBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextTimer *_timer;
    NSDate *_lastFireDate;
    BOOL _alreadyScheduled;
}

- (void)_rescheduleTimer;
- (void)_updateBlocks;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)_queue_updateBlocks;
- (void)scheduleEventWithIdentifier:(id)a0 updateFrequency:(double)a1 completion:(id /* block */)a2;
- (void)unscheduleEventWithIdentifier:(id)a0;

@end
