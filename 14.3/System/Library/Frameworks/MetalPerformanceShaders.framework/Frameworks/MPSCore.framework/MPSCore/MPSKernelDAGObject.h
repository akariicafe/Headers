@class NSArray, NSMutableDictionary, NSMutableArray;

@interface MPSKernelDAGObject : NSObject {
    struct shared_ptr<MPSKernelDAG> { struct MPSKernelDAG *__ptr_; struct __shared_weak_count *__cntrl_; } _kernelDAGSharedPtr;
    NSArray *_stitchedFunctions;
    NSMutableDictionary *_functions;
    NSMutableArray *_functionNames;
    BOOL _keepSubDAGArray[5];
}

@property (readonly, nonatomic) struct MPSDAGKernelOp { void /* function */ **x0; struct vector<BaseTensor *, std::__1::allocator<BaseTensor *> > *x1; struct vector<BaseOperation *, std::__1::allocator<BaseOperation *> > *x2; struct vector<BaseTensor *, std::__1::allocator<BaseTensor *> > *x3; struct BaseGraph *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x6; BOOL x7; int x8; unsigned long long x9; } *finalOp;
@property (readonly, nonatomic) struct MPSKernelDAG { void /* function */ **x0; struct vector<BaseTensor *, std::__1::allocator<BaseTensor *> > *x1; struct vector<BaseOperation *, std::__1::allocator<BaseOperation *> > *x2; struct vector<BaseTensor *, std::__1::allocator<BaseTensor *> > *x3; struct BaseGraph *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x5; struct vector<BaseOperation *, std::__1::allocator<BaseOperation *> > *x6; struct vector<MPSDAGKernelOp *, std::__1::allocator<MPSDAGKernelOp *> > *x7; struct vector<MPSDAGKernelOp *, std::__1::allocator<MPSDAGKernelOp *> > *x8; } *graph;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ hash;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)debugDescription;
- (const struct BaseTensor { unsigned long long x0; unsigned int x1; struct vector<long, std::__1::allocator<long> > *x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct BaseOperation *x4; struct vector<BaseOperation *, std::__1::allocator<BaseOperation *> > *x5; } *)inputTensorAtIndex:(unsigned long long)a0;
- (const struct BaseTensor { unsigned long long x0; unsigned int x1; struct vector<long, std::__1::allocator<long> > *x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x3; struct BaseOperation *x4; struct vector<BaseOperation *, std::__1::allocator<BaseOperation *> > *x5; } *)outputTensorAtIndex:(unsigned long long)a0;
- (id)initWithKernelDAG:(struct shared_ptr<MPSKernelDAG> { struct MPSKernelDAG *x0; struct __shared_weak_count *x1; } *)a0 finalOp:(struct MPSDAGKernelOp { void /* function */ **x0; struct vector<BaseTensor *, std::__1::allocator<BaseTensor *> > *x1; struct vector<BaseOperation *, std::__1::allocator<BaseOperation *> > *x2; struct vector<BaseTensor *, std::__1::allocator<BaseTensor *> > *x3; struct BaseGraph *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x6; BOOL x7; int x8; unsigned long long x9; } *)a1;
- (id)getStitchedFunctions:(id)a0;
- (BOOL)hasPostfixFunction;
- (id)initKernelDAGWithObject:(id)a0 keepPrimaryPrefix:(BOOL)a1 keepSecondaryPrefix:(BOOL)a2 keepTertiaryPrefix:(BOOL)a3 keepQuaternaryPrefix:(BOOL)a4 keepPrimaryPostfix:(BOOL)a5;

@end
