@class UIStackView, UIVisualEffectView, NSLayoutConstraint, UIView, UILabel;

@interface GKLeaderboardMetadataView : UIView

@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) NSLayoutConstraint *containerRightMargin;
@property (retain, nonatomic) UIStackView *header;
@property (retain, nonatomic) NSLayoutConstraint *headerHeight;
@property (retain, nonatomic) UIView *avatarContainer1;
@property (retain, nonatomic) UIView *avatarContainer2;
@property (retain, nonatomic) UIView *avatarContainer3;
@property (retain, nonatomic) UIStackView *body;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (retain, nonatomic) UILabel *rank;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *footnote;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)configureFootnote:(id)a0 altFootnote:(id)a1;
- (void)configureVibrancy:(BOOL)a0;
- (void)configureWithPlayers:(id)a0 title:(id)a1 footnote:(id)a2;
- (void)configureWithPlayers:(id)a0 title:(id)a1 footnote:(id)a2 altFootnote:(id)a3;
- (void)configureWithRank:(id)a0 title:(id)a1 footnote:(id)a2 altFootnote:(id)a3 vibrant:(BOOL)a4;
- (void)configureWithRank:(id)a0 title:(id)a1 footnote:(id)a2 vibrant:(BOOL)a3;
- (void)stackVertically:(BOOL)a0;
- (void)updateAvatarContainer:(id)a0 withPlayer:(id)a1;

@end
