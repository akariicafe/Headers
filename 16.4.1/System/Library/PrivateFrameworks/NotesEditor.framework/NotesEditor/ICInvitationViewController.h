@class SWHighlight, SWAttributionView, UIImageView, ICTextBackgroundView, UILabel, ICInvitation, UIButton;

@interface ICInvitationViewController : ICNAViewController

@property (weak, nonatomic) ICTextBackgroundView *backgroundView;
@property (weak, nonatomic) UIImageView *invitationImageView;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) UIButton *viewButton;
@property (weak, nonatomic) UIButton *largeViewButton;
@property (weak, nonatomic) SWAttributionView *attributionView;
@property (retain, nonatomic) ICInvitation *invitation;
@property (retain, nonatomic) SWHighlight *highlight;
@property (nonatomic) BOOL showsActivityIndicator;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } backgroundInsets;
@property (copy, nonatomic) id /* block */ didTapViewButton;

- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)accessibilityDarkerSystemColorsStatusDidChange:(id)a0;
- (void)viewButtonDidTap:(id)a0;

@end
