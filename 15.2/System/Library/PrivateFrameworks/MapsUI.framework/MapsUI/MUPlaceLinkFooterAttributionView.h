@class UIButton, NSAttributedString;

@interface MUPlaceLinkFooterAttributionView : UIView {
    UIButton *_attributionButton;
    id _target;
    SEL _action;
}

@property (copy, nonatomic) NSAttributedString *attributedTitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)_setupLinkView;

@end
