@class NSString, HMITimeIntervalAverage, HMFUnfairLock, NSObject;
@protocol OS_dispatch_queue, HMIVideoCommandBufferDelegate, OS_dispatch_semaphore;

@interface HMIVideoCommandBuffer : HMIVideoProcessingNode <HMFLogging> {
    HMFUnfairLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    long long _count;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _maxDuration;
    HMITimeIntervalAverage *_delay;
}

@property (weak) id<HMIVideoCommandBufferDelegate> delegate;
@property (readonly) unsigned long long videoSampleCount;
@property (readonly) double videoDelay;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } videoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)finish;
- (void).cxx_destruct;
- (void)flushAsync;
- (void)flush;
- (id)initWithMaxDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleBlock:(id /* block */)a0;

@end
