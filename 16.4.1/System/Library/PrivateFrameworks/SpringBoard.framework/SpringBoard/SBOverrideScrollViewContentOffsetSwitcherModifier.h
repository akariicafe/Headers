@interface SBOverrideScrollViewContentOffsetSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _scrollViewContentOffset;
}

- (struct CGPoint { double x0; double x1; })scrollViewContentOffset;
- (id)initWithScrollViewContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
