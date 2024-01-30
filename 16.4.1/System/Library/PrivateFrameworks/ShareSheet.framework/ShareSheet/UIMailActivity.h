@class NSString, MFMailComposeViewController;
@protocol SFCollaborationItem, SFCollaborationService, UIStateRestoring;

@interface UIMailActivity : UIActivity <UIStateRestoring, UIManagedConfigurationRestrictableActivity, UIPeopleSuggestionRecipientActivity, UICollaborationActivity> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canSendMailLock;
    BOOL _canSendMailChecked;
    BOOL _managesOwnPresentationChecked;
    struct { unsigned char _hasManagedAccounts : 1; unsigned char _hasUnmanagedAccounts : 1; } _canSendMail;
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
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) id<SFCollaborationItem> collaborationItem;
@property (nonatomic) BOOL isCollaborative;
@property (weak, nonatomic) id<SFCollaborationService> collaborationService;

+ (id)applicationBundleID;
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (void)_cleanup;
- (id)activityTitle;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (id)activityType;
- (void)dealloc;
- (void)setRecipients:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setMailSubject:(id)a0;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)prepareWithActivityItems:(id)a0;
- (id /* block */)_backgroundPreheatBlock;
- (id)_bundleIdentifierForActivityImageCreation;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; })_checkCanSendMail;
- (void)_deleteMailDraftIdentifierRestorationArchive:(id)a0;
- (BOOL)_dismissActivityFromViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_mailDraftRestorationURL;
- (BOOL)_managesOwnPresentation;
- (void)_prepareWithActivityItems:(id)a0 completion:(id /* block */)a1;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_restoreDraft;
- (void)_saveDraft:(id)a0;
- (id)_stateRestorationDraftIsAvailable;
- (void)autosaveWithHandler:(id /* block */)a0;
- (BOOL)canShareURLThroughMail:(id)a0;

@end
