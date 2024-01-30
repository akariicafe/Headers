@interface VNContourPerimeterAlgorithm : NSObject

+ (BOOL)calculatePerimeter:(double *)a0 forContour:(id)a1 error:(id *)a2;
+ (BOOL)calculatePerimeter:(double *)a0 forContourWithSIMDPoints:(const void *)a1 pointCount:(long long)a2 closedContour:(BOOL)a3 error:(id *)a4;

@end
