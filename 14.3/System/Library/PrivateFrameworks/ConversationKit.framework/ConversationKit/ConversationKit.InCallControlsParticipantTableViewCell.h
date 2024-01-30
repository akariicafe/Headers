@interface ConversationKit.InCallControlsParticipantTableViewCell : UITableViewCell {
    void /* unknown type, empty encoding */ nameLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ cameraIcon;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ callDelegate;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ ringButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)didTapRing:(id)a0;

@end
