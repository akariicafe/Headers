@interface MPSGraphCumulativeBaseOp : MPSGraphOperation {
    BOOL _exclusive;
    BOOL _reverse;
}

- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 exclusive:(BOOL)a3 reverse:(BOOL)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end
