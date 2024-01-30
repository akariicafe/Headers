@class UIFont, NSString, UILabel, UIButton;

@interface RUILinkLabel : UIView {
    UIButton *_linkButton;
    long long _textAlignment;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIButton *linkButton;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_resize;
- (void).cxx_destruct;
- (void)_linkPressed;

@end
