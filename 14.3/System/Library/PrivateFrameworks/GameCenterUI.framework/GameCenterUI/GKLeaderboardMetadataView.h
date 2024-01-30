@class UIStackView, NSLayoutConstraint, UIView, UILabel;

@interface GKLeaderboardMetadataView : UIView

@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) NSLayoutConstraint *containerRightMargin;
@property (retain, nonatomic) UIStackView *header;
@property (retain, nonatomic) NSLayoutConstraint *headerHeight;
@property (retain, nonatomic) UIView *avatarContainer1;
@property (retain, nonatomic) UIView *avatarContainer2;
@property (retain, nonatomic) UIView *avatarContainer3;
@property (retain, nonatomic) UIStackView *body;
@property (retain, nonatomic) UILabel *rank;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *footnote;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureWithRank:(id)a0 title:(id)a1 footnote:(id)a2;
- (void)configureWithRank:(id)a0 title:(id)a1 footnote:(id)a2 altFootnote:(id)a3;
- (void)configureWithPlayers:(id)a0 title:(id)a1 footnote:(id)a2;
- (void)configureFootnote:(id)a0 altFootnote:(id)a1;
- (void)updateAvatarContainer:(id)a0 withPlayer:(id)a1;
- (void)configureWithPlayers:(id)a0 title:(id)a1 footnote:(id)a2 altFootnote:(id)a3;
- (void)stackVertically:(BOOL)a0;

@end
