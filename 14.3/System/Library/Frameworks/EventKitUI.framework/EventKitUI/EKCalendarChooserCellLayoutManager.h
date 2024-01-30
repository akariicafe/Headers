@interface EKCalendarChooserCellLayoutManager : UITableViewCellLayoutManager {
    id _realLayoutManager;
}

+ (id)sharedLayoutManagerForStyle:(long long)a0;

- (void).cxx_destruct;
- (id)defaultTextLabelFontForCell:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForCell:(id)a0 rowWidth:(double)a1;
- (id)defaultDetailTextLabelFontForCell:(id)a0;
- (void)getTextLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 detailTextLabelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forCell:(id)a2 rowWidth:(double)a3 forSizing:(BOOL)a4;
- (double)defaultTextLabelFontSizeForCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)a0 rowWidth:(double)a1 forSizing:(BOOL)a2;
- (id)detailTextLabelForCell:(id)a0;
- (id)initWithCellStyle:(long long)a0;
- (BOOL)rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trailsOtherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 byDistance:(double *)a2;
- (double)defaultDetailTextLabelFontSizeForCell:(id)a0;

@end
