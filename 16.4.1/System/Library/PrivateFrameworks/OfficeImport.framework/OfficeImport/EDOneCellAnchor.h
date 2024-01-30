@interface EDOneCellAnchor : EDAnchor {
    struct EDCellAnchorMarker { int columnIndex; float columnAdjustment; int rowIndex; float rowAdjustment; } mFrom;
    struct CGSize { double width; double height; } mSize;
    BOOL mIsRelative;
}

- (id).cxx_construct;
- (BOOL)isRelative;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })from;
- (void)setFrom:(struct EDCellAnchorMarker { int x0; float x1; int x2; float x3; })a0;
- (void)setRelative:(BOOL)a0;

@end
