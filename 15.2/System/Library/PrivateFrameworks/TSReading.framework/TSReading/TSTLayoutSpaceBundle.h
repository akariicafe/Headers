@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject

@property (nonatomic) TSTLayout *layout;
@property (retain, nonatomic) TSTLayoutSpace *space;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace;
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace;

- (id)initWithLayout:(id)a0;
- (id)description;
- (void)dealloc;
- (void)performActionOnEachLayoutSpace:(id /* block */)a0;
- (void)invalidateCoordinates;
- (BOOL)performActionOnFrozenLayoutSpaces:(id /* block */)a0;
- (BOOL)performActionOnRepeatLayoutSpaces:(id /* block */)a0;
- (void)invalidateTableOffsets;
- (id)getSpaceContainingCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (int)validateLayoutSpaces;

@end
