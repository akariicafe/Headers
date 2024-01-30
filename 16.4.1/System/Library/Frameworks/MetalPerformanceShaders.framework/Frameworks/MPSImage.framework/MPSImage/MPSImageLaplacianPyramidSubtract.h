@interface MPSImageLaplacianPyramidSubtract : MPSImageLaplacianPyramid

- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)initWithDevice:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 weights:(const float *)a3;

@end
