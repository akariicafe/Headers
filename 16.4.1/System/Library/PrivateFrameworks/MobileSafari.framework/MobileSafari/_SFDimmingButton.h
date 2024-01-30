@class UIColor, NSNumber, NSValue;

@interface _SFDimmingButton : SFClickableButton {
    UIColor *_cachedDimmedBackgroundColor;
}

@property (nonatomic) double normalImageAlpha;
@property (nonatomic) double highlightedImageAlpha;
@property (nonatomic) double highlightAnimationDuration;
@property (retain, nonatomic) UIColor *dimmableBackgroundColor;
@property (retain, nonatomic) NSNumber *tapTargetSideMargin;
@property (retain, nonatomic) NSValue *tapTargetSideMargins;
@property (nonatomic) BOOL alwaysUsesUIMenuOrdering;

- (void)_updateBackgroundColor;
- (void)_updateImageAlpha;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
