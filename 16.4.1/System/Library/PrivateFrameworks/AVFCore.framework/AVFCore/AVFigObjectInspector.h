@interface AVFigObjectInspector : NSObject

+ (void)initialize;

- (void *)_valueAsCFTypeForProperty:(struct __CFString { } *)a0;
- (float)_floatForProperty:(struct __CFString { } *)a0 defaultValue:(float)a1;
- (short)_SInt16ForProperty:(struct __CFString { } *)a0;
- (int)_SInt32ForProperty:(struct __CFString { } *)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransformForProperty:(struct __CFString { } *)a0;
- (id)_arrayForProperty:(struct __CFString { } *)a0;
- (unsigned char)_booleanForProperty:(struct __CFString { } *)a0;
- (id)_dataForProperty:(struct __CFString { } *)a0;
- (id)_dictionaryForProperty:(struct __CFString { } *)a0;
- (float)_floatForProperty:(struct __CFString { } *)a0;
- (long long)_longLongForProperty:(struct __CFString { } *)a0;
- (id)_nonNilArrayForProperty:(struct __CFString { } *)a0;
- (id)_nonNilDictionaryForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })_sizeForProperty:(struct __CFString { } *)a0;
- (struct CGSize { double x0; double x1; })_sizeForProperty:(struct __CFString { } *)a0 defaultValue:(struct CGSize { double x0; double x1; })a1;
- (id)_stringForProperty:(struct __CFString { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeForProperty:(struct __CFString { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeForProperty:(struct __CFString { } *)a0 defaultValue:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_timeRangeForProperty:(struct __CFString { } *)a0;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString { } *)a0;

@end
