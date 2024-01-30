@class NSArray;

@interface MPSGraphForLoopOp : MPSGraphOperation {
    id /* block */ _bodyBlock;
    NSArray *_bodyResult;
    NSArray *_iterArgs;
    NSArray *_forBlockArguments;
    struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> { struct __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>> { struct AutodiffOpData *__value_; } __ptr_; } _opData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 bodyBlock:(id /* block */)a3 iterArgs:(id)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (void)partialDerivateForCFOpWithAutodiff:(void *)a0;
- (BOOL)recurseFromBlock:(id)a0 onEscaped:(id)a1 withAutodiff:(void *)a2;
- (BOOL)recurseOnBlocksFromOutput:(id)a0 withAutodiff:(void *)a1;
- (BOOL)recurseOutFromBlockInput:(id)a0 withAutodiff:(void *)a1;

@end
