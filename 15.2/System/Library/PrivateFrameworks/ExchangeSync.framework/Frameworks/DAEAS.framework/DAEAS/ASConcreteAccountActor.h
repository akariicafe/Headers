@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages>

@property (retain, nonatomic) ASClientAccount *account;

+ (void)_initializeActorRunLoop;
+ (void)_runActorThreadWithStartupLock:(id)a0;
+ (struct __CFRunLoop { } *)_actorRunLoop;
+ (struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)_actorPThread;
+ (BOOL)_actorRunLoopInitialized;

- (void)disable;
- (oneway void)shutdown;
- (oneway void)startup;
- (oneway void)cancelTaskWithID:(int)a0;
- (void).cxx_destruct;
- (int)mailNumberOfPastDaysToSync;
- (id)mailboxes;
- (int)sendMessageWithRFC822Data:(id)a0 messageID:(id)a1 outgoingMessageType:(int)a2 originalMessageFolderID:(id)a3 originalMessageItemID:(id)a4 originalMessageLongID:(id)a5 originalAccountID:(id)a6 useSmartTasksIfPossible:(BOOL)a7 isUserRequested:(BOOL)a8 consumer:(id)a9 context:(id)a10;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (id)draftsFolder;
- (id)initWithDAAccount:(id)a0;
- (void)performFolderChange:(id)a0 isUserRequested:(BOOL)a1;
- (id)encryptionIdentityPersistentReference;
- (int)supportsMailboxSearch;
- (int)supportsEmailFlagging;
- (int)performMailboxRequests:(id)a0 mailbox:(id)a1 previousTag:(id)a2 clientWinsOnSyncConflict:(BOOL)a3 isUserRequested:(BOOL)a4 consumer:(id)a5;
- (int)supportsUniqueServerId;
- (int)supportsDraftFolderSync;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)a0 inFolderWithId:(id)a1;
- (id)unactionableICSRepresentationForMetaData:(id)a0 inFolderWithId:(id)a1 outSummary:(id *)a2;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)a0 withTag:(id *)a1;
- (oneway void)monitorFoldersForUpdates:(id)a0 persistent:(BOOL)a1;
- (oneway void)stopMonitoringAllFolders;
- (int)supportsConversations;
- (oneway void)performSearchQuery:(id)a0;
- (oneway void)cancelSearchQuery:(id)a0;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)a0 deleted:(id)a1 foldersTag:(id)a2;
- (id)signingIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)a0;
- (oneway void)setEncryptionIdentityPersistentReference:(id)a0;
- (int)performResolveRecipientsRequest:(id)a0 consumer:(id)a1;
- (id)customSignature;
- (oneway void)setCustomSignature:(id)a0;
- (int)performFetchMessageSearchResultRequests:(id)a0 consumer:(id)a1;
- (int)performFetchAttachmentRequest:(id)a0 consumer:(id)a1;
- (int)performMoveRequests:(id)a0 consumer:(id)a1;
- (oneway void)cancelAllSearchQueries;
- (BOOL)searchQueriesRunning;
- (int)performMailboxRequest:(id)a0 mailbox:(id)a1 previousTag:(id)a2 clientWinsOnSyncConflict:(BOOL)a3 isUserRequested:(BOOL)a4 consumer:(id)a5;
- (int)supportsSmartForwardReply;
- (oneway void)setMailNumberOfPastDaysToSync:(int)a0;
- (BOOL)generatesBulletins;
- (oneway void)setGeneratesBulletins:(BOOL)a0;
- (oneway void)monitorFoldersForUpdates:(id)a0;
- (oneway void)stopMonitoringFoldersForUpdates:(id)a0;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)a0;
- (int)sendSmartMessageWithRFC822Data:(id)a0 messageID:(id)a1 outgoingMessageType:(int)a2 originalMessageFolderID:(id)a3 originalMessageItemID:(id)a4 originalMessageLongID:(id)a5 originalAccountID:(id)a6 replaceOriginalMime:(BOOL)a7 isUserRequested:(BOOL)a8 consumer:(id)a9 context:(id)a10;
- (oneway void)_newASPolicyKeyNotification:(id)a0;
- (oneway void)_daemonDiedNotification:(id)a0;
- (oneway void)_folderUpdatedNotification:(id)a0;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (void)_performSynchronousSerialOnActorQueue:(id /* block */)a0;
- (void)_performAsynchronousSerialOnActorQueue:(id /* block */)a0;
- (void)_sendFailureToConsumer:(id)a0;

@end
