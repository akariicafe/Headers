@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLCaptureScope;

@interface RBDevice : NSObject <RBImageRenderer> {
    struct refcounted_ptr<RB::Device> { struct Device *_p; } _device;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _pending_collect;
}

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;
@property (class, readonly, copy) NSArray *allDevices;
@property (class, readonly, nonatomic) RBDevice *sharedDefaultDevice;

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<MTLCaptureScope> captureScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)willEnterForeground:(id)a0;
+ (void)didEnterBackground:(id)a0;
+ (id)sharedDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void)collectResources;
- (id).cxx_construct;
- (void)dealloc;
- (struct CGImage { } *)renderImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 renderer:(id /* block */)a2;
- (void)renderImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 renderer:(id /* block */)a2 completionQueue:(id)a3 handler:(id /* block */)a4;
- (id)pipelineDescriptions:(id)a0 extraColorFormats:(id)a1;
- (void).cxx_destruct;

@end
