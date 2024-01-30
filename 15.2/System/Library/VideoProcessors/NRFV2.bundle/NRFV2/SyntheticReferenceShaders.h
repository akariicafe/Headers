@protocol MTLComputePipelineState;

@interface SyntheticReferenceShaders : NSObject {
    id<MTLComputePipelineState> _kernel[0];
    id<MTLComputePipelineState> _kernelWithFunctionConstant[5][16];
}

+ (BOOL)isValidFunctionConstantCombo:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;
- (id)getKernel:(int)a0;
- (id)getKernel:(int)a0 configFlags:(unsigned int)a1;

@end
