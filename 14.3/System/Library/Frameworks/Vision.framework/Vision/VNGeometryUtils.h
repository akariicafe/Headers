@interface VNGeometryUtils : NSObject

+ (id)boundingCircleForPoints:(id)a0 error:(id *)a1;
+ (id)boundingCircleForSIMDPoints:(const void *)a0 pointCount:(long long)a1 aspectRatioForCentroid:(float)a2 error:(id *)a3;
+ (id)boundingCircleForContour:(id)a0 error:(id *)a1;
+ (BOOL)calculateArea:(double *)a0 forContour:(id)a1 orientedArea:(BOOL)a2 error:(id *)a3;
+ (BOOL)calculateArea:(double *)a0 forContourWithSIMDPoints:(const void *)a1 pointCount:(long long)a2 orientedArea:(BOOL)a3 error:(id *)a4;
+ (BOOL)calculatePerimeter:(double *)a0 forContour:(id)a1 error:(id *)a2;
+ (BOOL)calculatePerimeter:(double *)a0 forContourWithSIMDPoints:(const void *)a1 pointCount:(long long)a2 closedContour:(BOOL)a3 error:(id *)a4;
+ (id)boundingCircleForSIMDPoints:(const void *)a0 pointCount:(long long)a1 error:(id *)a2;

@end
