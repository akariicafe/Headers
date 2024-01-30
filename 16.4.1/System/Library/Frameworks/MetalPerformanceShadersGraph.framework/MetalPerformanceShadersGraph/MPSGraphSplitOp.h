@interface MPSGraphSplitOp : MPSGraphOperation {
    long long _dimensionIndex;
    unsigned long long _numSplits;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 dimension:(long long)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 dimension:(long long)a3 numSplits:(unsigned long long)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativesForInputTensors:(id)a0 incomingGradients:(id)a1 name:(id)a2;

@end
