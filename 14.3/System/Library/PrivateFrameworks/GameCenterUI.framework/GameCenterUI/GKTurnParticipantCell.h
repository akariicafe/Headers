@class UIStackView, UIView, NSArray, GKTurnBasedParticipant, GKLabel, UIImageView, UIButton, NSDictionary, NSLayoutConstraint, GKTurnBasedMatch, UILabel, _TtC12GameCenterUI22OverlappingPlayersView;

@interface GKTurnParticipantCell : GKBasePlayerCell

@property (retain, nonatomic) GKLabel *bottomLabel;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UIStackView *textStackView;
@property (retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textStackViewToSuperViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textStackViewToIconViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusImageTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textContainerTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailButtonConstraint;
@property (retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewTrailingConstraint;
@property (retain, nonatomic) _TtC12GameCenterUI22OverlappingPlayersView *overlappingPlayersView;
@property (retain, nonatomic) UIView *overlappingPlayersViewContainer;
@property (retain, nonatomic) UILabel *additionalPlayerCountLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSDictionary *playerAvatarMapping;
@property (retain, nonatomic) NSArray *previousParticipants;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) GKTurnBasedParticipant *participant;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic) BOOL isDetail;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIView *divider;

+ (void)registerCellClassesForCollectionView:(id)a0;
+ (id)itemHeightList;
+ (double)defaultRowHeight;

- (void).cxx_destruct;
- (void)establishConstraints;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)detailPressed:(id)a0;
- (double)getOverlappingPlayerAvatarIconSize;
- (void)updateMarginConstraints;
- (void)configureForDetail;
- (void)configureForMatch;
- (BOOL)matchWantsLocalPlayerAttention;
- (void)configureOverlappingPlayersView;
- (id)getPlayerIDForAllNonAutomatchedTurnBasedParticipants;
- (BOOL)needsRefreshOverlappingPlayersView;
- (void)updateOverlappingPlayerViewsAvatar;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateUIBasedOnTraitCollection;

@end
