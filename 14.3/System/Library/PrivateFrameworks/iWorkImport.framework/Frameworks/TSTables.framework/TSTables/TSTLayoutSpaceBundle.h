@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject

@property (weak, nonatomic) TSTLayout *layout;
@property (retain, nonatomic) TSTLayoutSpace *space;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace;

- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (void)invalidateCoordinates;
- (void)invalidateTableOffsets;
- (id)getSpaceContainingCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (int)validateLayoutSpaces;
- (void)invalidateCoordinatesAfterColumn:(unsigned short)a0;
- (void)invalidateCoordinatesAfterRow:(unsigned int)a0;
- (void)enumerateLayoutSpacesUsingBlock:(id /* block */)a0;
- (BOOL)enumerateFrozenLayoutSpacesUsingBlock:(id /* block */)a0;
- (BOOL)enumerateRepeatLayoutSpacesUsingBlock:(id /* block */)a0;
- (void)invalidateCoordinatesForEditingCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
