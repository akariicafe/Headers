@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUScheduledQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_items;
}

@property double timerLeeway;
@property double timerCoalesce;

- (void)dispatchAfter:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)_timerFired;
- (void)_scheduleTimer:(unsigned long long)a0;
- (void)_dispatchItemsThrough:(unsigned long long)a0;
- (void)dispatchAt:(unsigned long long)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)dealloc;
- (void)_startTimer;
- (id)init;
- (void)_stopTimer;
- (void).cxx_destruct;

@end
