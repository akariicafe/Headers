@class NSIndexSet, TSTHiddenDimensionCache;

@interface TSTHiddenRowsColumnsCache : NSObject <NSCopying> {
    TSTHiddenDimensionCache *mHiddenRows;
    TSTHiddenDimensionCache *mHiddenColumns;
}

@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;
@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;

- (void)swap;
- (void)push;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)pop;
- (void)validate:(id)a0;
- (BOOL)isColumnHidden:(unsigned char)a0;
- (BOOL)isRowHidden:(unsigned short)a0;
- (BOOL)isRowUserHidden:(unsigned short)a0;
- (unsigned short)numberRowsHiddenInCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (unsigned short)numberRowsUserHiddenInCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (unsigned short)numberColumnsHiddenInCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)anyRowsHiddenInCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)anyRowsUserHiddenInCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (BOOL)anyColumnsHiddenInCellRange:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a0;
- (unsigned short)previousVisibleRow:(unsigned short)a0;
- (unsigned short)nextVisibleRow:(unsigned short)a0;
- (unsigned char)previousVisibleColumn:(unsigned char)a0;
- (unsigned char)nextVisibleColumn:(unsigned char)a0;
- (unsigned short)previousNthVisibleRow:(unsigned short)a0 fromRowIndex:(unsigned short)a1;
- (unsigned char)previousNthVisibleColumn:(unsigned short)a0 fromColumnIndex:(unsigned char)a1;
- (struct { unsigned short x0; unsigned char x1; unsigned char x2; })visibleCellOffsetBy:(struct { int x0; int x1; })a0 fromCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)a0;
- (void)pushAndValidate:(id)a0;
- (void)validateChangeDescriptors:(id)a0;

@end
