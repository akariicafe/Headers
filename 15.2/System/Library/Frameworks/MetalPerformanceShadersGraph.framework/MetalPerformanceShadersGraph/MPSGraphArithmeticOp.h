@interface MPSGraphArithmeticOp : MPSGraphOperation {
    unsigned long long _mathOpType;
}

- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;
- (id)broadcastGradWithOutputGradient:(id)a0 inputIndex:(unsigned long long)a1 name:(id)a2;
- (id)broadcastGradTernaryWithOutputGradient:(id)a0 inputIndex:(unsigned long long)a1 name:(id)a2;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 mathOpType:(unsigned long long)a3 name:(id)a4;

@end
