@interface _CSStore2DataContainer : NSObject {
    struct Data { unsigned int x0; unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; struct Table { struct Unit { unsigned int x0 : 30; unsigned char x1 : 2; unsigned int x2; char x3[0]; } x0; char x1[48]; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } x7; } *p;
    unsigned int pAllocatedLength;
}

+ (id)new;

- (id)initWithBytesNoCopy:(struct Data { unsigned int x0; unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; struct Table { struct Unit { unsigned int x0 : 30; unsigned char x1 : 2; unsigned int x2; char x3[0]; } x0; char x1[48]; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } x7; } *)a0 length:(unsigned int)a1;
- (id)init;
- (void)dealloc;

@end
