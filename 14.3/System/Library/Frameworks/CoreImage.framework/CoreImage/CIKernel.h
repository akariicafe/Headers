@class NSString;

@interface CIKernel : NSObject {
    void *_priv;
}

@property (nonatomic) BOOL perservesAlpha;
@property (nonatomic) BOOL canReduceOutputChannels;
@property (nonatomic) BOOL preservesRange;
@property (nonatomic) struct CGSize { double x0; double x1; } outputGroupSize;
@property (readonly) NSString *name;

+ (id)allocForType:(int)a0;
+ (id)kernelsWithString:(id)a0 messageLog:(id)a1;
+ (id)kernelsWithString:(id)a0 andMetalLibrary:(id)a1 messageLog:(id)a2;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)kernelsWithString:(id)a0 fromMetalLibraryData:(id)a1;
+ (id)kernelsWithString:(id)a0;
+ (id)kernelWithString:(id)a0 fromMetalLibraryData:(id)a1;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 error:(id *)a2;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 outputPixelFormat:(int)a2 error:(id *)a3;
+ (id)kernelNamesFromMetalLibraryData:(id)a0;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 outputGroupSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
+ (id)colorMatrixBiasKernel;
+ (id)kernelWithFunctionName:(id)a0 fromMetalLibraryData:(id)a1 constants:(id)a2 error:(id *)a3;
+ (id)redEyeMetalKernelWithFunctionName:(id)a0 fromMetalLibraryURL:(id)a1 outputPixelFormat:(int)a2 error:(id *)a3;
+ (id)redEyeMetalKernelWithFunctionName:(id)a0 fromMetalLibraryURL:(id)a1 error:(id *)a2;
+ (id)SDOFV3MetalKernelNamed:(id)a0;
+ (id)kernelWithString:(id)a0;
+ (id)redEyeMetalKernelWithFunctionName:(id)a0 outputPixelFormat:(int)a1 error:(id *)a2;
+ (id)redEyeMetalKernelWithFunctionName:(id)a0 error:(id *)a1;
+ (id)SDOFV2MetalKernelNamed:(id)a0;

- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType> > { int *x0; int *x1; struct __compressed_pair<CI::KernelArgumentType *, std::__1::allocator<CI::KernelArgumentType> > { int *x0; } x2; } x4; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; })a0;
- (SEL)ROISelector;
- (int)_outputFormatUsingDictionary:(id)a0 andKernel:(struct Kernel { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; char *x2; char *x3; BOOL x4; struct SerialIntArray *x5; struct SerialStringArray *x6; struct __CFString *x7; int x8; int x9; struct ISize { unsigned long long x0; unsigned long long x1; } x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; } *)a1;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2 options:(id)a3;
- (void)setROISelector:(SEL)a0;
- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; struct vector<CI::KernelArgumentType, std::__1::allocator<CI::KernelArgumentType> > { int *x0; int *x1; struct __compressed_pair<CI::KernelArgumentType *, std::__1::allocator<CI::KernelArgumentType> > { int *x0; } x2; } x4; struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; })a0 constants:(id)a1 constantTypes:(id)a2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2;
- (BOOL)_isValidOutputPixelFormat:(int)a0;
- (id)_initWithString:(id)a0 usingCruftCompatibility:(BOOL)a1;
- (void *)_internalRepresentation;
- (id)_initWithInternalRepresentation:(void *)a0;
- (id)parameters;
- (id)init;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (id)description;
- (void)finalize;
- (id)_initWithString:(id)a0 andMetalLibrary:(id)a1 usingCruftCompatibility:(BOOL)a2;
- (id)debugDescription;

@end
