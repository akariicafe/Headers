@interface UITableViewCellLayoutManagerSubtitle : UITableViewCellLayoutManager

- (double)_textLabelYAdjustmentForCell:(id)a0 totalTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)defaultTextLabelFontSizeForCell:(id)a0;
- (id)textLabelForCell:(id)a0;
- (id)defaultDetailTextLabelFontForCell:(id)a0;
- (void)layoutSubviewsOfCell:(id)a0;
- (id)imageViewForCell:(id)a0;
- (id)detailTextLabelForCell:(id)a0;
- (double)defaultDetailTextLabelFontSizeForCell:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForCell:(id)a0 rowWidth:(double)a1;
- (void)getTextLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 detailTextLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forCell:(id)a2 rowWidth:(double)a3 forSizing:(BOOL)a4;

@end
