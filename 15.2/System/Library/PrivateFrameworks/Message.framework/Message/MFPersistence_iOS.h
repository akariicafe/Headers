@class EDRemoteContentManager, MFMailMessageLibrary, NSObject, EDMessagePersistence, EDRemoteContentPersistence, EDSearchableIndexManager, EDMessageChangeManager, EDMailboxPersistence, EDLocalActionPersistence, NSString, EDListUnsubscribeHandler, EDServerMessagePersistenceFactory, EDPersistenceDatabase, EMRemoteContentURLCache, EDRemoteContentCacheConfiguration, EDThreadPersistence, EDConversationPersistence, EDAttachmentPersistenceManager, EMRemoteContentURLSession;
@protocol OS_os_log, EMUserProfileProvider, EDAccountsProvider, EDRemoteSearchProvider;

@interface MFPersistence_iOS : EDPersistence <EFLoggable> {
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDLocalActionPersistence *_localActionPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    id<EDRemoteSearchProvider> _remoteSearchProvider;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDThreadPersistence *_threadPersistence;
    EDRemoteContentManager *_remoteContentManager;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EDAttachmentPersistenceManager *_attachmentPersistenceManager;
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
    EMRemoteContentURLCache *_remoteContentURLCache;
    EMRemoteContentURLSession *_remoteContentURLSession;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain, nonatomic) EDListUnsubscribeHandler *listUnsubscribeHandler;
@property (retain, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleRecurringActivity;
- (id)database;
- (id)remoteContentURLSession;
- (id)attachmentPersistenceManager;
- (void)_configureAttachmentPersistenceManager;
- (id)threadPersistence;
- (id)conversationPersistence;
- (id)initWithPath:(id)a0 inMemoryIdentifier:(id)a1 library:(id)a2 propertyMapper:(id)a3;
- (id)localActionPersistence;
- (void)test_tearDown;
- (id)searchableIndexManager;
- (void)setRemoteContentURLCache:(id)a0;
- (id)remoteSearchProvider;
- (id)remoteContentCacheConfiguration;
- (id)remoteContentManager;
- (void)setRemoteContentURLSession:(id)a0;
- (void)setUpWithMailboxProvider:(id)a0 remoteSearchProvider:(id)a1;
- (void).cxx_destruct;
- (id)remoteContentURLCache;
- (id)messageChangeManager;
- (void)_configureSearchableIndexManagerIfNecessary;
- (id)messagePersistence;
- (id)serverMessagePersistenceFactory;
- (id)persistenceStatistics;
- (id)remoteContentPersistence;

@end
