@interface CIColorPolynomialInverse : CIColorPolynomial

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (BOOL)_isInvertible;
- (id)_kernelRGB;

@end
