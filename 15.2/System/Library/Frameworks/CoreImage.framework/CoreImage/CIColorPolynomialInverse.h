@interface CIColorPolynomialInverse : CIColorPolynomial

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (id)_kernelRGB;
- (BOOL)_isInvertible;

@end
