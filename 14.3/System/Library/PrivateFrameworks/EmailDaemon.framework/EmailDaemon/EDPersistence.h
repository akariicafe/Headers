@class NSObject, EDMessagePersistence, EDActivityPersistence, EDSearchableIndexManager, EDMessageChangeManager, EDMailboxPersistence, EDGmailLabelPersistence, EDPersistenceHookRegistry, EDServerMessagePersistenceFactory, EDPersistenceDatabase, EDVIPManager, EDLocalActionPersistence, NSString, EDThreadPersistence, EDConversationPersistence, EMBlockedSenderManager;
@protocol OS_os_log, EMUserProfileProvider, EDAccountsProvider, EDRemoteSearchProvider;

@interface EDPersistence : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
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
@property (readonly) EDVIPManager *vipManager;
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) EDActivityPersistence *activityPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleRecurringActivity;
- (void)test_tearDown;
- (id)init;
- (void).cxx_destruct;
- (id)initWithVIPManager:(id)a0;
- (void)_commonInitWithVIPManager:(id)a0;

@end
