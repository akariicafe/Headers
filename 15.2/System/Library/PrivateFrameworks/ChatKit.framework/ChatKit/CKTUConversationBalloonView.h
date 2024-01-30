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
@property (retain, nonatomic) NSUUID *tuConversationUUID;
@property (nonatomic, getter=isUnknownSender) BOOL unknownSender;

+ (struct CGSize { double x0; double x1; })appIconSize;

- (void)prepareForDisplay;
- (void)layoutSubviews;
- (id)_joinButtonText;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (void)_joinButtonTapped:(id)a0;
- (void)didHoverOverCell:(id)a0;
- (void)configureForCurrentState;
- (void)_multiWayCallStateChanged:(id)a0;
- (void)chatParticipantsChanged:(id)a0;
- (BOOL)wantsGradient;
- (BOOL)activeCallIsJoinable;
- (struct CGSize { double x0; double x1; })joinButtonRenderedAsIconSize;
- (void)configureIconView;
- (double)stringWidthConstraint;
- (void)configureTitle;
- (void)configureSubtitle1;
- (void)configureSubtitle2;
- (void)configureJoinButton;
- (void)formatImageViewForActivity;
- (void)formatImageViewForFaceTime;
- (void)formatIconViewForFaceTime;
- (void)formatIconViewForActivity;
- (id)_currentCall;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)joinButtonIsShowingImageContent;
- (BOOL)joinButtonIsShowingTextContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (char)color;
- (char)orientation;
- (void).cxx_destruct;
- (void)setOrientation:(char)a0;
- (void)configureForTUConversationChatItem:(id)a0;
- (void)prepareForReuse;
- (BOOL)__im_ff_isExpanseEnabled;
- (id)tuConversation;
- (void)configureImageView;

@end
