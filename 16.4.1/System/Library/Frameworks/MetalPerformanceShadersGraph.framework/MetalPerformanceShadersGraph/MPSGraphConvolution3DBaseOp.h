@class MPSGraphConvolution3DOpDescriptor;

@interface MPSGraphConvolution3DBaseOp : MPSGraphOperation {
    MPSGraphConvolution3DOpDescriptor *_desc;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 descriptor:(id)a3 name:(id)a4;

@end
