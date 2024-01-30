@interface NAArticleNavigationBarMessageContainer : UIView <NUArticleMessaging> {
    void /* unknown type, empty encoding */ textForArticleMessage;
    void /* unknown type, empty encoding */ defaultView;
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ clipView;
    void /* unknown type, empty encoding */ state;
}

- (id)showMessage:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDefaultView:(id)a0;

@end
