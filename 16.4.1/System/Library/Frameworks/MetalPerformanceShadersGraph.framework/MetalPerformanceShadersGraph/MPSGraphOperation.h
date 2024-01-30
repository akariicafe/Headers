@class MPSGraphBlock, NSArray, NSMutableDictionary, MPSGraph, NSString, NSMutableArray, MPSGraphRegion;

@interface MPSGraphOperation : NSObject <NSCopying> {
    NSMutableArray *_controlDependencies;
    MPSGraphRegion *_region;
    MPSGraphBlock *_parentBlock;
    void *_mlirOperation;
}

@property (nonatomic) BOOL pruneOp;
@property (retain, nonatomic) NSMutableDictionary *tensorNameDict;
@property (nonatomic) BOOL stopGradient;
@property (readonly, nonatomic) NSArray *inputTensors;
@property (readonly, nonatomic) NSArray *outputTensors;
@property (readonly, nonatomic) NSArray *controlDependencies;
@property (readonly, weak, nonatomic) MPSGraph *graph;
@property (readonly, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initInternal;
- (id)init;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 name:(id)a3;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 region:(id)a3 name:(id)a4;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;
- (void)partialDerivateForCFOpWithAutodiff:(struct Autodiff { } *)a0;
- (id)partialDerivativeForInputTensor:(id)a0 incomingGradient:(id)a1 inputIndex:(unsigned long long)a2 name:(id)a3;
- (id)partialDerivativesForInputTensors:(id)a0 incomingGradients:(id)a1 name:(id)a2;
- (BOOL)recurseFromBlock:(id)a0 onEscaped:(id)a1 withAutodiff:(struct Autodiff { } *)a2;
- (BOOL)recurseOnBlocksFromOutput:(id)a0 withAutodiff:(struct Autodiff { } *)a1;
- (BOOL)recurseOutFromBlockInput:(id)a0 withAutodiff:(struct Autodiff { } *)a1;

@end
