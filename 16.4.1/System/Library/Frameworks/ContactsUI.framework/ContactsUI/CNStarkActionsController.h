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

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithContact:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)actionViewTapped:(id)a0;
- (void)addForwardingDelegate;
- (void)contactQuickActionsController:(id)a0 dismissDisambiguationViewController:(id)a1 forActionType:(id)a2;
- (void)contactQuickActionsController:(id)a0 presentDisambiguationViewController:(id)a1 forActionType:(id)a2;
- (void)forwardDelegateForNavigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)removeForwardingDelegate;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)updateViews;
- (id)viewForActionType:(id)a0;

@end
