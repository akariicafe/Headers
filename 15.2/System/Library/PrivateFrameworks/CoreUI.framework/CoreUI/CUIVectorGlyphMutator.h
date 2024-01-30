@interface CUIVectorGlyphMutator : NSObject

@property (nonatomic) struct CGPath { } *originPath;
@property (nonatomic) double pointSize;
@property (nonatomic) struct { double *pointComponents; unsigned long long numPoints; } originPoints;
@property (nonatomic) struct { double *deltaComponents; unsigned long long numDeltas; } ultralightDeltas;
@property (nonatomic) struct { double *deltaComponents; unsigned long long numDeltas; } blackDeltas;

+ (struct { double *x0; unsigned long long x1; })pointArrayFromPath:(struct CGPath { } *)a0;
+ (struct { double *x0; unsigned long long x1; })deltaArrayFrom:(struct { double *x0; unsigned long long x1; })a0 to:(struct { double *x0; unsigned long long x1; })a1;
+ (double *)realloc_cgfloat_array:(double *)a0 withNewCount:(unsigned long long)a1;
+ (struct { double x0; double x1; })transformForGlyphSize:(long long)a0;
+ (struct { double x0; double x1; })scalarsForGlyphWeight:(long long)a0 glyphSize:(long long)a1;

- (struct { double *x0; unsigned long long x1; })applyDeltasWithScalars:(struct { double x0; double x1; })a0 andTransform:(struct { double x0; double x1; })a1;
- (struct { double *x0; unsigned long long x1; })applyDeltasWithScalars:(struct { double x0; double x1; })a0;
- (struct CGPath { } *)cgPathFrom:(struct { double *x0; unsigned long long x1; })a0;
- (id)initWithPointSize:(double)a0 regular:(struct CGPath { } *)a1 ultralight:(struct CGPath { } *)a2 black:(struct CGPath { } *)a3;
- (struct CGPath { } *)pathForScalars:(struct { double x0; double x1; })a0;
- (struct CGPath { } *)pathForScalars:(struct { double x0; double x1; })a0 andTransform:(struct { double x0; double x1; })a1;
- (void)dealloc;

@end
