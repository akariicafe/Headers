@interface TSTMutableCellRegion : TSTCellRegion

- (void)addRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (void)clear;
- (void)addRegion:(id)a0;
- (void)addColumns:(id)a0;
- (void)addRows:(id)a0;
- (void)p_addRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 calculateAncillaryInfo:(BOOL)a1;
- (void)removeColumns:(id)a0;
- (void)removeRows:(id)a0;

@end
