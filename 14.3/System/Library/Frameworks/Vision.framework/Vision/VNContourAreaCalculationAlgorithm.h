@interface VNContourAreaCalculationAlgorithm : NSObject

+ (BOOL)calculateArea:(double *)a0 forContour:(id)a1 orientedArea:(BOOL)a2 error:(id *)a3;
+ (BOOL)calculateArea:(double *)a0 forContourWithSIMDPoints:(const void *)a1 pointCount:(long long)a2 orientedArea:(BOOL)a3 error:(id *)a4;

@end
