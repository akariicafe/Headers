@interface TSUCustomFormatWrapper : NSObject {
    void *mCustomFormat;
}

- (int)formatType;
- (const struct { id x0; id x1; id x2; id x3; id x4; double x5; unsigned char x6 : 8; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; } *)conditionalFormatDataForValue:(double)a0;
- (const struct { id x0; id x1; id x2; id x3; id x4; double x5; unsigned char x6 : 8; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; } *)defaultFormatData;
- (id)formatName;
- (id)initWithCustomFormat:(void *)a0;
- (const void *)pointerToTSUCustomFormat;

@end
