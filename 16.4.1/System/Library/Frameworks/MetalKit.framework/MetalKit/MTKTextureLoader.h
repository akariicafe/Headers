@class NSObject;
@protocol MTLDeviceSPI, MTLDevice, TXRBufferAllocator, OS_dispatch_semaphore, OS_dispatch_queue, MTLCommandQueue;

@interface MTKTextureLoader : NSObject {
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSObject<OS_dispatch_semaphore> *_loadSemaphore;
    id<MTLCommandQueue> _blitQueue;
    id<TXRBufferAllocator> _bufferAllocator;
    id<MTLDeviceSPI> _device;
}

@property (readonly, nonatomic) id<MTLDevice> device;

- (id)initWithDevice:(id)a0;
- (id)newTextureWithName:(id)a0 scaleFactor:(double)a1 bundle:(id)a2 options:(id)a3 error:(id *)a4;
- (id)newUploaderForOptions:(id)a0;
- (void)_loadCGImage:(struct CGImage { } *)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)newTextureWithData:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_newSyncTexturesFromTXRTextures:(id)a0 labels:(id)a1 options:(id)a2 error:(id *)a3;
- (void)_newAsyncTextureWithNames:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 bundle:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)_loadMDLTexture:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)newTexturesWithContentsOfURLs:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)newTexturesWithNames:(id)a0 scaleFactor:(double)a1 bundle:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (id)newTexturesWithContentsOfURLs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)newTextureFromTXRTexture:(id)a0 options:(id)a1 error:(id *)a2;
- (void)newTextureWithContentsOfURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)newTextureWithContentsOfURL:(id)a0 options:(id)a1 error:(id *)a2;
- (void)newTexturesWithNames:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 bundle:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (id)newTextureWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 bundle:(id)a3 options:(id)a4 error:(id *)a5;
- (void)newTextureWithName:(id)a0 scaleFactor:(double)a1 bundle:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)dealloc;
- (void)_loadData:(id)a0 options:(id)a1 uploader:(id)a2 label:(id)a3 completionHandler:(id /* block */)a4;
- (void)newTextureWithCGImage:(struct CGImage { } *)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)newTexturesFromTXRTextures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)newTextureWithName:(id)a0 scaleFactor:(double)a1 displayGamut:(long long)a2 bundle:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)_loadData:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)validateGenerateMipmapsForPixelFormat:(unsigned long long)a0 options:(id)a1 error:(id *)a2;
- (void)newTextureWithData:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)newTextureWithMDLTexture:(id)a0 options:(id)a1 error:(id *)a2;
- (unsigned long long)_determineFileType:(id)a0;
- (id)newTextureWithCGImage:(struct CGImage { } *)a0 options:(id)a1 error:(id *)a2;
- (void)newTextureWithMDLTexture:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

@end
