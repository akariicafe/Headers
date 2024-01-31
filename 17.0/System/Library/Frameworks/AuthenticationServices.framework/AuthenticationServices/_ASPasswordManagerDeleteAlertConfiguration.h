@class NSString;

@interface _ASPasswordManagerDeleteAlertConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) BOOL isPermanentlyRemovingFromRecentlyDeleted;

+ (id)configurationForDeleting:(unsigned long long)a0 fromSavedAccount:(id)a1;
+ (id)configurationForDeletingSavedAccounts:(id)a0;
+ (id)_buttonTitleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 isDeletingSharedAccounts:(BOOL)a2;
+ (id)_configurationForAlertToDeletePasskeyFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_configurationForAlertToDeletePasswordAndPasskeyFromSavedAccount:(id)a0;
+ (id)_configurationForAlertToDeletePasswordFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_configurationForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_credentialDeletionStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 isDeletingSharedAccounts:(BOOL)a2 isPermanentlyDeleting:(BOOL)a3;
+ (void)_getInformationForSavedAccountsToDelete:(id)a0 numberOfPasswords:(unsigned long long *)a1 numberOfPasskeys:(unsigned long long *)a2 isDeletingVerificationCodes:(BOOL *)a3 hasSharedAccounts:(BOOL *)a4 areAllAccountsShared:(BOOL *)a5;
+ (BOOL)_isKeychainSyncEnabled;
+ (BOOL)_isPermanentlyDeletingSavedAccount:(id)a0;
+ (id)_subtitleForDeletingNumberOfPasswordsWithVerificationCodes:(unsigned long long)a0;
+ (id)_subtitleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 isDeletingVerificationCodes:(BOOL)a2 isDeletingSharedAccounts:(BOOL)a3 isPermanentlyDeleting:(BOOL)a4;
+ (id)_subtitleStringForAlertToDeletePasskeyFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_subtitleStringForAlertToDeletePasswordFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_subtitleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0 isUndoable:(BOOL)a1;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToPermanentlyDeletePasswordFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToSoftDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_subtitleStringForAlertToSoftDeletePasswordFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeleteNumberOfPasswords:(unsigned long long)a0 numberOfPasskeys:(unsigned long long)a1 isDeletingSharedAccounts:(BOOL)a2 isPermanentlyDeleting:(BOOL)a3;
+ (id)_titleStringForAlertToDeletePasskeyFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeletePasswordFromSavedAccount:(id)a0;
+ (id)_titleStringForAlertToDeleteVerificationCodeFromSavedAccount:(id)a0;
+ (id)configurationForDeleting:(unsigned long long)a0 fromSavedAccount:(id)a1 isUndoable:(BOOL)a2;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)a0 subtitle:(id)a1 buttonTitle:(id)a2 isPermanentlyRemovingFromRecentlyDeleted:(BOOL)a3;

@end
