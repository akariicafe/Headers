@interface MPSGraphScatterAlongAxisOp : MPSGraphOperation {
    long long _mode;
}

- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 mode:(long long)a3 name:(id)a4;

@end
