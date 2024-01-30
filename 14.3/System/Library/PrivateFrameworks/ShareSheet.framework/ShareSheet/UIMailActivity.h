@class NSString, MFMailComposeViewController;
@protocol UIStateRestoring;

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canSendMailLock;
    BOOL _canSendMailChecked;
    struct { unsigned char _hasManagedAccounts : 1; unsigned char _hasUnmanagedAccounts : 1; } _canSendMail;
}

@property (retain, nonatomic) MFMailComposeViewController *mailComposeViewController;
@property (nonatomic) BOOL hasAnyAccount;
@property (nonatomic) BOOL hasValidAccountForSending;
@property (copy, nonatomic) NSString *subject;
@property (nonatomic) BOOL keyboardVisible;
@property (retain, nonatomic) NSString *autosaveIdentifier;
@property (readonly, nonatomic) id<UIStateRestoring> restorationParent;
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isContentManaged;
@property (copy, nonatomic) NSString *sourceApplicationBundleID;

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;
+ (id)applicationBundleID;

- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (id)activityType;
- (id)init;
- (void).cxx_destruct;
- (id)_mailDraftRestorationURL;
- (BOOL)canShareURLThroughMail:(id)a0;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)a0;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; })_checkCanSendMail;
- (id)activityViewController;
- (id)_stateRestorationDraftIsAvailable;
- (void)autosaveWithHandler:(id /* block */)a0;
- (BOOL)_restoreDraft;
- (void)_saveDraft:(id)a0;
- (id)_bundleIdentifierForActivityImageCreation;
- (id /* block */)_backgroundPreheatBlock;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_cleanup;
- (void)dealloc;
- (void)setRecipients:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (void)_setSessionID:(id)a0;
- (id)activityTitle;
- (void)_setMailSubject:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
