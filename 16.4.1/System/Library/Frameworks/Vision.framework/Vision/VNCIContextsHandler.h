@class NSMutableSet, NSMutableArray, NSObject;
@protocol MTLDevice, OS_dispatch_semaphore;

@interface VNCIContextsHandler : NSObject {
    id<MTLDevice> _metalDevice;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contextsLock;
    NSMutableArray *_freeContexts;
    NSMutableSet *_inUseContexts;
}

- (void).cxx_destruct;

@end
