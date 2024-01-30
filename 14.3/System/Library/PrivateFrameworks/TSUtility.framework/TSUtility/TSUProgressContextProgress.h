@class NSObject, TSUProgressContext;
@protocol OS_dispatch_queue;

@interface TSUProgressContextProgress : TSUProgress {
    TSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    BOOL hasAddedProgressContextObserver;
}

- (id)init;
- (void)dealloc;
- (BOOL)isIndeterminate;
- (double)value;
- (void)removeProgressObserver:(id)a0;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)initWithProgressContext:(id)a0;
- (void)p_updateProgressContextObserver;
- (void)p_progressDidChange:(id)a0;

@end
