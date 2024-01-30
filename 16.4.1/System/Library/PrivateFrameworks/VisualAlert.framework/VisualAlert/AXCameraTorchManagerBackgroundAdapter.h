@class NSObject;
@protocol OS_dispatch_queue, AXCameraTorchManager;

@interface AXCameraTorchManagerBackgroundAdapter : NSObject {
    NSObject<OS_dispatch_queue> *_q;
}

@property (readonly, nonatomic) id<AXCameraTorchManager> synchronousTorchManager;

- (void).cxx_destruct;
- (void)closeTorchDeviceWithCompletion:(id /* block */)a0;
- (id)initWithCameraTorchManager:(id)a0;
- (void)openTorchDeviceWithCompletion:(id /* block */)a0;
- (void)turnTorchOffWithCompletion:(id /* block */)a0;
- (void)turnTorchOnWithCompletion:(id /* block */)a0;

@end
