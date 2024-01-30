@class NSString;

@interface WK_RTCI420Buffer : NSObject <RTCI420Buffer> {
    struct scoped_refptr<webrtc::I420BufferInterface> { struct I420BufferInterface *ptr_; } _i420Buffer;
}

@property (readonly, nonatomic) int chromaWidth;
@property (readonly, nonatomic) int chromaHeight;
@property (readonly, nonatomic) const char *dataY;
@property (readonly, nonatomic) const char *dataU;
@property (readonly, nonatomic) const char *dataV;
@property (readonly, nonatomic) int strideY;
@property (readonly, nonatomic) int strideU;
@property (readonly, nonatomic) int strideV;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWidth:(int)a0 height:(int)a1;
- (id).cxx_construct;
- (id)toI420;
- (id)initWithFrameBuffer:(struct scoped_refptr<webrtc::I420BufferInterface> { struct I420BufferInterface *x0; })a0;
- (id)initWithWidth:(int)a0 height:(int)a1 dataY:(const char *)a2 dataU:(const char *)a3 dataV:(const char *)a4;
- (id)initWithWidth:(int)a0 height:(int)a1 strideY:(int)a2 strideU:(int)a3 strideV:(int)a4;
- (struct scoped_refptr<webrtc::I420BufferInterface> { struct I420BufferInterface *x0; })nativeI420Buffer;

@end
