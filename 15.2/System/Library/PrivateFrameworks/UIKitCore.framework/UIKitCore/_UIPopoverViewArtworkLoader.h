@class NSString;

@interface _UIPopoverViewArtworkLoader : NSObject {
    long long _backgroundStyle;
    NSString *_backgroundSelector;
}

+ (id)backgroundSelectorForBackgroundStyle:(long long)a0;

- (BOOL)modern;
- (double)arrowBase;
- (id)topArrowPinnedView;
- (id)bottomArrowView;
- (id)topArrowLeftEndCapView;
- (id)initWithBackgroundStyle:(long long)a0;
- (id)topArrowRightEndCapView;
- (id)bottomArrowPinnedView;
- (id)templateImageForDirection:(id)a0 shortArtwork:(BOOL)a1 traitCollection:(id)a2;
- (id)bottomArrowLeftEndCapView;
- (id)bottomArrowRightEndCapView;
- (id)shortRightArrowView;
- (id)rightArrowPinnedTopView;
- (id)rightArrowBottomEndCapView;
- (id)rightArrowView;
- (id)rightArrowPinnedBottomView;
- (id)rightArrowTopEndCapView;
- (double)clampArrowBase;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageOfSize:(struct CGSize { double x0; double x1; })a1;
- (double)arrowHeight;
- (id)_templateImageForDirection:(id)a0 shortArtwork:(BOOL)a1 traitCollection:(id)a2 rimShadow:(BOOL)a3;
- (id)_topArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (double)arrowTopGradientEnd;
- (double)capCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsCenterForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageOfSize:(struct CGSize { double x0; double x1; })a1;
- (double)bottomEndCapHeight;
- (id)viewWithContentsImage:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 antialiasingMask:(unsigned int)a3 directionSelector:(id)a4;
- (id)_topArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)shortBottomArrowView;
- (id)_topArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_topArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (double)sideArrowStart;
- (id)_rightArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (double)noArrowTopGradientEnd;
- (id)_rightArrowPinnedTopViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowPinnedBottomViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowTopEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_rightArrowBottomEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_bottomArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (double)shortArtRightArrowBase;
- (id)_bottomArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)shortTopArrowView;
- (id)_bottomArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_bottomArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortTopArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (double)shortArtArrowTopGradientEnd;
- (double)shortArtNoArrowTopGradientEnd;
- (id)_shortTopArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortTopArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortTopArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortRightArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortBottomArrowViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (void).cxx_destruct;
- (id)_shortBottomArrowPinnedViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortBottomArrowLeftEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)_shortBottomArrowRightEndCapViewForTraitCollection:(id)a0 withRimShadow:(BOOL)a1;
- (id)shortTopArrowPinnedView;
- (id)shortTopArrowLeftEndCapView;
- (id)shortTopArrowRightEndCapView;
- (id)shortBottomArrowPinnedView;
- (id)shortBottomArrowLeftEndCapView;
- (id)shortBottomArrowRightEndCapView;
- (id)topArrowView;
- (double)topArrowStart;

@end
