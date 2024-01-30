@class TSULocale;

@interface TSCECellValue : NSObject <NSCopying>

@property (nonatomic) char valueType;
@property (retain, nonatomic) TSULocale *locale;

+ (id)newCellValueFromTSCEValue:(const struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } *)a0 withLocale:(id)a1;
+ (id)cellValueWithArchive:(const void *)a0 locale:(id)a1;

- (long long)compare:(id)a0;
- (id)initWithLocale:(id)a0;
- (id)format;
- (id)displayString;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })tsceValue;
- (id)canonicalKeyString;
- (BOOL)isEqualToCellValue:(id)a0;
- (long long)compareToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (void)encodeCellValueToArchive:(void *)a0;
- (void)updateWithCustomFormatList:(id)a0;

@end
