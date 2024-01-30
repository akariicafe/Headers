@interface TSTTableDataCustomFormat : TSTTableDataObject {
    struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x0; } x0; int x1; struct { id x0; id x1; id x2; id x3; id x4; double x5; unsigned char x6 : 8; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; } x2; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct *x0; struct *x1; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct *x0; } x2; } x3; } *mCustomFormat;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithCustomFormat:(struct TSUCustomFormat { struct ObjcSharedPtr<NSString> { id x0; } x0; int x1; struct { id x0; id x1; id x2; id x3; id x4; double x5; unsigned char x6 : 8; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; } x2; struct vector<TSUCustomFormatCondition, std::__1::allocator<TSUCustomFormatCondition> > { struct *x0; struct *x1; struct __compressed_pair<TSUCustomFormatCondition *, std::__1::allocator<TSUCustomFormatCondition> > { struct *x0; } x2; } x3; } *)a0;

@end
