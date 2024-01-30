@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable> {
    unsigned int length;
    struct CPPDFChar **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    BOOL wasMerged;
}

- (unsigned int)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CPPDFStyle *x5; double x6; int x7; long long x8; } *)charAtIndex:(unsigned int)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)dispose;
- (void)resize:(unsigned int)a0;
- (void)finalize;
- (void)sortBy:(void /* function */ *)a0;
- (id)initSuper;
- (BOOL)map:(void /* function */ *)a0 passing:(void *)a1;
- (id)newSubsequenceFrom:(unsigned int)a0 length:(unsigned int)a1;
- (void)removeFrom:(unsigned int)a0;
- (id)initWithSizeFor:(unsigned int)a0;
- (void)addChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CPPDFStyle *x5; double x6; int x7; long long x8; } *)a0;
- (BOOL)wasMerged;
- (BOOL)removeSubsequences:(id)a0 whereTrue:(void /* function */ *)a1 passing:(void *)a2;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)splitToSubsequences:(id)a0 whereTrue:(void /* function */ *)a1 passing:(void *)a2;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)a0;
- (BOOL)map:(void /* function */ *)a0 whereNeighborsWith:(id)a1 passing:(void *)a2;
- (void)removeAllChars;
- (void)merge:(id)a0 by:(void /* function */ *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsFrom:(unsigned int)a0 length:(unsigned int)a1;
- (id)initWithChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CPPDFStyle *x5; double x6; int x7; long long x8; } *)a0 length:(unsigned int)a1;
- (struct CPPDFChar **)charArray;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CPPDFStyle *x5; double x6; int x7; long long x8; } *)a0 length:(unsigned int)a1;
- (void)addChars:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CPPDFStyle *x5; double x6; int x7; long long x8; } *)a0 length:(unsigned int)a1 ifTrue:(void /* function */ *)a2 passing:(void *)a3;
- (void)addCharsFromSequence:(id)a0;
- (void)removeChar;
- (void)replaceCharAtIndex:(unsigned int)a0 withChar:(struct CPPDFChar { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned short x1; unsigned short x2; struct CGPoint { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; struct CPPDFStyle *x5; double x6; int x7; long long x8; } *)a1;
- (void)removeCharAtIndex:(unsigned int)a0;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)a0;
- (void)copyToSubsequence:(id)a0 from:(unsigned int)a1 length:(unsigned int)a2;
- (void)copyToSubsequence:(id)a0 ifTrue:(void /* function */ *)a1 passing:(void *)a2;
- (BOOL)removeToSubsequence:(id)a0 ifTrue:(void /* function */ *)a1 passing:(void *)a2;
- (BOOL)mapWithIndex:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapWithIndex:(void /* function */ *)a0 from:(unsigned int)a1 length:(unsigned int)a2 passing:(void *)a3;
- (BOOL)mapToPairs:(void /* function */ *)a0 passing:(void *)a1;
- (BOOL)mapToPairsWithIndex:(void /* function */ *)a0 passing:(void *)a1;

@end
