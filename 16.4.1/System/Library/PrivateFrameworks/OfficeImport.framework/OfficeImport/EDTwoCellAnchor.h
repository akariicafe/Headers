@interface EDTwoCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mFrom;
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mTo;
    BOOL mIsRelative;
    int mEditAs;
}

- (id).cxx_construct;
- (BOOL)isRelative;
- (id)init;
- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })from;
- (void)setFrom:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (void)setTo:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })to;
- (int)editAs;
- (void)setEditAs:(int)a0;
- (void)setRelative:(BOOL)a0;

@end
