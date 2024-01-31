@class CNContactStore, NSString, CNSNaPSetupFlowManager, UIViewController;
@protocol CNSharedProfileOnboardingControllerDelegate;

@interface CNSharedProfileOnboardingController : NSObject <CNMeCardSharingSettingsViewControllerDelegate, CNSNaPSetupFlowManagerDelegate, CNPresenterDelegate>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) CNSNaPSetupFlowManager *setupFlowManager;
@property (retain, nonatomic) UIViewController *baseViewController;
@property (weak, nonatomic) id<CNSharedProfileOnboardingControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isPresentingModalViewController;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (id)userDefaults;
+ (id)sharingSettingsViewControllerForNicknameContact:(id)a0 meContact:(id)a1 mode:(long long)a2 contactStore:(id)a3;
+ (void)writeToDefaultsDidSkipPosterSetup:(BOOL)a0;

- (id)meContact;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (void)updateNicknameWithSharingState:(BOOL)a0;
- (BOOL)accountCanCreateSNaP;
- (BOOL)accountCanCreateSNaPWithShouldShowErrorAlert:(BOOL)a0;
- (BOOL)alwaysShowSNaPOnboarding;
- (BOOL)canShowOnboarding;
- (BOOL)didSkipPosterSetup;
- (void)dismiss:(id)a0;
- (BOOL)hasCompletedOnboarding;
- (BOOL)isPhotosReadyForOnboarding;
- (long long)lastShownOnboardingVersion;
- (id)meOrPrimaryAccountContact;
- (void)onboardingFromFlowManager:(id)a0 didSelectSharingAudience:(unsigned long long)a1;
- (void)onboardingFromFlowManager:(id)a0 didUpdateSharingState:(BOOL)a1;
- (void)onboardingFromFlowManager:(id)a0 didUpdateWithSharingResult:(id)a1;
- (void)presentOnboardingFlowForNicknameContact:(id)a0 mode:(long long)a1 fromViewController:(id)a2;
- (void)presentOnboardingFlowIfNeededForMode:(long long)a0 fromViewController:(id)a1;
- (void)presentOnboardingFlowIfNeededForSettingsMode:(long long)a0 fromViewController:(id)a1 completion:(id /* block */)a2;
- (void)presentSettingsForMode:(long long)a0 fromViewController:(id)a1;
- (void)presentSettingsForNicknameContact:(id)a0 meContact:(id)a1 mode:(long long)a2 fromViewController:(id)a3;
- (void)presentSettingsForNicknameContact:(id)a0 mode:(long long)a1 fromViewController:(id)a2;
- (void)sender:(id)a0 dismissViewController:(id)a1;
- (void)sender:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)sender:(id)a0 presentViewController:(id)a1;
- (void)sharingSettingsViewController:(id)a0 didSelectSharingAudience:(unsigned long long)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateSharingState:(BOOL)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateWithSharingResult:(id)a1;
- (BOOL)shouldShowOnboarding;
- (BOOL)shouldShowOnboardingForSettingsWithNicknameContact:(id)a0 meContact:(id)a1 mode:(long long)a2;
- (void)showMultiplePhoneNumbersAlertForNicknamesWithSender:(id)a0;
- (void)showiCloudNotSignedInAlertForNicknamesWithSender:(id)a0;
- (void)startOnboardingOrEditForMode:(long long)a0 fromViewController:(id)a1;
- (void)updateNicknameWithAudience:(unsigned long long)a0;
- (void)updateNicknameWithSharingResult:(id)a0;
- (void)writeToDefaultsCompletedOnboarding:(BOOL)a0;
- (void)writeToDefaultsOnboardingVersion:(long long)a0;

@end
