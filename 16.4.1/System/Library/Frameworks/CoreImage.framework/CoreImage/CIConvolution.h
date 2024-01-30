@class CIImage, NSArray, NSNumber;

@interface CIConvolution : CIFilter {
    CIImage *inputImage;
    NSArray *inputPoints;
    NSArray *inputWeights;
    NSNumber *inputLinearFilterModeEnabled;
}

- (id)outputImage;
- (id)doConvolutionPass:(id)a0 weights:(id)a1 sums:(id)a2;
- (id)_CIConvolutionAdd_1;
- (id)_CIConvolutionAdd_2;
- (id)_CIConvolutionAdd_3;
- (id)_CIConvolutionAdd_4;
- (id)_CIConvolutionAdd_5;
- (id)_CIConvolutionAdd_6;
- (id)_CIConvolutionAdd_7;
- (id)_CIConvolutionAdd_8;
- (int)samplesPerPass;

@end
