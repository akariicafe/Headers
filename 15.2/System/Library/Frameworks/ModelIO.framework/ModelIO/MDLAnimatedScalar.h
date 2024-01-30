@interface MDLAnimatedScalar : MDLAnimatedValue

- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (float)floatAtTime:(double)a0;
- (double)doubleAtTime:(double)a0;
- (unsigned long long)getFloatArray:(float *)a0 maxCount:(unsigned long long)a1;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (unsigned long long)getDoubleArray:(double *)a0 maxCount:(unsigned long long)a1;
- (void)setFloat:(float)a0 atTime:(double)a1;
- (void)setDouble:(double)a0 atTime:(double)a1;
- (void)resetWithFloatArray:(const float *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithDoubleArray:(const double *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;

@end
