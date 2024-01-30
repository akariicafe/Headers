@interface CPLayoutArea : CPRegion {
    BOOL isFirstLayout;
}

- (id)description;
- (id)properties;
- (id)init;
- (void)accept:(id)a0;
- (BOOL)isSimilarTo:(id)a0;
- (double)selectionBottom;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutAreaBounds;
- (BOOL)isFirstLayout;
- (void)setIsFirstLayout:(BOOL)a0;
- (void)addColumnBreaks;

@end
