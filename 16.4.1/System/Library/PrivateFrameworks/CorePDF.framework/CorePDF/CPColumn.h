@interface CPColumn : CPRotatedRegion {
    BOOL hasCentredParagraph;
    BOOL hasColumnBreak;
    double maxLeftPad;
    double maxRightPad;
    double maxRight;
    double minLeft;
}

@property BOOL complete;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)accept:(id)a0;
- (int)inOrder;
- (double)leftPad;
- (double)selectionBottom;
- (void)setMaxRightPad:(double)a0;
- (double)bottomBaseline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })columnBounds;
- (BOOL)hasCentredParagraph;
- (BOOL)isBoxRegion;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (double)maxLeftPad;
- (double)maxRightPad;
- (int)outOrder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedBounds;
- (double)rightPad;
- (void)setHasCentredParagraph:(BOOL)a0;
- (void)setHasColumnBreak:(BOOL)a0;
- (void)setIsImageRegion:(BOOL)a0;
- (void)setMaxLeftPad:(double)a0;

@end
