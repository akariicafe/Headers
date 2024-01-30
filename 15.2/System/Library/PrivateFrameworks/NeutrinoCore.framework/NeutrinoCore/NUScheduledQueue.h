@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUScheduledQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_items;
}

@property double timerLeeway;
@property double timerCoalesce;

- (void)_startTimer;
- (void)_timerFired;
- (void)_stopTimer;
- (void)_scheduleTimer:(unsigned long long)a0;
- (void)dispatchAt:(unsigned long long)a0 queue:(id)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dispatchAfter:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)_dispatchItemsThrough:(unsigned long long)a0;

@end
