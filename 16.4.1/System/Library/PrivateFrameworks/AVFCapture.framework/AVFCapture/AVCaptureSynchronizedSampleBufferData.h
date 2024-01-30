@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}

@property (readonly) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly) BOOL sampleBufferWasDropped;
@property (readonly) long long droppedReason;

+ (void)initialize;

- (void)dealloc;
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 sampleBufferWasDropped:(BOOL)a1;
- (int)constituentDeviceCaptureID;
- (BOOL)hasCorrespondingDepthData;
- (BOOL)hasCorrespondingVisionData;

@end
