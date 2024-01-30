@interface CIWarpKernel : CIKernel

@property (nonatomic) BOOL perservesAlpha;
@property (nonatomic) BOOL preservesRange;

+ (id)kernelWithString:(id)a0;

- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2 options:(id)a3;
- (BOOL)canReduceOutputChannels;
- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType> > { int *x0; int *x1; struct __compressed_pair<CI::KernelArgumentType *, std::__1::allocator<CI::KernelArgumentType> > { int *x0; } x2; } x4; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; })a0 constants:(id)a1 constantTypes:(id)a2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2;
- (void)setCanReduceOutputChannels:(BOOL)a0;
- (id)makeGridImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nx:(int)a1 ny:(int)a2;
- (id)initWithString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autogenerateROI:(struct WarpKernel { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; char *x2; char *x3; BOOL x4; struct SerialIntArray *x5; struct SerialStringArray *x6; struct __CFString *x7; int x8; int x9; struct ISize { unsigned long long x0; unsigned long long x1; } x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; void /* function */ **x17; } *)a0 args:(struct SerialObjectPtrArray { int x0; int x1; int x2; void **x3; } *)a1 arguments:(id)a2 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 inputImage:(id)a2 arguments:(id)a3 options:(id)a4;
- (id)generateMainFromWarpKernel:(struct WarpKernel { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; char *x2; char *x3; BOOL x4; struct SerialIntArray *x5; struct SerialStringArray *x6; struct __CFString *x7; int x8; int x9; struct ISize { unsigned long long x0; unsigned long long x1; } x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; void /* function */ **x17; } *)a0 args:(struct SerialObjectPtrArray { int x0; int x1; int x2; void **x3; } *)a1;
- (id)generateGeneralKernelFromWarpKernel:(struct WarpKernel { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; char *x2; char *x3; BOOL x4; struct SerialIntArray *x5; struct SerialStringArray *x6; struct __CFString *x7; int x8; int x9; struct ISize { unsigned long long x0; unsigned long long x1; } x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; void /* function */ **x17; } *)a0 args:(struct SerialObjectPtrArray { int x0; int x1; int x2; void **x3; } *)a1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 inputImage:(id)a2 arguments:(id)a3;

@end
