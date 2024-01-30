@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPImageManager : NSObject {
    struct CMPhotoCompressionSession { } *_encodeSession;
    struct CMPhotoDecompressionSession { } *_decodeSession;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    NSObject<OS_dispatch_queue> *_transcodeQueue;
}

+ (id)sharedImageManager;
+ (BOOL)allowFastPathDecodeWithUniformType:(id)a0 pixelWidth:(unsigned long long)a1 andPixelHeight:(unsigned long long)a2;
+ (BOOL)canDecodeAcceleratedUniformTypeIdentifier:(id)a0;
+ (BOOL)_exportReencodedJPEG;
+ (BOOL)loggingEnabled;

- (int)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(int)a2 pixelBuffer:(struct __CVBuffer **)a3;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 fromImageURL:(id)a1 flushCache:(BOOL)a2 orientation:(unsigned int *)a3;
- (struct __CVBuffer { } *)imageForResource:(id)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2;
- (struct __CVBuffer { } *)imageForResource:(id)a0 pixelFormat:(int)a1;
- (int)drawImage:(struct CGImage { } *)a0 pixelFormat:(int)a1 withOrientation:(unsigned int)a2 maxDimension:(unsigned long long)a3 pixelBuffer:(struct __CVBuffer **)a4;
- (int)compressCVPixelBuffer:(struct __CVBuffer { } *)a0 toJPEGData:(id *)a1 targetBitStreamLength:(unsigned long long)a2 padding:(BOOL)a3;
- (id)dataForResource:(id)a0;
- (void).cxx_destruct;
- (void)flushCache;
- (int)decodeImageSource:(struct CGImageSource { } *)a0 withUniformTypeIdentifier:(id)a1 pixelFormat:(int)a2 maxDimension:(unsigned long long)a3 orientation:(unsigned int *)a4 pixelBuffer:(struct __CVBuffer **)a5;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromData:(id)a2 withUniformTypeIdentifier:(id)a3 flushCache:(BOOL)a4 orientation:(unsigned int *)a5;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromImageURL:(id)a2;
- (id)init;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 fromImageURL:(id)a1 flushCache:(BOOL)a2;
- (struct __CVBuffer { } *)pixelBufferWithFormat:(int)a0 andMaxDimension:(unsigned long long)a1 fromImageURL:(id)a2 orientation:(unsigned int *)a3;
- (int)acceleratedDecodeImageData:(id)a0 pixelFormat:(int)a1 maxDimension:(unsigned long long)a2 pixelBuffer:(struct __CVBuffer **)a3 orientation:(unsigned int *)a4 flushCache:(BOOL)a5;
- (void)dealloc;
- (int)convertPixelBuffer:(struct __CVBuffer **)a0 toPixelFormat:(int)a1;

@end
