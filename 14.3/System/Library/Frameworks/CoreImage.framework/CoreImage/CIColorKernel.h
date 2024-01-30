@interface CIColorKernel : CIKernel

@property (nonatomic) BOOL perservesAlpha;

+ (id)SDOFV3MetalKernelNamed:(id)a0;
+ (id)kernelWithString:(id)a0;
+ (id)SDOFV2MetalKernelNamed:(id)a0;

- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arguments:(id)a1 options:(id)a2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2 options:(id)a3;
- (BOOL)preservesRange;
- (BOOL)canReduceOutputChannels;
- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType> > { int *x0; int *x1; struct __compressed_pair<CI::KernelArgumentType *, std::__1::allocator<CI::KernelArgumentType> > { int *x0; } x2; } x4; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; })a0 constants:(id)a1 constantTypes:(id)a2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2;
- (void)setPreservesRange:(BOOL)a0;
- (void)setCanReduceOutputChannels:(BOOL)a0;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arguments:(id)a1;
- (id)initWithString:(id)a0;

@end
