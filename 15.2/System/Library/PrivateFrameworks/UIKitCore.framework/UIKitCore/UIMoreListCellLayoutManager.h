@interface UIMoreListCellLayoutManager : UITableViewCellLayoutManager {
    double _widestImageWidth;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standardLayoutImageViewFrameForCell:(id)a0 forSizing:(BOOL)a1;
- (void)layoutSubviewsOfCell:(id)a0;
- (double)setWidestImageWidthFromViewControllers:(id)a0;

@end
