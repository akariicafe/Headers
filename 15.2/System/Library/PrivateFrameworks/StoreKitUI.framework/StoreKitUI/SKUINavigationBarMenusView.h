@class NSArray;

@interface SKUINavigationBarMenusView : SKUIViewReuseView {
    SEL _buttonAction;
    id _buttonTarget;
    NSArray *_menuViewElements;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;

+ (id)_attributedStringWithMenuItem:(id)a0 context:(id)a1;
+ (void)requestLayoutWithMenus:(id)a0 width:(long long)a1 context:(id)a2;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setButtonTarget:(id)a0 action:(SEL)a1;
- (void)reloadWithMenus:(id)a0 width:(long long)a1 context:(id)a2;

@end
