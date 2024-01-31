@class CNSharedProfileOnboardingController, CNContactStore, NSString;
@protocol CNContactSharedProfileSettingsActionDelegate;

@interface CNContactSharedProfileSettingsAction : CNContactAction <CNMeCardSharingSettingsViewControllerDelegate, CNSharedProfileOnboardingControllerDelegate>

@property (retain) CNSharedProfileOnboardingController *onboardingController;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id<CNContactSharedProfileSettingsActionDelegate> sharedProfileSettingsActionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (id)meContact;
- (void).cxx_destruct;
- (void)onboardingControllerDidFinishSetup:(id)a0;
- (void)performActionWithSender:(id)a0;
- (void)presentSharingSettingsWithNicknameContact:(id)a0 sender:(id)a1;
- (void)sharingSettingsViewController:(id)a0 didSelectSharingAudience:(unsigned long long)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateSharingState:(BOOL)a1;
- (void)sharingSettingsViewController:(id)a0 didUpdateWithSharingResult:(id)a1;

@end
