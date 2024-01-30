@class EDTable, EDReference;

@interface EFTableData : NSObject {
    struct EFRefTok { int type; unsigned int dataSize; unsigned char data[12]; } mRefTok;
    EDTable *mTable;
    EDReference *mReference;
    int mMakeups;
}

- (id)table;
- (id)reference;
- (void)dealloc;
- (const struct EFRefTok { int x0; unsigned int x1; unsigned char x2[12]; } *)refTok;
- (unsigned short *)ptgData;
- (id)initWith:(struct EFStrTok { id x0; int x1; union EFData { struct { unsigned long long x0; unsigned long long x1; BOOL x2; } x0; struct { unsigned long long x0; void *x1; } x1; struct { unsigned int x0; unsigned int x1; BOOL x2; BOOL x3; } x2; } x2; } *)a0;
- (void)makeup:(id)a0 with:(int)a1;

@end
