@interface TSCH3DSwitchSideAxisLabelPositioner : TSCH3DGenericAxisLabelPositioner

- (unsigned int)alignmentForChartDirection:(const void *)a0;
- (long long)p_otherAxis;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })positionForValue:(double)a0 count:(unsigned long long)a1 chartDirection:(const void *)a2;

@end
