@class VCPixelTransferSession;

@interface VideoScaler : NSObject {
    VCPixelTransferSession *_pixelTransferSession;
}

- (id)init;
- (void)dealloc;
- (int)convertAndScalePixelBuffer:(struct __CVBuffer { } *)a0 toWidth:(int)a1 toHeight:(int)a2 withPixelFormat:(unsigned int)a3 usingPixelBufferPool:(struct __CVPixelBufferPool { } *)a4 andStoreTo:(struct __CVBuffer **)a5;

@end
