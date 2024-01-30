@class NSArray, MPSGraphTensor;

@interface MPSGraphWhileOp : MPSGraphOperation {
    id /* block */ _beforeBlock;
    id /* block */ _afterBlock;
    NSArray *_initInputTensors;
    NSArray *_beforeResult;
    NSArray *_afterResult;
    NSArray *_beforeBlockArguments;
    NSArray *_afterBlockArguments;
    MPSGraphTensor *_predicateTensor;
    MPSGraphTensor *_itersCountTensor;
    struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> { struct __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>> { struct AutodiffOpData *__value_; } __ptr_; } _opData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 beforeBlock:(id /* block */)a3 afterBlock:(id /* block */)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (void)partialDerivateForCFOpWithAutodiff:(void *)a0;
- (BOOL)recurseFromBlock:(id)a0 onEscaped:(id)a1 withAutodiff:(void *)a2;
- (BOOL)recurseOnBlocksFromOutput:(id)a0 withAutodiff:(void *)a1;
- (BOOL)recurseOutFromBlockInput:(id)a0 withAutodiff:(void *)a1;

@end
