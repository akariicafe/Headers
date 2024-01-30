@interface MPSGraphTransposeOp : MPSGraphOperation {
    unsigned long long _dimensionIndex;
    unsigned long long _dimensionIndex2;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 dimension:(unsigned long long)a3 withDimension:(unsigned long long)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
