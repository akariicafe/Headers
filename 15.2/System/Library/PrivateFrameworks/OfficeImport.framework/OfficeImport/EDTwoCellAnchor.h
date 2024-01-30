@interface EDTwoCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mFrom;
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mTo;
    BOOL mIsRelative;
    int mEditAs;
}

- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })to;
- (void)setTo:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (void)setFrom:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })from;
- (id)init;
- (BOOL)isRelative;
- (id).cxx_construct;
- (int)editAs;
- (void)setRelative:(BOOL)a0;
- (void)setEditAs:(int)a0;

@end
