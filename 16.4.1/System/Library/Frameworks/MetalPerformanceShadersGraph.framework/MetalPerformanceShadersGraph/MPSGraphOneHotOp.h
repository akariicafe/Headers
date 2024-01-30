@interface MPSGraphOneHotOp : MPSGraphOperation {
    unsigned long long _depth;
    unsigned long long _axis;
    unsigned int _dataType;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 depth:(unsigned long long)a3 axis:(unsigned long long)a4 dataType:(unsigned int)a5 name:(id)a6;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end
