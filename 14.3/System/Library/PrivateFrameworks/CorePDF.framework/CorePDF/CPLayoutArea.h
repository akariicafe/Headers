@interface CPLayoutArea : CPRegion {
    BOOL isFirstLayout;
}

- (id)init;
- (id)properties;
- (BOOL)isSimilarTo:(id)a0;
- (BOOL)isFirstLayout;
- (void)setIsFirstLayout:(BOOL)a0;
- (id)description;
- (void)accept:(id)a0;
- (double)selectionBottom;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutAreaBounds;
- (void)addColumnBreaks;

@end
