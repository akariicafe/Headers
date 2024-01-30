@class NSString, UIImageView, NSUUID, UILabel, UIButton;

@interface CKTUConversationBalloonView : CKColoredBalloonView

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIButton *joinButton;
@property (nonatomic) BOOL animating;
@property (readonly, nonatomic) BOOL shouldRenderJoinButtonAsIcon;
@property (copy, nonatomic) NSString *joinButtonText_TestingOverride;
@property (retain, nonatomic) NSUUID *tuConversationUUID;

+ (struct CGSize { double x0; double x1; })facetimeIconSize;
+ (id)facetimeImageForSize:(struct CGSize { double x0; double x1; })a0;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (char)color;
- (void)layoutSubviews;
- (void)configureForTUConversationChatItem:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_currentCall;
- (void)_joinButtonTapped:(id)a0;
- (id)_joinButtonText;
- (void)_updateStatusLabelForDuration;
- (id)tuConversation;
- (void)configureForCurrentState;
- (id)_joinStateStatusString;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (BOOL)wantsGradient;
- (BOOL)joinButtonIsShowingImageContent;
- (BOOL)joinButtonIsShowingTextContent;

@end
