@class NSString;
@protocol MTLComputePipelineState;

@interface ForwardDmShader : NSObject {
    NSString *_computeKernelName;
    id<MTLComputePipelineState> _computePipeline;
}

- (void).cxx_destruct;
- (id)getComputePipeLineStateForDevice:(id)a0 Library:(id)a1;
- (id)getComputePipeLineStateForDevice:(id)a0 Library:(id)a1 Constants:(BOOL *)a2 ConstantNumber:(unsigned int)a3;
- (id)initShaderWithName:(id)a0;

@end
