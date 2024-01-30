@class SKUIEditorialLinkLayout, NSMutableArray, UIColor;
@protocol SKUIEditorialLinkViewDelegate;

@interface SKUIEditorialLinkView : UIView {
    NSMutableArray *_buttons;
    UIColor *_highlightedTextColor;
    UIColor *_textColor;
}

@property (weak, nonatomic) id<SKUIEditorialLinkViewDelegate> delegate;
@property (nonatomic) long long horizontalAlignment;
@property (retain, nonatomic) SKUIEditorialLinkLayout *linkLayout;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_newButton;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setColoringWithColorScheme:(id)a0;
- (void)_linkButtonAction:(id)a0;

@end
