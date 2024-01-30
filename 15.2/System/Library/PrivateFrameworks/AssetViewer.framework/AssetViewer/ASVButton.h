@class UIFont, ASVBlurredBackgroundView, UIColor, NSString, UIImage, ASVWrappedButton;

@interface ASVButton : UIControl

@property (retain, nonatomic) ASVWrappedButton *button;
@property (retain, nonatomic) ASVBlurredBackgroundView *blurredBackgroundView;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long textStyle;
@property (retain, nonatomic) UIFont *regularFont;
@property (retain, nonatomic) UIFont *boldFont;
@property (retain, nonatomic) UIColor *white35PercentColor;
@property (retain, nonatomic) UIColor *white100PercentColor;
@property (retain, nonatomic) UIColor *white70PercentColor;
@property (retain, nonatomic) UIColor *black35PercentColor;
@property (retain, nonatomic) UIColor *black70PercentColor;
@property (retain, nonatomic) UIColor *blue100PercentColor;
@property (retain, nonatomic) UIColor *blue50PercentColor;
@property (nonatomic) long long currentStyle;
@property (retain, nonatomic) UIColor *white75PercentColor;
@property (retain, nonatomic) UIColor *white52PercentColor;
@property (retain, nonatomic) UIColor *white26PercentColor;
@property (nonatomic) long long controlStyle;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } largeImageInsets;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTitle:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3 adjustsFontForContentSizeCategory:(BOOL)a4;
- (id)initWithImage:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3 largeImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (void)_didUpdateDarkenColorsSetting:(id)a0;
- (void)_didUpdateContentSizeCategory:(id)a0;
- (id)initWithButton:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3 largeImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (void)_updateTitleStyleForButton:(id)a0 withControlStyle:(long long)a1;
- (id)_colorDarkenedIfNeededForColor:(id)a0;
- (void)updateCurrentAppearanceIfNeeded;
- (id)initWithTitle:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3;
- (id)initWithImage:(id)a0 buttonStyle:(long long)a1 textStyle:(long long)a2 controlStyle:(long long)a3;

@end
