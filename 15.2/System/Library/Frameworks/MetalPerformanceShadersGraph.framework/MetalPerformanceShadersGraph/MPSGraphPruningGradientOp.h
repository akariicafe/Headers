@class NSArray, MPSGraphPruningDescriptor;

@interface MPSGraphPruningGradientOp : MPSGraphOperation {
    MPSGraphPruningDescriptor *_pruningDesc;
    NSArray *_shape;
}

- (void).cxx_destruct;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 shape:(id)a3 descriptor:(id)a4 name:(id)a5;

@end
