@class TSUScaledProgressStorage, NSObject, TSUProgress;
@protocol OS_dispatch_queue;

@interface TSUScaledProgress : TSUProgress {
    TSUScaledProgressStorage *mStorage;
    TSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}

@property (retain) TSUProgress *progress;
@property double maxValue;

- (double)value;
- (id)init;
- (void)removeProgressObserver:(id)a0;
- (void)dealloc;
- (BOOL)isIndeterminate;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_removeProgressObserverFromProgressInQueue;
- (void)p_addProgressObserverToProgressInQueue;

@end
