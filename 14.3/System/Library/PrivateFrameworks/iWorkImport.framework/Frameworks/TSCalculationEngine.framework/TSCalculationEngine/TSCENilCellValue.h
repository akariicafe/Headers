@interface TSCENilCellValue : TSCECellValue

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)format;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)displayString;
- (struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; })tsceValue;
- (id)canonicalKeyString;
- (BOOL)isEqualToCellValue:(id)a0;
- (long long)compareToCellValue:(id)a0;

@end
