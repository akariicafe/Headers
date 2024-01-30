@interface VideoScaler : NSObject {
    char *_tempBuffer1;
    char *_tempBuffer2;
    unsigned long long _tempBufferWidth;
    unsigned long long _tempBufferHeight;
    struct __IOSurfaceAccelerator { } *_ioSurfaceAccelerator;
}

- (id)init;
- (void)dealloc;
- (int)convertAndScalePixelBuffer:(struct __CVBuffer { } *)a0 toWidth:(int)a1 toHeight:(int)a2 withPixelFormat:(unsigned int)a3 usingPixelBufferPool:(struct __CVPixelBufferPool { } *)a4 andStoreTo:(struct __CVBuffer **)a5;
- (int)rotatePixelBuffer:(struct __CVBuffer { } *)a0 withPixelFormat:(unsigned int)a1 usingPixelBufferPool:(struct __CVPixelBufferPool { } *)a2 andStoreTo:(struct __CVBuffer **)a3;

@end
