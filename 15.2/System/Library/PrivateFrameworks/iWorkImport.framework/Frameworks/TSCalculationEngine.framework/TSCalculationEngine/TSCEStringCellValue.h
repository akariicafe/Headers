@interface TSCEStringCellValue : TSCECellValue {
    struct TSCEStringValue { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 5; unsigned char x2 : 5; unsigned char x3 : 2; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; BOOL x3; BOOL x4; } *_stringValue;
}

- (id)format;
- (struct TSCEStringValue { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 5; unsigned char x2 : 5; unsigned char x3 : 2; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; BOOL x3; BOOL x4; } *)stringValue;
- (id)displayString;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0 locale:(id)a1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeToArchive:(void *)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })tsceValue;
- (id)canonicalKeyString;
- (BOOL)isEqualToCellValue:(id)a0;
- (long long)compareToCellValue:(id)a0;
- (id)initWithArchive:(const void *)a0 locale:(id)a1;
- (void)setPopulatedCustomFormat:(id)a0;
- (id)initWithStringValue:(const struct TSCEStringValue { void /* function */ **x0; id x1; struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 5; unsigned char x2 : 5; unsigned char x3 : 2; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; } x2; BOOL x3; BOOL x4; } *)a0 locale:(id)a1;

@end
