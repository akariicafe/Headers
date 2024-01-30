@interface MPSGraphSliceOp : MPSGraphOperation {
    long long _dimensionIndex;
    long long _start;
    long long _length;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 dimension:(unsigned long long)a3 start:(long long)a4 length:(long long)a5 name:(id)a6;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
