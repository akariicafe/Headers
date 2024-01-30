@class TSUScaledProgressStorage, NSObject, TSUProgress;
@protocol OS_dispatch_queue;

@interface TSUScaledProgress : TSUProgress {
    TSUScaledProgressStorage *_storage;
    TSUProgress *_progress;
    id _progressObserver;
    NSObject<OS_dispatch_queue> *_progressQueue;
}

@property (retain) TSUProgress *progress;
@property double maxValue;

- (BOOL)isIndeterminate;
- (double)value;
- (void)removeProgressObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_addProgressObserverToProgressInQueue;
- (void)p_removeProgressObserverFromProgressInQueue;
- (id)initForSubclass;

@end
