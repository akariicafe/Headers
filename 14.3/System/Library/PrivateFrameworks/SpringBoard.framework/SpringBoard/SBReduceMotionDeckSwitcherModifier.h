@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier

- (double)scrollProgressForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_pagingOrigin;
- (double)scrollProgressForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 frameOrigin:(double)a2;
- (struct CGSize { double x0; double x1; })_interpageSpacingForPaging;
- (double)titleOpacityForIndex:(unsigned long long)a0 scrollProgress:(double)a1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (double)depthForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 scrollProgress:(double)a2;
- (unsigned long long)indexForScrollProgress:(double)a0 displayItemsCount:(unsigned long long)a1 frameOrigin:(double)a2;
- (double)opacityForIndex:(unsigned long long)a0 scrollProgress:(double)a1;
- (struct CGPoint { double x0; double x1; })adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 locationInView:(struct CGPoint { double x0; double x1; })a3 horizontalVelocity:(inout double *)a4 verticalVelocity:(inout double *)a5;
- (double)_cardWidth;
- (double)homeScreenScale;
- (id)scrollViewAttributes;
- (double)_switcherCardScale;
- (double)wallpaperScale;
- (double)leadingOffsetForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 scrollProgress:(double)a2;
- (double)homeScreenAlpha;
- (void)resetAdjustedScrollingState;

@end
