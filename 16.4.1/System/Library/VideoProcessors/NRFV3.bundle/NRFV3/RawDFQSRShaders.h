@protocol MTLComputePipelineState;

@interface RawDFQSRShaders : NSObject {
    id<MTLComputePipelineState> _kernel[5];
    id<MTLComputePipelineState> _kernelWithFunctionConstant[1][4];
}

+ (BOOL)isValidFunctionConstantCombo:(unsigned int)a0;

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;
- (id)getKernel:(int)a0;
- (id)getKernel:(int)a0 configFlags:(unsigned int)a1;

@end
