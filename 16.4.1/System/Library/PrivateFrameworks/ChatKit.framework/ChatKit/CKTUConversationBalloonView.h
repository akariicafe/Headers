@class NSString, UIImageView, NSUUID, UILabel, CKAvatarView, UIButton;

@interface CKTUConversationBalloonView : CKColoredBalloonView {
    char _orientation;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel1;
@property (retain, nonatomic) UILabel *subtitleLabel2;
@property (retain, nonatomic) UIButton *joinButton;
@property (nonatomic) BOOL animating;
@property (readonly, nonatomic) BOOL shouldUseAXLayout;
@property (readonly, nonatomic) BOOL shouldRenderJoinButtonAsIcon;
@property (copy, nonatomic) NSString *joinButtonText_TestingOverride;
@property (nonatomic) unsigned long long conversationAVMode;
@property (retain, nonatomic) NSUUID *tuConversationUUID;
@property (nonatomic, getter=isUnknownSender) BOOL unknownSender;

+ (struct CGSize { double x0; double x1; })appIconSize;

- (void)prepareForDisplay;
- (void)setOrientation:(char)a0;
- (char)color;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)prepareForReuse;
- (char)orientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_joinButtonText;
- (BOOL)joinButtonIsShowingImageContent;
- (id)_currentCall;
- (void)_joinButtonTapped:(id)a0;
- (void)_multiWayCallStateChanged:(id)a0;
- (BOOL)activeCallIsJoinable;
- (void)chatParticipantsChanged:(id)a0;
- (void)configureForCurrentState;
- (void)configureForTUConversationChatItem:(id)a0;
- (void)configureIconView;
- (void)configureImageView;
- (void)configureJoinButton;
- (void)configureSubtitle1;
- (void)configureSubtitle2;
- (void)configureTitle;
- (void)didHoverOverCell:(id)a0;
- (void)formatIconViewForActivity;
- (void)formatIconViewForFaceTime;
- (void)formatImageViewForActivity;
- (void)formatImageViewForFaceTime;
- (BOOL)joinButtonIsShowingTextContent;
- (struct CGSize { double x0; double x1; })joinButtonRenderedAsIconSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (double)stringWidthConstraint;
- (id)subtitleColor;
- (id)tuConversation;
- (BOOL)wantsGradient;

@end
