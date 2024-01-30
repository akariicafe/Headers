@interface ConversationKit.ConversationHUDControlsView : UIView {
    void /* unknown type, empty encoding */ recipe;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ ephemeralAlertTimer;
    void /* unknown type, empty encoding */ ephemeralAlert;
    void /* unknown type, empty encoding */ statusView;
    void /* unknown type, empty encoding */ buttonShelfView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ephemeralAlertStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ephemeralAlertTitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ephemeralAlertSubtitleLabel;
}

- (void)didTapEphemeralAlertStack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
