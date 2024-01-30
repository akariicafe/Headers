@class NSArray, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLCaptureScope;

@interface RBDevice : NSObject {
    struct refcounted_ptr<RB::Device> { struct Device *_p; } _device;
    struct objc_ptr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_p; } _queue;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _pending_collect;
}

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;
@property (class, readonly, copy) NSArray *allDevices;
@property (class, readonly, nonatomic) RBDevice *sharedDefaultDevice;

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<MTLCaptureScope> captureScope;

+ (id)sharedDevice:(id)a0;

- (id)pipelineDescriptions:(id)a0 extraColorFormats:(id)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)collectResources;
- (void)dealloc;
- (id).cxx_construct;

@end
