@class NSNumber, MPSGraphType;

@interface MPSGraphMakeListOp : MPSGraphOperation {
    MPSGraphType *_elementType;
    NSNumber *_maxSize;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 elementType:(id)a3 maxSize:(id)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end
