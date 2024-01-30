@class NSMutableArray;

@interface CPRMTable : NSObject <NSFastEnumeration> {
    NSMutableArray *_matrix;
    unsigned long long _elementCount;
    NSMutableArray *_rowFirstElements;
    NSMutableArray *_columnFirstElements;
    struct CGPDFLayout { } *_layout;
    struct CGPDFNode { } *_tableRoot;
}

@property (readonly) struct CGPDFPage { } *page;
@property BOOL rowOrder;

- (unsigned long long)columns;
- (void)dump;
- (struct CGPDFPage { } *)page;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (unsigned long long)rows;
- (id)rowAtIndex:(unsigned long long)a0;
- (struct CGPDFLayout { } *)layout;
- (void)dealloc;
- (id)columnAtIndex:(unsigned long long)a0;
- (id)initWithRoot:(struct CGPDFNode { } *)a0 layout:(struct CGPDFLayout { } *)a1;
- (void)matrixDealloc;

@end
