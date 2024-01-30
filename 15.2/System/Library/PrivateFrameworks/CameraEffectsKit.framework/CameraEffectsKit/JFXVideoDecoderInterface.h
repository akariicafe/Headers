@class NSObject;
@protocol OS_dispatch_semaphore;

@interface JFXVideoDecoderInterface : NSObject {
    struct OpaqueVTDecompressionSession { } *_session;
    double m_expectedFrameRate;
}

@property (retain) NSObject<OS_dispatch_semaphore> *frameSemaphore;
@property struct __CVBuffer { } *imageBuffer;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (struct __CVBuffer { } *)decodeFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
