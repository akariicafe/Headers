@class NSString, MFMailComposeViewController;
@protocol UIStateRestoring;

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canSendMailLock;
    BOOL _canSendMailChecked;
    struct { unsigned char _hasManagedAccounts : 1; unsigned char _hasUnmanagedAccounts : 1; } _canSendMail;
    BOOL _canSendMailInNewScene;
    BOOL _didPresentModally;
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

+ (id)applicationBundleID;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (id)activityType;
- (void)_cleanup;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)_setSessionID:(id)a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)_setMailSubject:(id)a0;
- (id)activityViewController;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; })_checkCanSendMail;
- (id)_mailDraftRestorationURL;
- (BOOL)canShareURLThroughMail:(id)a0;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)a0;
- (id)_stateRestorationDraftIsAvailable;
- (void)autosaveWithHandler:(id /* block */)a0;
- (BOOL)_restoreDraft;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (void)_saveDraft:(id)a0;
- (id)_bundleIdentifierForActivityImageCreation;
- (id /* block */)_backgroundPreheatBlock;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)init;
- (void)setRecipients:(id)a0;
- (id)activityTitle;
- (void)dealloc;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
