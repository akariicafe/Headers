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

- (id)sharedCIContextWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)purgeAllCaches;

@end
