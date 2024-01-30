@interface PLUUIDString : NSString {
    unsigned char _uuid[16];
    char _uuidString[37];
}

+ (BOOL)parseUUIDString:(id)a0 uuidBuffer:(char *)a1;
+ (id)UUIDString;

- (id)initWithUUID:(unsigned char[16])a0;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })UUIDBytes;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithCFUUIDBytes:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })a0;
- (id)initWithCFUUID:(struct __CFUUID { } *)a0;
- (id)initWithUUIDData:(id)a0;
- (id)init;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3;
- (const char *)UTF8String;
- (id)UUIDData;

@end
