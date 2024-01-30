@class EDServerMessagePersistenceFactory, EDRemoteContentManager, EMRemoteContentURLCache, EDMailboxPersistence, EDRemoteContentPersistence, NSString, EDActivityPersistence, EDSearchableIndexManager, EDPersistenceDatabase, EDGmailLabelPersistence, EDMessageChangeManager, EDRemoteContentCacheConfiguration, EDMessagePersistence, EDContentRuleListManager, EDThreadPersistence, EDConversationPersistence, NSObject, EMBlockedSenderManager, EMRemoteContentURLSession, EDPersistenceHookRegistry, EDVIPManager, EDAttachmentPersistenceManager, EDLocalActionPersistence;
@protocol OS_os_log, EMUserProfileProvider, EDAccountsProvider, EDRemoteSearchProvider;

@interface EDPersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain) EDVIPManager *vipManager;
@property (readonly) EDPersistenceDatabase *database;
@property (readonly) EDConversationPersistence *conversationPersistence;
@property (readonly) EDLocalActionPersistence *localActionPersistence;
@property (readonly) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory;
@property (readonly) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) EDThreadPersistence *threadPersistence;
@property (readonly, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly) EDMessagePersistence *messagePersistence;
@property (readonly) EDMessageChangeManager *messageChangeManager;
@property (readonly) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly) EDSearchableIndexManager *searchableIndexManager;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) EDActivityPersistence *activityPersistence;
@property (readonly) EDRemoteContentManager *remoteContentManager;
@property (readonly) EDRemoteContentPersistence *remoteContentPersistence;
@property (readonly) EDAttachmentPersistenceManager *attachmentPersistenceManager;
@property (readonly, nonatomic) EDRemoteContentCacheConfiguration *remoteContentCacheConfiguration;
@property (retain, nonatomic) EMRemoteContentURLCache *remoteContentURLCache;
@property (retain, nonatomic) EMRemoteContentURLSession *remoteContentURLSession;
@property (readonly, nonatomic) EDContentRuleListManager *contentRuleListManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleRecurringActivity;
- (void)test_tearDown;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)persistenceStatistics;
- (id)persistenceStateWithStatistics:(id)a0;

@end
