@class NSNumber, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCStreamInput : VCVideoCapture <VCStreamInputCaptureSourceDelegate> {
    struct opaqueCMFormatDescription { } *_format;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, nonatomic) NSNumber *streamInputID;
@property (readonly, nonatomic) BOOL isStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct opaqueCMFormatDescription { } *)streamFormat;
- (id)delegate;
- (void)dealloc;
- (void)didStartStreamInputCaptureSource;
- (void)didStopStreamInputCaptureSource;
- (id)initWithStreamInputID:(id)a0 format:(struct opaqueCMFormatDescription { } *)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)pushSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
