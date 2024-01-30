@interface MDLMatrix4x4Array : NSObject <NSCopying> {
    struct VtValue { struct type { unsigned char __lx[8]; } _storage; struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo *_ptrAndBits; } _info; } _data;
}

@property (readonly, nonatomic) unsigned long long elementCount;
@property (readonly, nonatomic) unsigned long long precision;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clear;
- (void).cxx_destruct;
- (unsigned long long)getFloat4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (unsigned long long)getDouble4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (id)initWithElementCount:(unsigned long long)a0;
- (void)resetWithUsdAttribute:(const void *)a0;
- (void)resetWithUsdAttribute:(const void *)a0 time:(double)a1;
- (void)setDouble4x4Array:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1;
- (void)setFloat4x4Array:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1;

@end
