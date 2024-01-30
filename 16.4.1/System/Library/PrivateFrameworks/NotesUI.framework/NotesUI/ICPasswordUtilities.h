@class UIAlertController, NSString;

@interface ICPasswordUtilities : ICSharedPasswordUtilities

@property (class, readonly, nonatomic) ICPasswordUtilities *sharedInstance;
@property (class, readonly, nonatomic) unsigned long long faceIDAccess;
@property (class, readonly, nonatomic) BOOL faceIDAccessAllowedViaTCC;

@property (nonatomic) BOOL authenticationInProgress;
@property (weak, nonatomic) UIAlertController *displayedAlertController;
@property (retain, nonatomic) NSString *divergedAccountPassword;

+ (BOOL)deviceHasPasscode;
+ (BOOL)faceIDEnabledForSharedPasswordForAccountID:(id)a0;
+ (id)imageForCurrentDecryptedStatusForNote:(id)a0;
+ (void)requestAllowFaceIDIfRequired:(id /* block */)a0;
+ (BOOL)touchIDEnabledForSharedPasswordForAccountID:(id)a0;

- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)a0 withNote:(id)a1;
- (void)hidePasswordEntrySheet;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)a0 account:(id)a1 completionHandler:(id /* block */)a2;
- (void)showPasswordSetUpSheetForAccount:(id)a0 displayWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)showUpdateDivergedPasswordForAccountPassword:(id)a0 oldPassword:(id)a1 account:(id)a2 displayWindow:(id)a3;

@end
