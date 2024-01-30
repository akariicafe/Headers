@interface ICSharedPasswordUtilities : NSObject

@property (retain, nonatomic) id displayedSheet;

+ (id)createNoteFromNote:(id)a0 isPasswordProtected:(BOOL)a1 removingOriginalNote:(BOOL)a2;
+ (BOOL)isAuthenticatedForNote:(id)a0;
+ (BOOL)isAuthenticatedForAccount:(id)a0;
+ (id)passwordChangeCountUserDefaultsKeyAsReset:(BOOL)a0;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)a0;
+ (id)defaultAccountForPasswordProtectedNotes;
+ (id)passwordCapableAccounts;
+ (void)resetTimeoutTimer;
+ (id)nonDeletedLockedNotesFromNotes:(id)a0;
+ (long long)recentPasswordChangeCountAsReset:(BOOL)a0;
+ (void)incrementRecentPasswordChangeCountAsReset:(BOOL)a0;
+ (void)clearRecentPasswordChangeCountAsReset:(BOOL)a0;
+ (void)showFirstTimePasswordProtectNoteAlertIfNecessaryForDisplayWindow:(id)a0;
+ (BOOL)accountPasswordExists;
+ (BOOL)hasSameCryptoKeyForNote:(id)a0 andAccount:(id)a1;
+ (BOOL)isPasswordSetForAccount:(id)a0;
+ (BOOL)unlockedNotesOrKeysExist;
+ (void)lockAllNotes;
+ (BOOL)isAuthenticatedForDefaultAccount;
+ (BOOL)authenticateWithPassword:(id)a0 forAccount:(id)a1;
+ (BOOL)authenticateWithPassword:(id)a0 forNote:(id)a1;
+ (BOOL)isPassword:(id)a0 correctForNote:(id)a1;
+ (BOOL)isPassword:(id)a0 correctForAccount:(id)a1;
+ (id)accountWithPassword:(id)a0;
+ (BOOL)hasAnyAccountWithPassword;
+ (BOOL)isDefaultAccountForPasswordNotesLocalAccount;
+ (BOOL)isDefaultAccountForPasswordNotesiCloudAccount;
+ (BOOL)setPassword:(id)a0 hint:(id)a1 forAccount:(id)a2;
+ (BOOL)setPassword:(id)a0 hint:(id)a1 oldPassword:(id)a2 forAccount:(id)a3;
+ (BOOL)passwordCapableAccountExists;
+ (BOOL)hasMultiplePasswordCapableAccounts;
+ (id)preferredHintAccount;
+ (void)updateAllNotesWithOldPassword:(id)a0 toAccountPassword:(id)a1 fromAccount:(id)a2;
+ (void)resetPasswordForAccount:(id)a0;
+ (void)resetAllSharedPasswords;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cryptorCachedKeysDidEmpty:(id)a0;
- (void)_authenticateForNote:(id)a0 intent:(unsigned long long)a1 displayWindow:(id)a2 failedAttemptHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)showPasswordSetUpSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)a0 note:(id)a1 displayWindow:(id)a2 failedAttemptHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_recursivelyAuthenticateForNotes:(id)a0 intent:(unsigned long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)authenticateForNote:(id)a0 intent:(unsigned long long)a1 displayWindow:(id)a2 failedAttemptHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)authenticateForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateForNotes:(id)a0 intent:(unsigned long long)a1 displayWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticatePasswordForDeletingNotes:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
