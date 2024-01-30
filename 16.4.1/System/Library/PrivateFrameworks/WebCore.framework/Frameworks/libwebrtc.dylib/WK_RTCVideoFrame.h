@protocol RTCVideoFrameBuffer;

@interface WK_RTCVideoFrame : NSObject {
    long long _rotation;
    long long _timeStampNs;
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) long long rotation;
@property (readonly, nonatomic) long long timeStampNs;
@property (nonatomic) long long timeStamp;
@property (readonly, nonatomic) id<RTCVideoFrameBuffer> buffer;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 rotation:(long long)a1 timeStampNs:(long long)a2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 rotation:(long long)a1 timeStampNs:(long long)a2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 scaledWidth:(int)a1 scaledHeight:(int)a2 cropWidth:(int)a3 cropHeight:(int)a4 cropX:(int)a5 cropY:(int)a6 rotation:(long long)a7 timeStampNs:(long long)a8;
- (id)newI420VideoFrame;

@end
