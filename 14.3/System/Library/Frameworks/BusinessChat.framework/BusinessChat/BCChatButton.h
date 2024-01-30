@class UILabel, UIImageView, UIView;

@interface BCChatButton : UIControl

@property (nonatomic) long long style;
@property (nonatomic) BOOL isInverted;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *smallLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *centeredView;

- (void)setup;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)createSubviews;
- (id)initWithStyle:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)_populateArchivedSubviews:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)color:(struct BCColor { double x0; double x1; double x2; double x3; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_setStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)updateAppearanceForState:(long long)a0;
- (void)setAccessibilityValues;
- (struct CGSize { double x0; double x1; })calculateButtonLayout;
- (void)updateButtonLayout;
- (void)setTextForLabel:(id)a0 label:(id)a1;
- (void)setOpacityForView:(id)a0 opacity:(double)a1;

@end
