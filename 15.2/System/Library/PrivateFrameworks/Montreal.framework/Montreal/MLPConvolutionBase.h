@interface MLPConvolutionBase : MLPImageLayer

@property unsigned long long kernelWidth;
@property unsigned long long kernelHeight;
@property unsigned long long kernelStride;

- (unsigned long long)computeOutputLengthWithInputLength:(long long)a0 kernelWidth:(long long)a1 kernelStride:(long long)a2;

@end
