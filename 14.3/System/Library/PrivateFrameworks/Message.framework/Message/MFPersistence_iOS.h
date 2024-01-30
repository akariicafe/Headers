@class MFMailMessageLibrary, NSObject, EDMessagePersistence, EDSearchableIndexManager, EDMessageChangeManager, EDMailboxPersistence, EDLocalActionPersistence, NSString, EDListUnsubscribeHandler, EDServerMessagePersistenceFactory, EDPersistenceDatabase, EDThreadPersistence, EDConversationPersistence;
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
- (void)test_tearDown;
- (id)database;
- (id)localActionPersistence;
- (void).cxx_destruct;
- (id)conversationPersistence;
- (id)messageChangeManager;
- (void)_configureSearchableIndexManagerIfNecessary;
- (id)initWithPath:(id)a0 inMemoryIdentifier:(id)a1 library:(id)a2 propertyMapper:(id)a3;
- (id)searchableIndexManager;
- (id)threadPersistence;
- (id)messagePersistence;
- (id)serverMessagePersistenceFactory;
- (id)remoteSearchProvider;
- (void)setUpWithMailboxProvider:(id)a0 remoteSearchProvider:(id)a1;

@end
