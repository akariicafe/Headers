@class UITraitCollection, CNContact, CNContactQuickActionsController, CNStarkActionView, NSArray, NSString, UIViewController;
@protocol CNKeyDescriptor, UINavigationControllerDelegate;

@interface CNStarkActionsController : UIViewController <CNContactQuickActionViewContainer, CNContactQuickActionsControllerDelegate, CNStarkActionViewDelegate, UINavigationControllerDelegate>

@property (class, readonly, nonatomic) id<CNKeyDescriptor> descriptorForRequiredKeys;

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContactQuickActionsController *quickActionsController;
@property (weak, nonatomic) UIViewController *disambiguationViewController;
@property (weak, nonatomic) id<UINavigationControllerDelegate> phoneNavigationControllerDelegate;
@property (readonly, nonatomic) CNStarkActionView *messageActionView;
@property (readonly, nonatomic) CNStarkActionView *callActionView;
@property (readonly, nonatomic) CNStarkActionView *directionsActionView;
@property (nonatomic) double willTransitionToBoundsWidth;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)viewForActionType:(id)a0;
- (void)updateViewConstraints;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)actionViewTapped:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)contactQuickActionsController:(id)a0 presentDisambiguationViewController:(id)a1 forActionType:(id)a2;
- (void)contactQuickActionsController:(id)a0 dismissDisambiguationViewController:(id)a1 forActionType:(id)a2;
- (void)addForwardingDelegate;
- (void)removeForwardingDelegate;
- (void)forwardDelegateForNavigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)setupViews;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)updateViews;

@end
