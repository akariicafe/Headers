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

- (double)value;
- (void).cxx_destruct;
- (id)init;
- (void)removeProgressObserver:(id)a0;
- (BOOL)isIndeterminate;
- (id)addProgressObserverWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;
- (void)p_removeProgressObserverFromProgressInQueue;
- (void)p_addProgressObserverToProgressInQueue;
- (id)initForSubclass;

@end
