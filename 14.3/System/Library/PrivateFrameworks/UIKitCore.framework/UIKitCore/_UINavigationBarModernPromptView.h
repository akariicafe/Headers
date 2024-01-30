@class UIColor, NSString, UIFont, UILabel;

@interface _UINavigationBarModernPromptView : UIView {
    UILabel *_promptLabel;
    UIFont *_font;
}

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) double promptHeight;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_updatePromptLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
