@class AVSampleBufferVideoOutputInternal, NSObject;
@protocol OS_dispatch_queue, AVSampleBufferVideoOutputPullDelegate;

@interface AVSampleBufferVideoOutput : NSObject {
    AVSampleBufferVideoOutputInternal *_videoOutputInternal;
}

@property (readonly, weak, nonatomic) id<AVSampleBufferVideoOutputPullDelegate> outputDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (id)init;
- (void)dealloc;
- (BOOL)hasNewPixelBufferForSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)setUpWithOutputSettings:(id)a0 outputSettingsArePixelBufferAttributes:(BOOL)a1 withExceptionReason:(id *)a2;
- (struct __CVBuffer { } *)_copyPixelBufferForItemTimeWithOptions:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 itemTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 options:(unsigned int)a2;
- (void)setOutputDelegate:(id)a0 queue:(id)a1;
- (struct __CVBuffer { } *)copyPixelBufferForSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 sourceTimeForDisplay:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (struct __CVBuffer { } *)copyLastPixelBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (BOOL)_configureWithVideoQueue:(struct OpaqueFigVideoQueue { } *)a0;
- (void)_resetLastImageTime;
- (void)_dispatchOutputSequenceWasFlushed;
- (id)_weakReference;

@end
