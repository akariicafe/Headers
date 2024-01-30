@interface ConversationKit.PushToTalkView : UIView {
    void /* unknown type, empty encoding */ conversationControlsManager;
    void /* unknown type, empty encoding */ leaveButton;
    void /* unknown type, empty encoding */ talkButton;
    void /* unknown type, empty encoding */ pttSessionDetailsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leaveLabelButtonView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_talkLabelButtonView;
    void /* unknown type, empty encoding */ leftMarginLayoutGuide;
    void /* unknown type, empty encoding */ rightMarginLayoutGuide;
    void /* unknown type, empty encoding */ centerContentLayoutGuide;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ alwaysOnDisplayDimmingView;
    void /* unknown type, empty encoding */ topDetailContainerMarginConstant;
    void /* unknown type, empty encoding */ bottomButtonContainerMarginConstant;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)openPTTApp:(id)a0;

@end
