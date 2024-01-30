@class UIView, NSString, CNContact, CNActionsView, CNGroupAvatarViewController, CNGroupIdentity, CNGroupIdentityInlineActionsViewConfiguration, UILabel, CNContactFormatter;

@interface CNSyndicationViewController : UIViewController <CNActionsViewProtocol>

@property (retain, nonatomic) CNGroupIdentity *group;
@property (retain, nonatomic) CNContact *senderContact;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration;
@property (retain, nonatomic) UIView *nameContainerView;
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) CNActionsView *actionsView;
@property (retain, nonatomic) UIView *actionsContainerView;
@property (copy, nonatomic) NSString *subtitleText;

+ (id)descriptorForRequiredKeys;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didSelectAction:(id)a0 withSourceView:(id)a1 longPress:(BOOL)a2;
- (id)initWithGroup:(id)a0 senderContact:(id)a1 actionsViewConfiguration:(id)a2;
- (void)setupActionViews;
- (void)setupContainerViews;
- (void)setupNameViews;
- (id)subtitleTextForSenderContact:(id)a0;

@end
