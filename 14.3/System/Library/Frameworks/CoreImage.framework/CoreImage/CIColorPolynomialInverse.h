@interface CIColorPolynomialInverse : CIColorPolynomial

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelRGB;
- (BOOL)_isInvertible;

@end
