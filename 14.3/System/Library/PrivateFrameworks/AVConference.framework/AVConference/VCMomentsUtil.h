@interface VCMomentsUtil : NSObject

+ (struct OpaqueVTPixelTransferSession { } *)allocTransferSession;
+ (struct __CVBuffer { } *)createResizeFrame:(struct __CVBuffer { } *)a0 transferSession:(struct OpaqueVTPixelTransferSession { } *)a1 bufferPool:(struct __CVPixelBufferPool { } *)a2;
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)a0 width:(double)a1 height:(double)a2;
+ (BOOL)pixelBufferPool:(struct __CVPixelBufferPool { } *)a0 matchesWidth:(int)a1 height:(int)a2;

@end
