@interface MDLAnimatedVector3Array : MDLAnimatedValue

@property (nonatomic) unsigned long long elementCount;

- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithElementCount:(unsigned long long)a0;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (void)setFloat3Array:(const void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (void)setDouble3Array:(const void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (unsigned long long)getFloat3Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (unsigned long long)getDouble3Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void)resetWithFloat3Array:(const void *)a0 count:(unsigned long long)a1 atTimes:(const double *)a2 count:(unsigned long long)a3;
- (void)resetWithDouble3Array:(const void *)a0 count:(unsigned long long)a1 atTimes:(const double *)a2 count:(unsigned long long)a3;
- (unsigned long long)getFloat3Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)getDouble3Array:(void *)a0 maxCount:(unsigned long long)a1;

@end
