@interface VNGeometryUtils : NSObject

+ (id)boundingCircleForContour:(id)a0 error:(id *)a1;
+ (id)boundingCircleForPoints:(id)a0 error:(id *)a1;
+ (id)boundingCircleForSIMDPoints:(const void *)a0 pointCount:(long long)a1 error:(id *)a2;
+ (BOOL)calculateArea:(double *)a0 forContour:(id)a1 orientedArea:(BOOL)a2 error:(id *)a3;
+ (BOOL)calculatePerimeter:(double *)a0 forContour:(id)a1 error:(id *)a2;

@end
