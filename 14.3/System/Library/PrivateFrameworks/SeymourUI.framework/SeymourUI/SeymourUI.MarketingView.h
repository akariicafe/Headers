@interface SeymourUI.MarketingView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ backgroundImageView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ actionItemTitles;
    void /* unknown type, empty encoding */ actionItemViews;
    void /* unknown type, empty encoding */ offer;
    void /* unknown type, empty encoding */ pendingOffer;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ logoImageView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dismissButtonTapped:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)actionItemButtonTapped:(id)a0;

@end
