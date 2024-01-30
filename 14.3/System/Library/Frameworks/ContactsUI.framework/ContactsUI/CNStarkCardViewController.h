@class CNStarkActionsController, CNContact, NSArray, UILayoutGuide, NSString, CNAvatarViewController, CNStarkContactInfoViewController;
@protocol CNKeyDescriptor;

@interface CNStarkCardViewController : UIViewController <CNContactContentViewControllerDelegate>

@property (class, readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (readonly, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) CNStarkContactInfoViewController *contactInfoViewController;
@property (readonly, nonatomic) CNStarkActionsController *actionsController;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) NSArray *displayedContactProperties;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) UILayoutGuide *centeringLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *avatarAndDetailsLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)starkCardControllerForCalendarEventWithContact:(id)a0;

- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContact:(id)a1 propertyKey:(id)a2 propertyIdentifier:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)setupViewControllers;
- (id)initWithContact:(id)a0 displayedContactProperties:(id)a1;
- (void)setupLayoutGuides;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)updateViewControllers;
- (void)updateNavigationItems;
- (void)showMore:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
