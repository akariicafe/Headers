@class FAFamilySetupPrompter, NSString, ACAccount, UIViewController;

@interface FAFamilySettings : FAFamilyCircleRequest <FAFamilySetupPrompterDelegate> {
    FAFamilySetupPrompter *_prompter;
    FAFamilySettings *_retainedSelf;
}

@property UIViewController *presentingViewController;
@property (retain) ACAccount *iTunesAccount;
@property BOOL isFirstRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)launchiCloudFamilySettingsWithOptions:(id)a0;
- (void)_launchPrefsUsingDaemonWithOptions:(id)a0;
- (void)familySetupPrompterDidFinish:(id)a0;
- (void)launchiCloudFamilySettings;
- (BOOL)isAccountSignedIn;
- (void).cxx_destruct;

@end
