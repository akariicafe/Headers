@class BWNodeOutput;

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode

@property (readonly, nonatomic) BWNodeOutput *primaryFrameOutput;
@property (readonly, nonatomic) BWNodeOutput *synchronizedSlaveFrameOutput;

+ (void)initialize;

- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)_updateSynchronizedSlaveFrameEnabledWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_handleIrisMovieRequestForInput:(id)a0 sbuf:(struct opaqueCMSampleBuffer { } *)a1;
- (void)dealloc;
- (id)initWithBackPressureExtraRetainBufferCount:(int)a0;

@end
