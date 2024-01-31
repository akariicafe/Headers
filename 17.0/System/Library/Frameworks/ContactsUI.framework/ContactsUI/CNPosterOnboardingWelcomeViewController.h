@class CNContact;
@protocol CNPosterOnboardingWelcomeViewControllerDelegate;

@interface CNPosterOnboardingWelcomeViewController : UIViewController <ContactsUI.CNPosterOnboardingWelcomeViewDelegate>

@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) BOOL hasOptionToSkip;
@property (nonatomic) BOOL hasExistingNickname;
@property (weak, nonatomic) id<CNPosterOnboardingWelcomeViewControllerDelegate> delegate;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewIsAppearing:(BOOL)a0;
- (void)onboardingWelcomeViewDidTapCancel;
- (void)onboardingWelcomeViewDidTapContinue;

@end
