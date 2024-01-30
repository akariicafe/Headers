@interface ConversationKit.PeoplePickerActionBar : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ buttonsStyle;
    void /* unknown type, empty encoding */ generatingLinksEnabled;
    void /* unknown type, empty encoding */ serviceAvailability;
    void /* unknown type, empty encoding */ $__lazy_storage_$_videoButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioButtonConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioButton;
    void /* unknown type, empty encoding */ audioButtonLeadingConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_faceTimeAddPersonButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharePlayAddPersonButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inviteWithMessagesButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inviteWithMessagesButtonStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messagesButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageAndFaceTimeStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioCallDisambiguationMenu;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundGradientLayer;
    void /* unknown type, empty encoding */ allButtons;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)audioButtonTapped:(id)a0;
- (void)inviteWithMessagesButtonTapped:(id)a0;
- (void)addPersonButtonTapped:(id)a0;
- (void)messagesButtonTapped:(id)a0;
- (void)videoButtonTapped:(id)a0;

@end
