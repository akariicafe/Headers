@class CNSharedProfileStateOracle, CNSharedProfileBannerStyle, UIFont, UILabel, CNGroupIdentityInlineActionsViewConfiguration, UIButton, UIView, NSLayoutConstraint, NSString, CNGroupIdentityInlineActionsViewController, CNGroupAvatarViewController, CNContactFormatter, UIStackView, CNBadgingAvatarBadgeStyleSettings, NSArray, CNAvatarAccessoryView, CNSharedProfileBannerView, CNGroupIdentity, UIImage;
@protocol CNGroupIdentityHeaderViewControllerDelegate;

@interface CNGroupIdentityHeaderViewController : UIViewController <CNGroupIdentityHeaderContainerViewwDelegate, CNGroupIdentityInlineActionsViewControllerDelegate, CNSharedProfileBannerViewDelegate>

@property (retain, nonatomic) UIStackView *titleLabelStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIFont *titleLabelFont;
@property (retain, nonatomic) UIFont *titleLabelWrappedFont;
@property (retain, nonatomic) UIStackView *titleBadgeStackView;
@property (retain, nonatomic) NSArray *horizontalTitleLabelConstraints;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) NSLayoutConstraint *actionButtonZeroHeightConstraint;
@property (nonatomic) double actionsViewTopMargin;
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController;
@property (retain, nonatomic) CNGroupIdentityInlineActionsViewController *actionsViewController;
@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (retain, nonatomic) UIView *sharedProfileBannerContainerView;
@property (retain, nonatomic) NSLayoutConstraint *actionsViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *sharedProfileBannerContainerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *sharedProfileBannerContainerTrailingConstraint;
@property (retain, nonatomic) CNSharedProfileBannerView *sharedProfileBannerView;
@property (nonatomic) unsigned long long tappedSharedProfileBannerAction;
@property (nonatomic) BOOL hasPerformedSharedProfileBannerAnimation;
@property (retain, nonatomic) NSString *actionButtonTitle;
@property (weak, nonatomic) id<CNGroupIdentityHeaderViewControllerDelegate> delegate;
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration;
@property (retain, nonatomic) UIImage *avatarBadgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *avatarBadgeStyleSettings;
@property (nonatomic) BOOL isMarkedForSyndication;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;
@property (retain, nonatomic) UILabel *customSubtitleLabel;
@property (retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (retain, nonatomic) CNSharedProfileBannerStyle *sharedProfileBannerStyle;
@property (nonatomic) BOOL shouldShowContactBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void)viewDidLayoutSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)hideTitleLabel:(BOOL)a0;
- (void)setupAvatarView;
- (void)setupTitleLabel;
- (void)sharedProfileBannerView:(id)a0 didDismissWithUpdatedContact:(id)a1 forAction:(unsigned long long)a2;
- (void)didTapActionButton;
- (id)displayNameForGroupIdentity;
- (struct CGSize { double x0; double x1; })estimatedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)groupContactIsSameAsCurrentContact:(id)a0;
- (void)groupIdentityDidUpdate:(id)a0;
- (void)groupIdentityInlineActionsViewController:(id)a0 didPerformActionOfType:(id)a1 fromDisambiguation:(BOOL)a2;
- (void)groupIdentityInlineActionsViewController:(id)a0 willPresentDisambiguationUIForActionType:(id)a1;
- (void)hideSharedProfileBannerViewForDismiss;
- (id)initWithGroupIdentity:(id)a0;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1 avatarViewControllerSettings:(id)a2;
- (void)performAnimationToNewContact:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)preferredContentSizeCategoryIsXL;
- (void)setShouldHideTitleLabel:(BOOL)a0;
- (void)setupActionButton;
- (void)setupActionsView;
- (void)setupCustomSubtitleLabel;
- (void)setupEmptyActionsView;
- (void)setupPopulatedActionsView;
- (void)setupSharedProfileBannerView;
- (void)sharedProfileBannerView:(id)a0 didUpdateContact:(id)a1 forAction:(unsigned long long)a2;
- (BOOL)shouldShowActionButton;
- (BOOL)shouldShowActionsView;
- (BOOL)shouldShowSharedProfileBannerView;
- (BOOL)shouldUseTitleLabelWrappedFontGivenBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForLayoutInContainerSize:(struct CGSize { double x0; double x1; })a0;
- (double)titleLabelBaselineOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleLabelBoundingRectForFont:(id)a0 text:(id)a1 maxWidth:(double)a2 context:(id)a3;
- (void)updateActionButton;
- (void)updateActionButtonFont;
- (void)updateGroupWithContact:(id)a0;
- (void)updateTitleLabel;
- (void)updateTitleLabelFont;
- (id)viewForActionAtIndex:(unsigned long long)a0;

@end
