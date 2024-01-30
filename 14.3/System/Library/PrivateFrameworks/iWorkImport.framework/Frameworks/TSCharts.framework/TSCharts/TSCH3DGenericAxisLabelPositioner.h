@interface TSCH3DGenericAxisLabelPositioner : NSObject <TSCH3DAxisLabelPositioner> {
    struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } mRange;
    unsigned long long mAxis;
    float mOffset;
    unsigned int mAlignment;
}

+ (id)vertical;
+ (id)horizontal;
+ (id)horizontalWithRange:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
+ (id)verticalWithRange:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0;
+ (id)horizontalWithRange:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0 offset:(float)a1;
+ (id)verticalWithRange:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a0 offset:(float)a1;

- (id)init;
- (BOOL)hasOffset;
- (id).cxx_construct;
- (BOOL)isHorizontal;
- (unsigned int)alignmentForChartDirection:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })positionForValue:(double)a0 count:(unsigned long long)a1 chartDirection:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a2;
- (float)labelGapForCount:(unsigned long long)a0;
- (id)initWithAxis:(long long)a0 alignment:(unsigned int)a1 offset:(float)a2 range:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } *)a3;

@end
