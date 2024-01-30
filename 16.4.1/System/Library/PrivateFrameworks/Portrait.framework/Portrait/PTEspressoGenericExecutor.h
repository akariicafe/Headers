@class NSMutableDictionary, NSString, NSURL, NSObject, NSMutableArray;
@protocol MTLComputePipelineState, MTLDevice, OS_dispatch_queue, MTLCommandQueue;

@interface PTEspressoGenericExecutor : NSObject {
    void *_ctx;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSMutableDictionary *_inputsMap;
    NSMutableDictionary *_outputsMap;
    NSMutableArray *_inputConversion;
    NSMutableArray *_tensorSwap;
    NSObject<OS_dispatch_queue> *_espressoCallbackQueue;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _unInterleaveTexture;
    NSURL *_url;
    NSString *_networkVersion;
}

+ (unsigned long long)getEspressoMetalDeviceId:(id)a0;

- (unsigned int)execute;
- (unsigned int)executeAsync:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)networkVersion;
- (short)bindBuffers:(id)a0 toMap:(id)a1 withMode:(int)a2;
- (unsigned int)bindInputResourceWithName:(id)a0 to:(struct __CVBuffer { } *)a1;
- (short)bindTensorSwaps:(id)a0;
- (unsigned int)convertBindInput;
- (unsigned int)executeAsync;
- (id)getInputResourceWithName:(id)a0;
- (id)getOutputResourceWithName:(id)a0;
- (id)getResourceWithName:(id)a0 fromMap:(id)a1;
- (id)initPipelineState:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (id)initWithUrl:(id)a0 inputNames:(id)a1 outputNames:(id)a2 tensorSwapNames:(id)a3 device:(id)a4 library:(id)a5 pipelineLibrary:(id)a6 commandQueue:(id)a7 reshape:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a8 configuration:(id)a9;
- (unsigned int)tensorSwap:(int)a0;
- (id)texture2DArrayToTexture2D:(id)a0;
- (void)unInterleaveTexture:(id)a0 input:(id)a1 output:(id)a2;

@end
