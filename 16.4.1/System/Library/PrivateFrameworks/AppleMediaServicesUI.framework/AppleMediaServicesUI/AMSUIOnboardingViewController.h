@class NSObject, NSString, OBWelcomeController, UIImage, OBPrivacyLinkController, UITraitCollection;
@protocol OS_dispatch_queue;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) OBWelcomeController *welcomeController;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *primaryButtonText;
@property (retain, nonatomic) NSString *secondaryButtonText;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (readonly, nonatomic) BOOL isPresentedInFormSheet;
@property (readonly, nonatomic) UITraitCollection *cappedTraitCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) BOOL wasNavigationBarHidden;
@property (readonly, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) UIImage *rightImage;
@property (copy, nonatomic) id /* block */ primaryButtonCallback;
@property (copy, nonatomic) id /* block */ secondaryButtonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privacyLinkIdentifiersFromController:(id)a0;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (id)keyCommands;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTapSecondaryButton:(id)a0;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 descriptionText:(id)a2 primaryButtonText:(id)a3 privacyLinkBundleIdentifier:(id)a4;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 features:(id)a2 primaryButtonText:(id)a3 privacyLinkBundleIdentifier:(id)a4;
- (id)childTraitCollectionForViewController:(id)a0;
- (void)commonInitWithPrimaryButtonText:(id)a0 privacyLinkController:(id)a1;
- (void)commonSetupWithPrimaryButtonText:(id)a0 privacyLinkBundleIdentifiers:(id)a1;
- (void)commonSetupWithPrimaryButtonText:(id)a0 secondaryButtonText:(id)a1 privacyLinkBundleIdentifiers:(id)a2;
- (void)didTapPrimaryButton:(id)a0;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 descriptionText:(id)a2 primaryButtonText:(id)a3 privacyLinkController:(id)a4;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 descriptionText:(id)a2 primaryButtonText:(id)a3 secondaryButtonText:(id)a4 privacyLinkController:(id)a5;
- (id)initWithTitleText:(id)a0 features:(id)a1 primaryButtonText:(id)a2 privacyLinkBundleIdentifier:(id)a3;
- (id)initWithTitleText:(id)a0 features:(id)a1 primaryButtonText:(id)a2 privacyLinkController:(id)a3;
- (void)updateOverrideTraits;

@end
