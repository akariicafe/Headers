@class NSLock, NSHashTable, CIContext;
@protocol MTLDevice;

@interface VNImageBufferManager : NSObject {
    CIContext *mainCIContext;
    id<MTLDevice> mainCIContextMetalDevice;
    CIContext *lowPriorityCIContext;
    id<MTLDevice> lowPriorityCIContextMetalDevice;
    NSLock *ciContextLock;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}

+ (id)manager;

- (id)sharedCIContextWithOptions:(id)a0;
- (void)purgeAllCaches;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
