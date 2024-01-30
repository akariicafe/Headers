@interface TSCH3DChartPieResizer : TSCH3DChartResizer {
    struct tvec2<bool> { union { BOOL x; BOOL r; BOOL s; } ; union { BOOL y; BOOL g; BOOL t; } ; } mDirections;
}

+ (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })adjustLabelWrapSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
+ (float)perspectiveness;

- (id).cxx_construct;
- (void)setScale:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })adjust:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0 by:(float)a1;
- (struct tvec2<bool> { union { BOOL x0; BOOL x1; BOOL x2; } x0; union { BOOL x0; BOOL x1; BOOL x2; } x1; })canImprove;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })updateResizerFromRequestedSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0 startingSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a1;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })squareSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })updateDirectionsFromRequestedSize:(const struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0 startingSize:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a1;

@end
