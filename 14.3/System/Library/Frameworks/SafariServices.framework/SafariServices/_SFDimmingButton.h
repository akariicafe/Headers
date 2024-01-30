@class UIColor, NSNumber;

@interface _SFDimmingButton : UIButton {
    UIColor *_cachedDimmedBackgroundColor;
}

@property (nonatomic) double normalImageAlpha;
@property (nonatomic) double highlightedImageAlpha;
@property (nonatomic) double highlightAnimationDuration;
@property (retain, nonatomic) UIColor *dimmableBackgroundColor;
@property (retain, nonatomic) NSNumber *tapTargetSideMargin;

- (void).cxx_destruct;
- (void)_updateImageAlpha;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateBackgroundColor;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;

@end
