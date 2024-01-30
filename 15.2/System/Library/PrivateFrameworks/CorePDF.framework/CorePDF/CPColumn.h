@interface CPColumn : CPRegion {
    BOOL hasCentredParagraph;
    BOOL hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
}

@property BOOL complete;

- (id)description;
- (id)init;
- (void)accept:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (double)leftPad;
- (int)inOrder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnBounds;
- (double)rightPad;
- (double)selectionBottom;
- (void)setHasColumnBreak:(BOOL)a0;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (void)setIsImageRegion:(BOOL)a0;
- (BOOL)isImageRegion;
- (BOOL)isShapeRegion;
- (double)bottomBaseline;
- (BOOL)hasCentredParagraph;
- (void)setHasCentredParagraph:(BOOL)a0;
- (double)maxLeftPad;
- (void)setMaxLeftPad:(double)a0;
- (double)maxRightPad;
- (void)setMaxRightPad:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedBounds;
- (int)outOrder;

@end
