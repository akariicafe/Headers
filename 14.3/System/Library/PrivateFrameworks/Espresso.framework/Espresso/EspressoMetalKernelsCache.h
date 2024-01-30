@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol MTLLibrary, MTLDevice, OS_dispatch_queue;

@interface EspressoMetalKernelsCache : NSObject {
    id<MTLLibrary> m_ShaderLibrary;
    id<MTLLibrary> m_DefaultLibrary;
    id<MTLDevice> _device;
    BOOL isSupportingiOSGPUFamilyV2;
    NSObject<OS_dispatch_queue> *dictionary_write_queue;
    NSMutableDictionary *auxLibraries;
    NSMutableDictionary *m_kernelCache_rw;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } setup_mutex;
}

@property (retain) NSDictionary *m_kernelCache;
@property (retain, nonatomic) NSString *kernelPrefix;

- (BOOL)wasSetup;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)kernelForFunction:(const char *)a0 cacheString:(const char *)a1 withConstants:(id)a2;
- (void)loadLibraryNamed:(id)a0;
- (void)lazySetup;
- (BOOL)shouldUseTexArray;
- (id).cxx_construct;
- (id)kernelForFunction:(const char *)a0;
- (void)addLibraryAtPath:(id)a0;

@end
