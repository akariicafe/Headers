@class _UIBackdropView;

@interface TPButton : UIButton {
    int _color;
    _UIBackdropView *_backdropView;
}

@property (nonatomic) BOOL blursBackground;
@property (nonatomic) BOOL roundsCorners;
@property (nonatomic) BOOL usesOverlayBlendingForContents;

+ (double)defaultHeight;
+ (double)defaultHeightForColor:(int)a0;
+ (id)defaultStandardFont;
+ (double)defaultWidthForSideButton;
+ (double)defaultWidthForCenterButton;
+ (double)maxWidthForCenterButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setButtonColor:(int)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (int)buttonColor;
- (void)setBackgroundColor:(id)a0;
- (id)initWithTitle:(id)a0 icon:(id)a1 color:(int)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_animationWillBegin;
- (void)_animationDidEnd;
- (void)setPlusSeparatedTitle:(id)a0;
- (void)setMinimumTitleFontSize:(double)a0;
- (void)setMinimumTitleFontSize:(double)a0 maximumTitleFontSize:(double)a1;
- (void)setTitleImagePadding:(double)a0;
- (void)setIconVerticalOffset:(double)a0;
- (void)setTitleVerticalOffset:(double)a0;
- (void)setDisabledButtonColor:(int)a0;

@end
