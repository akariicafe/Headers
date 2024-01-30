@class NSObject;
@protocol OS_dispatch_semaphore;

@interface JFXVideoDecoderInterface : NSObject {
    struct OpaqueVTDecompressionSession { } *_session;
    double m_expectedFrameRate;
}

@property (retain) NSObject<OS_dispatch_semaphore> *frameSemaphore;
@property struct __CVBuffer { } *imageBuffer;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)decodeFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

@end
