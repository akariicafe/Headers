@class NSArray, NSString, NSURL, NSHashTable;

@interface FCUserEventHistoryStorage : NSObject <FCUserEventHistoryStorageType>

@property (retain, nonatomic) NSURL *rootDirectory;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSArray *prunedSessionIDs;
@property (nonatomic) unsigned long long prunedSessionSize;
@property (readonly, nonatomic) NSArray *sessionIDs;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSURL *baseDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_pruneSessions:(id)a0;
- (void)_pruneToMaxSize:(long long)a0;
- (void)_pruneToMaxSessionCount:(unsigned long long)a0;
- (void)_pruneToMaxSessionAge:(unsigned long long)a0;
- (id)_filePathForSessionID:(id)a0;
- (void)storeSessionID:(id)a0 compressedSessionData:(id)a1;
- (id)_deleteSessions:(id)a0 pruned:(BOOL)a1;
- (void)storeSessionID:(id)a0 sessionData:(id)a1;
- (void)clearAllSessions;
- (id)initWithPrivateDataDirectory:(id)a0;
- (id)pruneWithPolicies:(id)a0;
- (void).cxx_destruct;
- (id)sizeString;

@end
