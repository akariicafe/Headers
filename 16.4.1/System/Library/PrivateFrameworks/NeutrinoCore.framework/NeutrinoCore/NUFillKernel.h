@interface NUFillKernel : NUComputeKernel

@property (nonatomic) struct { double red; double green; double blue; double alpha; } color;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } region;

+ (void)fillTexture:(id)a0 color:(struct { double x0; double x1; double x2; double x3; })a1 withCommandBuffer:(id)a2;
+ (void)fillTexture:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 color:(struct { double x0; double x1; double x2; double x3; })a2 withCommandBuffer:(id)a3;

- (void)encodeToCommandBuffer:(id)a0 destinationTexture:(id)a1;

@end
