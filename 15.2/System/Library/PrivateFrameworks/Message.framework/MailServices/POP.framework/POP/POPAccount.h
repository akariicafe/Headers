@class NSArray, NSConditionLock, MFActivityMonitor, MFPOP3Connection, MFLock, NSString;

@interface POPAccount : MailAccount {
    MFActivityMonitor *_fetchMonitor;
    MFPOP3Connection *_connection;
    NSConditionLock *_sharedConnectionCondition;
    unsigned long long _connectionsInUse;
    NSArray *_currentUIDs;
    MFLock *_connectionActivityLock;
    float _connectionTimeout;
    BOOL _fetcherNeedsReset;
    BOOL _hasDoneBackgroundSynchronization;
    BOOL _shouldAttemptAPOP;
    NSString *_oldestMessageUID;
    NSString *_newestMessageUID;
    long long _numberOfKnownUIDs;
}

+ (void)initialize;
+ (id)accountTypeIdentifier;
+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (id)accountTypeString;
+ (void *)legacyKeychainProtocol;
+ (id)saslProfileName;
+ (id)csAccountTypeString;

- (BOOL)requiresAuthentication;
- (void).cxx_destruct;
- (id)serviceName;
- (void)releaseAllConnections;
- (id)authenticatedConnection;
- (Class)connectionClass;
- (id)certUIService;
- (id)secureServiceName;
- (id)statisticsKind;
- (BOOL)canGoOffline;
- (void)releaseAllForcedConnections;
- (void)setPreferredAuthScheme:(id)a0;
- (id)mailboxUidOfType:(int)a0 createIfNeeded:(BOOL)a1;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (id)_URLScheme;
- (Class)storeClass;
- (id)mailboxPathExtension;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (BOOL)supportsPurge;
- (Class)storeClassForMailbox:(id)a0;
- (void)_deleteHook;
- (BOOL)canCreateNewMailboxes;
- (BOOL)canMailboxBeRenamed:(id)a0;
- (BOOL)supportsSyncingReadState;
- (void)checkInConnection:(id)a0 currentUIDs:(id)a1;
- (long long)fetchNumNewMessages:(unsigned long long)a0 oldMessages:(unsigned long long)a1 preservingUID:(id)a2 withStore:(id)a3;
- (long long)numberOfKnownUIDs;
- (void)setNumberOfKnownUIDs:(long long)a0;
- (id)oldestKnownMessageUID;
- (void)setOldestKnownMessageUID:(id)a0;
- (id)newestKnownMessageUID;
- (void)setNewestKnownMessageUID:(id)a0;
- (int)messageDeletionPolicy;
- (unsigned int)delayedMessageDeletionInterval;
- (BOOL)shouldAttemptAPOP;
- (void)setShouldAttemptAPOP:(BOOL)a0;
- (void)closeCachedConnection;
- (void)closeCachedConnectionForcedOnly:(id)a0;
- (id)_getCachedConnection;
- (id)_createNewConnection;
- (void)scheduleDisconnect;
- (void)closeConnection:(id)a0 andSaveUIDs:(id)a1;
- (void)setMessageDeletionPolicy:(int)a0;
- (void)setDelayedMessageDeletionInterval:(unsigned int)a0;
- (unsigned long long)connectionsInUse;

@end
