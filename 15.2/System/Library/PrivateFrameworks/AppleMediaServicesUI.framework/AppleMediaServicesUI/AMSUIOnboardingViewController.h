@class NSObject, NSString, OBWelcomeController, UIImage, OBPrivacyLinkController, UITraitCollection;
@protocol OS_dispatch_queue;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) OBWelcomeController *welcomeController;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *primaryButtonText;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (readonly, nonatomic) BOOL isPresentedInFormSheet;
@property (readonly, nonatomic) UITraitCollection *cappedTraitCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic) BOOL viewHasAppeared;
@property (readonly, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) UIImage *rightImage;
@property (copy, nonatomic) id /* block */ primaryButtonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privacyLinkIdentifiersFromController:(id)a0;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)keyCommands;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)a0;
- (void)commonSetupWithPrimaryButtonText:(id)a0 privacyLinkBundleIdentifiers:(id)a1;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 features:(id)a2 primaryButtonText:(id)a3 privacyLinkBundleIdentifier:(id)a4;
- (void)didTapPrimaryButton:(id)a0;
- (id)childTraitCollectionForViewController:(id)a0;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 descriptionText:(id)a2 primaryButtonText:(id)a3 privacyLinkController:(id)a4;
- (id)initWithTitleText:(id)a0 features:(id)a1 primaryButtonText:(id)a2 privacyLinkController:(id)a3;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 descriptionText:(id)a2 primaryButtonText:(id)a3 privacyLinkBundleIdentifier:(id)a4;
- (id)initWithTitleText:(id)a0 features:(id)a1 primaryButtonText:(id)a2 privacyLinkBundleIdentifier:(id)a3;
- (void)commonInitWithPrimaryButtonText:(id)a0 privacyLinkController:(id)a1;
- (void)updateOverrideTraits;

@end
