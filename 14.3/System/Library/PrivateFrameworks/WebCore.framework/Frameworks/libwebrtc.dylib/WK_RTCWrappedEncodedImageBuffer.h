@interface WK_RTCWrappedEncodedImageBuffer : NSObject

@property (nonatomic) struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface *ptr_; } buffer;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEncodedImageBuffer:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface *x0; })a0;

@end
