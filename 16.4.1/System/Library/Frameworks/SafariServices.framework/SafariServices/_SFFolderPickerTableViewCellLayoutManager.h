@interface _SFFolderPickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1

+ (double)indentationWidth;

- (void)layoutSubviewsOfCell:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_layoutMarginsForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)a0 rowWidth:(double)a1 forSizing:(BOOL)a2;

@end
