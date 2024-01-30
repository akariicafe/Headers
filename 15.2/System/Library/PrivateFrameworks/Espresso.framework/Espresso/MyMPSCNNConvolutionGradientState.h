@interface MyMPSCNNConvolutionGradientState : MPSCNNConvolutionGradientState {
    unsigned long long _sourceWidth;
    unsigned long long _sourceHeight;
}

- (unsigned long long)sourceWidth;
- (unsigned long long)sourceHeight;

@end
