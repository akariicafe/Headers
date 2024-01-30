@interface EDOneCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mFrom;
    struct CGSize { double width; double height; } mSize;
    BOOL mIsRelative;
}

- (struct CGSize { double x0; double x1; })size;
- (void)setFrom:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })from;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isRelative;
- (id).cxx_construct;
- (void)setRelative:(BOOL)a0;

@end
