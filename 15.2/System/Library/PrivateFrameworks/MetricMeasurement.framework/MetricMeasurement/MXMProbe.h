@class MXMSampleFilter, NSObject;
@protocol OS_dispatch_queue, MXMProbeDelegate, OS_dispatch_semaphore;

@interface MXMProbe : NSObject {
    id /* block */ _updateHandler;
    id /* block */ _stopHandler;
    NSObject<OS_dispatch_semaphore> *_stopWaiter;
}

@property BOOL _updating;
@property BOOL _shouldStop;
@property (copy, nonatomic) MXMSampleFilter *filter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (weak, nonatomic) id<MXMProbeDelegate> delegate;
@property (readonly) BOOL updating;

+ (id)probe;

- (void)_handleIncomingData:(id)a0;
- (void)_beginUpdates;
- (void)stopUpdates;
- (void).cxx_destruct;
- (id)init;
- (void)_stopUpdates;
- (BOOL)performPreIterationActions;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)a0 stopHandler:(id /* block */)a1;
- (id)sampleWithTimeout:(double)a0 stopReason:(unsigned long long *)a1;
- (id)sampleWithTimeout:(double)a0;
- (void)updateNowUntilStopped;
- (void)updateNowUntilTimeout:(double)a0;
- (BOOL)waitUntilStoppedWithTimeout:(double)a0;
- (void)updateNowUntilTimeout:(double)a0 updateHandler:(id /* block */)a1 stopHandler:(id /* block */)a2;
- (BOOL)_setupWaitSemaphore;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)a0;
- (void)updateNowUntilTimeout:(double)a0 updateHandler:(id /* block */)a1;
- (void)waitForeverUntilStopped;

@end
