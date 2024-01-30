@class TSULocale;

@interface TSCECellValue : NSObject <NSCopying>

@property (nonatomic) int valueType;
@property (retain, nonatomic) TSULocale *locale;

+ (id)newCellValueFromTSCEValue:(const struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; } *)a0 withLocale:(id)a1;
+ (id)cellValueWithArchive:(const struct CellValueArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct BooleanCellValueArchive *x4; struct DateCellValueArchive *x5; struct NumberCellValueArchive *x6; struct StringCellValueArchive *x7; struct ErrorCellValueArchive *x8; int x9; } *)a0 locale:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)format;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)displayString;
- (struct TSCEValue { struct TSCENumberValue { void /* function */ **x0; struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } x1; int x2[1]; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x3; BOOL x4; } x0; unsigned long long x1[19]; int x2; })tsceValue;
- (id)canonicalKeyString;
- (BOOL)isEqualToCellValue:(id)a0;
- (long long)compareToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (void)encodeCellValueToArchive:(struct CellValueArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct BooleanCellValueArchive *x4; struct DateCellValueArchive *x5; struct NumberCellValueArchive *x6; struct StringCellValueArchive *x7; struct ErrorCellValueArchive *x8; int x9; } *)a0;
- (void)updateWithCustomFormatList:(id)a0;

@end
