@interface MPSGraphRandomTruncatedNormalOp : MPSGraphOperation {
    unsigned int _dataType;
    unsigned long long _samplingMethod;
    float _mean;
    float _standardDeviation;
    float _maximum;
    float _minimum;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 descriptor:(id)a3 name:(id)a4;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;

@end
