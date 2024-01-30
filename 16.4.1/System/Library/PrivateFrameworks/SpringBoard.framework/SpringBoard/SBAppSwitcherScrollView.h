@interface SBAppSwitcherScrollView : BSUIScrollView {
    struct CGPoint { double x; double y; } _previousContentOffset;
    double _previousScrollTime;
    struct CGPoint { double x; double y; } _rawContentOffsetVelocity;
}

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })contentOffsetVelocity;

@end
