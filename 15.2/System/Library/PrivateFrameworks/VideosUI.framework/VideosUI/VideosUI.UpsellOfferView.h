@interface VideosUI.UpsellOfferView : VUIBaseView {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ debugUIOverlay;
    void /* unknown type, empty encoding */ currentPrefersUberLayout;
    void /* unknown type, empty encoding */ upsellViewModel;
    void /* unknown type, empty encoding */ coverArtImageView;
    void /* unknown type, empty encoding */ tagsView;
    void /* unknown type, empty encoding */ contextImageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ backgroundImageModel;
    void /* unknown type, empty encoding */ currentWidth;
    void /* unknown type, empty encoding */ backgroundImageView;
    void /* unknown type, empty encoding */ storedGradientLayer;
    void /* unknown type, empty encoding */ storedGradientView;
    void /* unknown type, empty encoding */ contentLogoView;
    void /* unknown type, empty encoding */ contentTextLabel;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)handleGroupWatchActivityStateDidChange:(id)a0;

@end
