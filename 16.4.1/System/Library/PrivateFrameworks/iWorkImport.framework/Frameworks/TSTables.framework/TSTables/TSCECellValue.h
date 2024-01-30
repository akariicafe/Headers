@class TSULocale;

@interface TSCECellValue : NSObject <NSCopying>

@property (nonatomic) char valueType;
@property (retain, nonatomic) TSULocale *locale;

+ (id)cellValueWithArchive:(const void *)a0 locale:(id)a1;
+ (id)newCellValueFromTSCEValue:(const struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } *)a0 withLocale:(id)a1;

- (id)displayString;
- (id)format;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)canonicalKeyString;
- (long long)compareToCellValue:(id)a0;
- (void)encodeCellValueToArchive:(void *)a0;
- (BOOL)isEqualToCellValue:(id)a0;
- (void)setPopulatedCustomFormat:(id)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; })tsceValue;
- (void)updateWithCustomFormatList:(id)a0;

@end
