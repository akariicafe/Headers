@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

@interface FRCMetalBase : NSObject {
    id<MTLLibrary> _mtlLibrary;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1;
- (id)createKernel:(id)a0 constantValues:(id)a1;
- (id)createKernel:(id)a0;

@end
