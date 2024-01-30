@class BRCAppLibrary, NSString, NSArray, NSURL, CKRecordID, CKShareMetadata, BRCAccountSession, NSObject, BRCXPCClient, BRCClientZone, BRCItemID;
@protocol OS_dispatch_queue, BRCUserNotifier;

@interface BRCSharingAcceptFlowOperation : _BRCOperation <LSOpenResourceOperationDelegate, BRCForegroundClient, BRCOperationSubclass> {
    id<BRCUserNotifier> _userNotification;
    BRCAccountSession *_session;
    NSArray *_acceptationFlow;
    unsigned long long _stepIndex;
    NSURL *_shareURL;
    CKRecordID *_shareID;
    CKShareMetadata *_shareMetadata;
    BRCItemID *_linkItemID;
    BRCItemID *_rootItemID;
    NSString *_unsaltedBookmarkData;
    BRCClientZone *_clientZone;
    BRCAppLibrary *_appLibrary;
    BOOL _needsZoneAndAppLibraryActivation;
    NSURL *_liveFileURL;
    NSString *_rootFilename;
    NSString *_linkFilename;
    BRCXPCClient *_xpcClient;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

+ (void)_openiCloudSettings;
+ (void)_openShareURLInWebBrowser:(id)a0 withReason:(id)a1;
+ (id)_runningShareIDs;
+ (Class)userNotificationClass;
+ (void)_openAppStoreForShareURL:(id)a0;

- (void)openResourceOperationDidComplete:(id)a0;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (BOOL)_isOwner;
- (void)_performNextStep;
- (void)_isAppInstalled;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)subclassableDescriptionWithContext:(id)a0;
- (id)_stepNameAtIndex:(unsigned long long)a0 withPrefix:(id)a1;
- (BOOL)_isFolderShare;
- (BOOL)_isiWorkShare;
- (void)_activateSharedZoneIfNeeded;
- (void)_isFolderSharingSupported;
- (void)_isUserSignedInToiCloudDrive;
- (void)_showSharingJoinDialog;
- (void)_parseShareMetadata;
- (void)_openiWorkAppPreemptively;
- (void)_waitForSharedItemToSyncDownOnOwner;
- (void)_waitForSharedItemToBeOnDiskOnOwner;
- (void)_acceptShareURL;
- (void)_waitForSharedItemToSyncDownOnRecipient;
- (void)_waitForSharedItemToBeOnDiskOnRecipient;
- (void)_locateSharedItemOnDisk;
- (void)_openSharedItemIfStillNeeded;
- (void)_endAcceptationFlow;
- (void)_isAccountRestricted;
- (void)_createSideFaultOnDisk;
- (void)_checkIfShouldWaitUntilDownloadCompletion;
- (void)_openSharedSideFaultFile;
- (void)_prepareToDownloadSharedDocument;
- (void)_performNextStepInQueue;
- (void)_jumpToSelectorInQueue:(SEL)a0;
- (BOOL)_isLinkInsideFolderShare;
- (BOOL)_isDocumentLinkInsideFolderShare;
- (void)_showGenericErrorAndFinish:(id)a0;
- (BOOL)_isiWorkLinkInsideFolderShare;
- (BOOL)_isOwnerOrShareAlreadyAccepted;
- (void)_captureOpenInfoFromDocument:(id)a0;
- (void)_jumpToSelector:(SEL)a0;
- (void)_openSharedSideFaultFileWithAppID:(id)a0;
- (void)_openDocumentInDocumentsAppIfInstalled:(id)a0;
- (id)initWithShareMetadata:(id)a0 client:(id)a1 session:(id)a2;
- (void)moveDialogToFront;
- (BOOL)_isDirectoryLinkInsideFolderShare;

@end
