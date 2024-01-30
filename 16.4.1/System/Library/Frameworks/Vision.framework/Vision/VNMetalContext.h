@class NSDictionary;
@protocol MTLCommandQueue, MTLLibrary, MTLDevice;

@interface VNMetalContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    NSDictionary *_wisdomParams;
    id<MTLDevice> _device;
}

- (void).cxx_destruct;

@end
