@interface SBReduceMotionDeckSwitcherModifier : SBDeckSwitcherModifier

- (double)titleAndIconOpacityForIndex:(unsigned long long)a0;
- (unsigned long long)indexForScrollProgress:(double)a0 displayItemsCount:(unsigned long long)a1 frameOrigin:(double)a2;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (double)wallpaperScale;
- (double)leadingOffsetForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 scrollProgress:(double)a2;
- (double)scrollProgressForIndex:(unsigned long long)a0;
- (double)_switcherCardScale;
- (id)scrollViewAttributes;
- (double)depthForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 scrollProgress:(double)a2;
- (double)scrollProgressForIndex:(unsigned long long)a0 displayItemsCount:(unsigned long long)a1 frameOrigin:(double)a2;
- (struct CGSize { double x0; double x1; })_interpageSpacingForPaging;
- (struct CGPoint { double x0; double x1; })adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 locationInView:(struct CGPoint { double x0; double x1; })a3 horizontalVelocity:(inout double *)a4 verticalVelocity:(inout double *)a5;
- (void)resetAdjustedScrollingState;
- (double)opacityForIndex:(unsigned long long)a0 scrollProgress:(double)a1;
- (double)titleOpacityForIndex:(unsigned long long)a0 scrollProgress:(double)a1;
- (double)_cardWidth;
- (struct CGPoint { double x0; double x1; })_pagingOrigin;

@end
