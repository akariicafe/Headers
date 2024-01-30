@interface MPSGraphInitRandomPhiloxStateOp : MPSGraphOperation {
    unsigned long long _counterLow;
    unsigned long long _counterHigh;
    unsigned long long _key;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 counterLow:(unsigned long long)a3 counterHigh:(unsigned long long)a4 key:(unsigned long long)a5 name:(id)a6;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end
