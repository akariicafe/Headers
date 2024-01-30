@interface MPSGraphSampleGridOp : MPSGraphOperation {
    BOOL _normalizeCoordinates;
    BOOL _relativeCoordinates;
    long long _paddingMode;
    unsigned long long _samplingMode;
}

- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 normalizeCoordinates:(BOOL)a3 relativeCoordinates:(BOOL)a4 paddingMode:(long long)a5 samplingMode:(unsigned long long)a6 name:(id)a7;

@end
