@interface ConversationKit.InCallControlsTitleCell : UITableViewCell {
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ isAccessiblityConstraintsEnabled;
    void /* unknown type, empty encoding */ singleLabelTopConstraint;
    void /* unknown type, empty encoding */ singleLabelBottomConstraint;
    void /* unknown type, empty encoding */ dualLabelTopConstraint;
    void /* unknown type, empty encoding */ dualLabelBottomConstraint;
    void /* unknown type, empty encoding */ interLabelConstraint;
    void /* unknown type, empty encoding */ trailingTextLayoutGuide;
    void /* unknown type, empty encoding */ trailingTextShowingButtonLayoutConstraint;
    void /* unknown type, empty encoding */ trailingTextHidingButtonLayoutConstraint;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ messagesButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)didTapMessagesButton:(id)a0;

@end
