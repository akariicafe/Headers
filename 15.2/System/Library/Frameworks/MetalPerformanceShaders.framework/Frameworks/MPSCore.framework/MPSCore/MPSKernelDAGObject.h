@class NSArray, NSMutableDictionary, NSMutableArray;

@interface MPSKernelDAGObject : NSObject {
    struct shared_ptr<MPSKernelDAG> { struct MPSKernelDAG *__ptr_; struct __shared_weak_count *__cntrl_; } _kernelDAGSharedPtr;
    NSArray *_stitchedFunctions;
    NSMutableDictionary *_functions;
    NSMutableArray *_functionNames;
    BOOL _keepSubDAGArray[5];
}

@property (readonly, nonatomic) void *finalOp;
@property (readonly, nonatomic) void *graph;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ hash;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)debugDescription;
- (const void *)inputTensorAtIndex:(unsigned long long)a0;
- (const void *)outputTensorAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfInputTensors;
- (unsigned long long)numberOfOutputTensors;
- (id)initWithKernelDAG:(void *)a0 finalOp:(void *)a1;
- (id)getStitchedFunctions:(id)a0;
- (BOOL)hasPostfixFunction;

@end
