@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

@interface FRCMetalBase : NSObject {
    id<MTLLibrary> _mtlLibrary;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)createKernel:(id)a0;
- (id)createKernel:(id)a0 constantValues:(id)a1;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;

@end
