@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPImageManager : NSObject {
    struct FigPhotoDecompressionSession { } *_decodeSession;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    NSObject<OS_dispatch_queue> *_decodeQueue;
}

+ (id)sharedImageManager;
+ (BOOL)loggingEnabled;
+ (BOOL)canDecodeAcceleratedUniformTypeIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)flushCache;
- (int)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (int)convertPixelBuffer:(struct __CVBuffer **)a0 toPixelFormat:(int)a1;
- (int)drawImage:(struct CGImage { } *)a0 withOrientation:(unsigned int)a1 maxDimension:(unsigned long long)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (int)acceleratedDecodeImageData:(id)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2 pixelBuffer:(struct __CVBuffer **)a3 flushCache:(BOOL)a4;
- (int)decodeImageSource:(struct CGImageSource { } *)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (id)dataForResource:(id)a0;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromData:(id)a2 withUniformTypeIdentifier:(id)a3 flushCache:(BOOL)a4;
- (struct __CVBuffer { } *)imageForResource:(id)a0 pixelFormat:(int)a1;
- (struct __CVBuffer { } *)imageForResource:(id)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 fromImageURL:(id)a1 flushCache:(BOOL)a2;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromImageURL:(id)a2;

@end
