@class NSString;

@interface _UIPopoverViewArtworkLoader : NSObject {
    long long _backgroundStyle;
    NSString *_backgroundSelector;
}

+ (id)backgroundSelectorForBackgroundStyle:(long long)a0;

- (double)arrowHeight;
- (double)arrowBase;
- (void).cxx_destruct;
- (id)bottomArrowView;
- (double)capCornerRadius;
- (id)shortBottomArrowRightEndCapView;
- (id)_bottomArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_bottomArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_bottomArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_bottomArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowBottomEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowPinnedBottomViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowPinnedTopViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowTopEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortBottomArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortBottomArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortBottomArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortBottomArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortRightArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortTopArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortTopArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortTopArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortTopArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_templateImageForDirection:(id)a0 shortArtwork:(BOOL)a1 traitCollection:(id)a2 rimShadow:(BOOL)a3;
- (id)_topArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_topArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_topArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_topArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (double)arrowTopGradientEnd;
- (id)bottomArrowLeftEndCapView;
- (id)bottomArrowPinnedView;
- (id)bottomArrowRightEndCapView;
- (double)bottomEndCapHeight;
- (double)clampArrowBase;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageOfSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsCenterForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageOfSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithBackgroundStyle:(long long)a0;
- (BOOL)modern;
- (double)noArrowTopGradientEnd;
- (id)rightArrowBottomEndCapView;
- (id)rightArrowPinnedBottomView;
- (id)rightArrowPinnedTopView;
- (id)rightArrowTopEndCapView;
- (id)rightArrowView;
- (double)shortArtArrowTopGradientEnd;
- (double)shortArtNoArrowTopGradientEnd;
- (double)shortArtRightArrowBase;
- (id)shortBottomArrowLeftEndCapView;
- (id)shortBottomArrowPinnedView;
- (id)shortBottomArrowView;
- (id)shortRightArrowView;
- (id)shortTopArrowLeftEndCapView;
- (id)shortTopArrowPinnedView;
- (id)shortTopArrowRightEndCapView;
- (id)shortTopArrowView;
- (double)sideArrowStart;
- (id)templateImageForDirection:(id)a0 shortArtwork:(BOOL)a1 traitCollection:(id)a2;
- (id)topArrowLeftEndCapView;
- (id)topArrowPinnedView;
- (id)topArrowRightEndCapView;
- (double)topArrowStart;
- (id)topArrowView;
- (id)viewWithContentsImage:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 antialiasingMask:(unsigned int)a3 directionSelector:(id)a4;

@end
