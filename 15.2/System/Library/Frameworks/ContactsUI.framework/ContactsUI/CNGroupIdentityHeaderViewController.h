@class UIFont, CNGroupIdentityInlineActionsViewConfiguration, UILabel, UIButton, NSLayoutConstraint, NSString, CNGroupIdentityInlineActionsViewController, CNBadgingAvatarBadgeStyleSettings, CNAvatarAccessoryView, CNGroupAvatarViewController, CNContactFormatter, CNGroupIdentity, UIImage;
@protocol CNGroupIdentityHeaderViewControllerDelegate;

@interface CNGroupIdentityHeaderViewController : UIViewController <CNGroupIdentityHeaderContainerViewwDelegate, CNGroupIdentityInlineActionsViewControllerDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIFont *titleLabelFont;
@property (retain, nonatomic) UIFont *titleLabelWrappedFont;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) NSLayoutConstraint *actionButtonZeroHeightConstraint;
@property (nonatomic) double actionsViewTopMargin;
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController;
@property (retain, nonatomic) CNGroupIdentityInlineActionsViewController *actionsViewController;
@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (retain, nonatomic) NSString *actionButtonTitle;
@property (weak, nonatomic) id<CNGroupIdentityHeaderViewControllerDelegate> delegate;
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration;
@property (retain, nonatomic) UIImage *avatarBadgeImage;
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *avatarBadgeStyleSettings;
@property (nonatomic) BOOL isMarkedForSyndication;
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge;
@property (nonatomic) BOOL shouldShowContactBusy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })estimatedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setupAvatarView;
- (void)setupTitleLabel;
- (id)initWithGroupIdentity:(id)a0;
- (void)setupActionButton;
- (void)groupIdentityInlineActionsViewController:(id)a0 didPerformActionOfType:(id)a1 fromDisambiguation:(BOOL)a2;
- (void)groupIdentityInlineActionsViewController:(id)a0 willPresentDisambiguationUIForActionType:(id)a1;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1;
- (BOOL)preferredContentSizeCategoryIsXL;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1 avatarViewControllerSettings:(id)a2;
- (double)titleLabelBaselineOffset;
- (void)updateActionButtonFont;
- (void)setupActionsView;
- (void)updateActionButton;
- (BOOL)shouldShowActionsView;
- (void)setupEmptyActionsView;
- (void)setupPopulatedActionsView;
- (void)hideTitleLabel:(BOOL)a0;
- (BOOL)shouldShowActionButton;
- (void)updateTitleLabel;
- (void)updateTitleLabelFont;
- (void)groupIdentityDidUpdate:(id)a0;
- (void)didTapActionButton;
- (id)viewForActionAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForLayoutInContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)displayNameForGroupIdentity;

@end
