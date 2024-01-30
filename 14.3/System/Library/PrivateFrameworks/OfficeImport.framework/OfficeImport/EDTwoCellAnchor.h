@interface EDTwoCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mFrom;
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mTo;
    BOOL mIsRelative;
    int mEditAs;
}

- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })to;
- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })from;
- (id)init;
- (void)setTo:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (void)setFrom:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (int)editAs;
- (id).cxx_construct;
- (BOOL)isRelative;
- (void)setRelative:(BOOL)a0;
- (void)setEditAs:(int)a0;

@end
