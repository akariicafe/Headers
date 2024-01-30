@class NSArray;

@interface MPSGraphPermuteOp : MPSGraphOperation {
    NSArray *_permute;
}

- (void).cxx_destruct;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 permute:(id)a3 name:(id)a4;

@end
