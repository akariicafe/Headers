@class NSMutableDictionary, NSURL, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, MTLDevice, MTLCommandQueue;

@interface PTEspressoGenericExecutor : NSObject {
    void *_ctx;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSMutableDictionary *_inputsMap;
    NSMutableDictionary *_outputsMap;
    NSMutableArray *_inputConversion;
    NSObject<OS_dispatch_queue> *_espressoCallbackQueue;
    int _espressoEngine;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    NSURL *_url;
    NSMutableArray *_textureNamePairs;
}

+ (unsigned long long)getEspressoMetalDeviceId:(id)a0;

- (unsigned int)execute;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)executeAsync:(id /* block */)a0;
- (id)texture2DArrayToTexture2D:(id)a0;
- (short)bindBuffers:(id)a0 toMap:(id)a1 withMode:(int)a2;
- (id)getResourceWithName:(id)a0 fromMap:(id)a1;
- (unsigned int)convertBindInput;
- (id)initWithUrl:(id)a0 inputNames:(id)a1 outputNames:(id)a2 forEngine:(int)a3 device:(id)a4 commandQueue:(id)a5 reshape:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a6 configuration:(id)a7;
- (unsigned int)bindInputResourceWithName:(id)a0 to:(struct __CVBuffer { } *)a1;
- (id)getInputResourceWithName:(id)a0;
- (id)getOutputResourceWithName:(id)a0;
- (unsigned int)executeAsync;

@end
