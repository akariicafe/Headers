@interface VideosUI.RootSideBarProfileView : VUIBaseView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabelLayout;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabelLayout;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_appleAccountString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_signInString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountSettingsVoiceOverString;
}

- (void)accountStoreDidChange:(id)a0;
- (void)handleTap:(id)a0;
- (void)profileImageDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
