@class NSObject;
@protocol FCGoalProgressDebouncerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FCGoalProgressDebouncer : NSObject {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (weak, nonatomic) id<FCGoalProgressDebouncerDelegate> delegate;

- (BOOL)inProgress;
- (void)debounce;
- (void)_handleTimerFired;
- (id)initWithServiceQueue:(id)a0;
- (void).cxx_destruct;

@end
