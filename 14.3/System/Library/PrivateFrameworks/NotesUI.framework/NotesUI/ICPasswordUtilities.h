@class UIAlertController, NSString;

@interface ICPasswordUtilities : ICSharedPasswordUtilities

@property (nonatomic) BOOL authenticationInProgress;
@property (weak, nonatomic) UIAlertController *displayedAlertController;
@property (retain, nonatomic) NSString *divergedAccountPassword;

+ (id)sharedInstance;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)a0;
+ (BOOL)faceIDAccessAllowedViaTCC;
+ (BOOL)faceIDEnabledForSharedPasswordForAccountID:(id)a0;
+ (BOOL)touchIDEnabledForSharedPasswordForAccountID:(id)a0;
+ (unsigned long long)faceIDAccess;
+ (void)authenticateForMovingNotes:(id)a0 toNoteContainer:(id)a1 displayWindow:(id)a2 authenticateFailureHandler:(id /* block */)a3 movingBlock:(id /* block */)a4;
+ (void)requestAllowFaceIDIfRequired:(id /* block */)a0;
+ (id)faceIDFailurePrompt;
+ (BOOL)deviceHasPasscode;
+ (void)authenticateiCloudPasswordFromRootViewController:(id)a0 account:(id)a1 confirmButtonTitle:(id)a2 reason:(id)a3 completionHandler:(id /* block */)a4;
+ (id)imageForCurrentDecryptedStatusForNote:(id)a0;
+ (void)warnUserCannotPasswordProtectNoteDueToUnsupportedAttachmentsInViewController:(id)a0;
+ (void)warnUserCannotPasswordProtectNoteDueToSharedNoteInViewController:(id)a0;
+ (void)warnUserCannotPasswordProtectDueToManagedAppleIDInViewController:(id)a0;

- (void)applicationDidEnterBackground:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showPasswordSetUpSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)a0 note:(id)a1 displayWindow:(id)a2 failedAttemptHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)authenticateForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateIfNecessaryForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticatePasswordForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)hidePasswordEntrySheet;
- (BOOL)keychainContainsValidItemForAccount:(id)a0;
- (BOOL)keychainContainsValidItemForNote:(id)a0;
- (void)authenticateWithBiometricIDWithReason:(id)a0 intent:(unsigned long long)a1 note:(id)a2 displayWindow:(id)a3 completionHandler:(id /* block */)a4;
- (void)authenticatePasswordWithIntent:(unsigned long long)a0 note:(id)a1 displayWindow:(id)a2 failedAttemptHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_authenticatePasswordWithIntent:(unsigned long long)a0 note:(id)a1 incorrectAttempts:(long long)a2 passwordDiverged:(BOOL)a3 wrongAccountName:(id)a4 displayWindow:(id)a5 failedAttemptHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (void)addTitleAndMessageToAlert:(id)a0 intent:(unsigned long long)a1 note:(id)a2 incorrectAttempts:(long long)a3 passwordDiverged:(BOOL)a4 wrongAccountName:(id)a5;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)a0 withNote:(id)a1;
- (void)showUpdateDivergedPasswordForAccountPassword:(id)a0 oldPassword:(id)a1 account:(id)a2 displayWindow:(id)a3;
- (BOOL)_keychainContainsValidItemForSyncingObject:(id)a0;
- (void)authenticateWithBiometricIDForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)_authenticatePasswordForDeletingNotes:(id)a0 incorrectAttempts:(long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)a0 account:(id)a1 completionHandler:(id /* block */)a2;

@end
