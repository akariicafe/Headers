@interface TSCEErrorCellValue : TSCECellValue {
    struct TSCEErrorValue { void /* function */ **x0; id x1; } *_errorValue;
}

- (id)format;
- (id)displayString;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeToArchive:(void *)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })tsceValue;
- (id)canonicalKeyString;
- (BOOL)isEqualToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (struct TSCEErrorValue { void /* function */ **x0; id x1; } *)errorValue;
- (id)initWithErrorValue:(struct TSCEErrorValue { void /* function */ **x0; id x1; } *)a0 locale:(id)a1;

@end
