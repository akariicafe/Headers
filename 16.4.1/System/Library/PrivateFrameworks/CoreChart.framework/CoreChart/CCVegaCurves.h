@interface CCVegaCurves : NSObject

+ (struct CGPath { } *)newPathForAreaWithPoints:(struct { double x0; double x1; double x2; double x3; BOOL x4; } *)a0 count:(unsigned long long)a1 interpolate:(id)a2 orient:(id)a3 tension:(double)a4;
+ (struct CGPath { } *)newPathForLineWithPoints:(struct { double x0; double x1; BOOL x2; } *)a0 count:(unsigned long long)a1 interpolate:(id)a2 orient:(id)a3 tension:(double)a4;

@end
