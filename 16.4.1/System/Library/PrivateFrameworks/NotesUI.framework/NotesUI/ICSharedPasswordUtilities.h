@class NSArray, ICAccount;

@interface ICSharedPasswordUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isAuthenticatedForDefaultAccount;
@property (class, readonly, nonatomic) BOOL hasAnyAccountWithPassword;
@property (class, readonly, nonatomic) BOOL isDefaultAccountForPasswordNotesLocalAccount;
@property (class, readonly, nonatomic) BOOL isDefaultAccountForPasswordNotesiCloudAccount;
@property (class, readonly, nonatomic) ICAccount *defaultAccountForPasswordProtectedNotes;
@property (class, readonly, nonatomic) BOOL passwordCapableAccountExists;
@property (class, readonly, nonatomic) BOOL hasMultiplePasswordCapableAccounts;
@property (class, readonly, copy, nonatomic) NSArray *passwordCapableAccounts;
@property (class, readonly, nonatomic) ICAccount *preferredHintAccount;
@property (class, readonly, nonatomic) BOOL accountPasswordExists;
@property (class, readonly, nonatomic) BOOL unlockedNotesOrKeysExist;

@property (retain, nonatomic) id displayedSheet;

+ (id)accountWithPassword:(id)a0;
+ (BOOL)authenticateWithPassword:(id)a0 forObject:(id)a1;
+ (BOOL)isPassword:(id)a0 correctForObject:(id)a1;
+ (void)lockAllNotes;
+ (void)resetAllSharedPasswords;
+ (void)resetPasswordForAccount:(id)a0;
+ (void)resetTimeoutTimer;
+ (BOOL)setPassword:(id)a0 hint:(id)a1 forAccount:(id)a2;
+ (BOOL)setPassword:(id)a0 hint:(id)a1 oldPassword:(id)a2 forAccount:(id)a3;
+ (void)updateAllNotesWithOldPassword:(id)a0 toAccountPassword:(id)a1 fromAccount:(id)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cryptorCachedKeysDidEmpty:(id)a0;
- (void)showMigrationPromptIfNeededForAccount:(id)a0 displayWindow:(id)a1;
- (void)showPasswordSetUpSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
