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
- (void)stopUpdates;
- (id)init;
- (void).cxx_destruct;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (BOOL)_setupWaitSemaphore;
- (BOOL)performPreIterationActions;
- (id)sampleWithTimeout:(double)a0;
- (id)sampleWithTimeout:(double)a0 stopReason:(unsigned long long *)a1;
- (void)updateNowUntilStopped;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)a0;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)a0 stopHandler:(id /* block */)a1;
- (void)updateNowUntilTimeout:(double)a0;
- (void)updateNowUntilTimeout:(double)a0 updateHandler:(id /* block */)a1;
- (void)updateNowUntilTimeout:(double)a0 updateHandler:(id /* block */)a1 stopHandler:(id /* block */)a2;
- (void)waitForeverUntilStopped;
- (BOOL)waitUntilStoppedWithTimeout:(double)a0;

@end
