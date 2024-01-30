@interface ConversationKit.PeoplePickerActionBar : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ buttonsStyle;
    void /* unknown type, empty encoding */ generatingLinksEnabled;
    void /* unknown type, empty encoding */ serviceAvailability;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioButtonConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioButton;
    void /* unknown type, empty encoding */ audioButtonLeadingConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addPersonButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageButton;
    void /* unknown type, empty encoding */ messageButtonStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioCallDisambiguationMenu;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundGradientLayer;
    void /* unknown type, empty encoding */ allButtons;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)audioButtonTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)videoButtonTapped:(id)a0;
- (void)addPersonButtonTapped:(id)a0;
- (void)messageButtonTapped:(id)a0;

@end
