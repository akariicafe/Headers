@interface CPLayoutArea : CPRotatedRegion {
    BOOL isFirstLayout;
    BOOL hasRotatedCharacters;
}

- (id)properties;
- (id)init;
- (id)description;
- (void)accept:(id)a0;
- (BOOL)isSimilarTo:(id)a0;
- (void)addColumnBreaks;
- (double)selectionBottom;
- (BOOL)hasRotatedCharacters;
- (BOOL)isBoxRegion;
- (BOOL)isFirstLayout;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutAreaBounds;
- (void)setHasRotatedCharacters:(BOOL)a0;
- (void)setIsFirstLayout:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;

@end
