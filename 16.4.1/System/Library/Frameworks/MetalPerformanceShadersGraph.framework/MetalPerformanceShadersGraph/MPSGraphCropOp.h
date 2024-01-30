@interface MPSGraphCropOp : MPSGraphOperation {
    unsigned long long _amount_before;
    unsigned long long _amount_after;
    long long _dimensionIndex;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 dimension_index:(long long)a3 amount_before:(unsigned long long)a4 amount_after:(unsigned long long)a5 name:(id)a6;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
