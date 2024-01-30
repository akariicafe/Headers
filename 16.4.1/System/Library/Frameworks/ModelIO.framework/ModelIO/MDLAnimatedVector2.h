@interface MDLAnimatedVector2 : MDLAnimatedValue

- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (void /* unknown type, empty encoding */)double2AtTime:(double)a0;
- (void /* unknown type, empty encoding */)float2AtTime:(double)a0;
- (unsigned long long)getDouble2Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getFloat2Array:(void *)a0 maxCount:(unsigned long long)a1;
- (void)resetWithDouble2Array:(const void *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithFloat2Array:(const void *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (void)setDouble2:(SEL)a0 atTime:(double)a1;
- (void)setFloat2:(SEL)a0 atTime:(double)a1;

@end
