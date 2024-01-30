@class NSObject, OITSUProgress, OITSUScaledProgressStorage;
@protocol OS_dispatch_queue;

@interface OITSUScaledProgress : OITSUProgress {
    OITSUScaledProgressStorage *mStorage;
    OITSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}

@property (retain) OITSUProgress *progress;
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
