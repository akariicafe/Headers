@protocol MTLComputePipelineState;

@interface SyntheticLongShaders : NSObject {
    id<MTLComputePipelineState> _kernel[1];
    id<MTLComputePipelineState> _kernelWithFunctionConstant[3][256];
}

+ (BOOL)isValidFunctionConstantCombo:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;
- (id)getKernel:(int)a0;
- (id)getKernel:(int)a0 configFlags:(unsigned int)a1;

@end
