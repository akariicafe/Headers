@class UIColor, UIView;

@interface _TVSeparatorView : UIView {
    UIView *_line1;
    UIView *_line2;
}

@property (weak, nonatomic) UIView *separatorComponent;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double lineHeight;

+ (id)separatorViewWithElement:(id)a0 existingView:(id)a1;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
