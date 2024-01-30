@class NSHashTable, NSLock, CIContext;
@protocol MTLDevice;

@interface VNImageBufferManager : NSObject {
    CIContext *mainCIContext;
    id<MTLDevice> mainCIContextMetalDevice;
    CIContext *lowPriorityCIContext;
    id<MTLDevice> lowPriorityCIContextMetalDevice;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}

+ (id)manager;

- (void)addImageBuffer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sharedCIContextWithOptions:(id)a0;
- (void)removeBuffer:(id)a0;
- (void)purgeAllCaches;

@end
