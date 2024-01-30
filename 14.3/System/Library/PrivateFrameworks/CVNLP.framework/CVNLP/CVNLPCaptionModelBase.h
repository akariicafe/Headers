@class CVNLPCaptionPerformance, CVNLPCaptionRuntimeParameters;

@interface CVNLPCaptionModelBase : NSObject

@property (readonly, nonatomic) CVNLPCaptionPerformance *perfResults;
@property (readonly, nonatomic) CVNLPCaptionRuntimeParameters *runTimeParams;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 runTimeParams:(id)a1;
- (void)_copy_data_from_blob:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 to:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a1;
- (unsigned long long)_blob_size:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0;
- (void)_copy_data_from_blob:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 toPtr:(float *)a1;
- (void)_copy_data_to_blob:(float *)a0 to:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a1;
- (void)_copy_data_to_blob_repeated:(id)a0 to:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a1;
- (id)performanceResults;

@end
