@class NSString, NFLazy, NSArray, NSHashTable, FCUserEventHistoryMetadata, NSDate, NSURL;

@interface FCUserEventHistoryStorage : NSObject <FCUserEventHistoryStorageType>

@property (retain, nonatomic) NFLazy *lazyRootDirectory;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSArray *prunedSessionIDs;
@property (nonatomic) unsigned long long prunedSessionSize;
@property (retain, nonatomic) FCUserEventHistoryMetadata *metadata;
@property (nonatomic) unsigned long long currentSize;
@property (readonly, nonatomic) NSArray *sessionIDs;
@property (readonly, nonatomic) NSArray *sessions;
@property (readonly, nonatomic) NSDate *earliestSessionDate;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSURL *baseDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_deleteSessions:(id)a0 pruned:(BOOL)a1;
- (void)_pruneToMaxSessionAge:(unsigned long long)a0;
- (void)clearAllSessions;
- (void)addObserver:(id)a0;
- (void)_pruneToMaxSessionCount:(unsigned long long)a0;
- (id)sizeString;
- (id)initWithPrivateDataDirectory:(id)a0;
- (void)_pruneSessions:(id)a0;
- (id)pruneWithPolicies:(id)a0;
- (id)_filePathForSessionID:(id)a0;
- (void)removeObserver:(id)a0;
- (void)clearSessionsWithIDs:(id)a0;
- (void)storeSessionID:(id)a0 sessionData:(id)a1;
- (void)writeJSON:(id /* block */)a0;
- (id)rootDirectory;
- (void)_pruneToMaxSize:(long long)a0;
- (void)setMetadataWithAggregateStoreGenerationTime:(long long)a0 aggregateTotalCount:(long long)a1 meanCountOfEvents:(double)a2 standardDeviationOfEvents:(double)a3 totalEventsCount:(long long)a4;
- (void)storeSessionID:(id)a0 compressedSessionData:(id)a1 notify:(BOOL)a2;
- (void).cxx_destruct;

@end
