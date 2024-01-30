@interface SeymourUI.MarketingView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isLoading;
    void /* unknown type, empty encoding */ onElementAppearance;
    void /* unknown type, empty encoding */ onElementDisappearance;
    void /* unknown type, empty encoding */ onVisibleBoundsChange;
    void /* unknown type, empty encoding */ onImpressionableBoundsChange;
    void /* unknown type, empty encoding */ backgroundImageView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ supportingTextLabel;
    void /* unknown type, empty encoding */ actionItemSubtitles;
    void /* unknown type, empty encoding */ actionItemTitles;
    void /* unknown type, empty encoding */ actionItemButtons;
    void /* unknown type, empty encoding */ actionItemViews;
    void /* unknown type, empty encoding */ offer;
    void /* unknown type, empty encoding */ pendingOffer;
    void /* unknown type, empty encoding */ lastTappedActionItemButton;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ logoImageView;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)dismissButtonTapped:(id)a0;
- (void)actionItemButtonTapped:(id)a0;

@end
