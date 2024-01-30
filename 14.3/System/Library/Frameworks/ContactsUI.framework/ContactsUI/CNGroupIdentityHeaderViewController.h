@class UIFont, CNGroupIdentityInlineActionsViewController, NSString, CNGroupIdentityInlineActionsViewConfiguration, UIButton, CNGroupIdentity, CNGroupAvatarViewController, NSLayoutConstraint, UILabel, CNContactFormatter;
@protocol CNGroupIdentityHeaderViewControllerDelegate;

@interface CNGroupIdentityHeaderViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIFont *titleLabelFont;
@property (retain, nonatomic) UIFont *titleLabelWrappedFont;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) NSLayoutConstraint *actionButtonHeightConstraint;
@property (nonatomic) double actionsViewTopMargin;
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController;
@property (retain, nonatomic) CNGroupIdentityInlineActionsViewController *actionsViewController;
@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (retain, nonatomic) NSString *actionButtonTitle;
@property (weak, nonatomic) id<CNGroupIdentityHeaderViewControllerDelegate> delegate;
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)setupAvatarView;
- (id)initWithGroupIdentity:(id)a0;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1;
- (id)initWithGroupIdentity:(id)a0 actionsViewConfiguration:(id)a1 avatarViewControllerSettings:(id)a2;
- (void)setupTitleLabel;
- (void)setupActionButton;
- (void)setupActionsView;
- (void)setupEmptyActionsView;
- (void)setupPopulatedActionsView;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)updateTitleLabelFont;
- (void)groupIdentityDidUpdate:(id)a0;
- (void)didTapActionButton;
- (id)viewForActionAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForLayoutInContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)displayNameForGroupIdentity;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;

@end
