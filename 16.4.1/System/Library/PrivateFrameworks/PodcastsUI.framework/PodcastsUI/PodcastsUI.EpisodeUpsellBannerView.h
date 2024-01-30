@interface PodcastsUI.EpisodeUpsellBannerView : UIControl {
    void /* unknown type, empty encoding */ tapBannerBlock;
    void /* unknown type, empty encoding */ tapCloseButtonBlock;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ artworkContainerView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dismissButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapBannerGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabelCenterYConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleTopAnchorConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleBottomAnchorConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleBottomAnchorConstraint;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ hoverRecognizer;
    void /* unknown type, empty encoding */ isHovering;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didHover:(id)a0;
- (void)closeButtonTapped;
- (void)cellTapped;

@end
