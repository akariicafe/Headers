@class NSString, NSArray, NSURL, NSSQLCore, NSSQLEntity, NSMutableDictionary, NSSQLSaveChangesRequestContext, NSObject, NSSQLiteStatement, NSMutableSet, NSMutableArray, NSSQLitePrefetchRequestCache;
@protocol OS_dispatch_queue;

@interface NSSQLiteConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSSQLCore *_sqlCore;
    NSURL *_workingURL;
    NSString *_dbPath;
    BOOL _transactionIsOpen;
    BOOL _transactionIsCurrentlyReadOnly;
    BOOL _useSyntaxColoredLogging;
    NSSQLiteStatement *_sqlStatement;
    NSArray *_columnsToFetch;
    NSArray *_metadataColumns;
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_vmstatement;
    int _rowsProcessedCount;
    unsigned int _lastEntityKey;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    struct sqlite3_stmt { } *_fetchPKStatement;
    struct sqlite3_stmt { } *_updatePKStatement;
    NSSQLiteStatement *_beginStatement;
    NSSQLiteStatement *_commitStatement;
    NSSQLiteStatement *_rollbackStatement;
    struct __CFDictionary { } *_vmCachedStatements;
    NSMutableDictionary *_pragmaSettings;
    NSMutableSet *_mObjectIDsUpdatedByTriggers;
    NSMutableArray *_mObjectIDsInsertedByDATriggers;
    NSMutableArray *_mObjectIDsUpdatededByDATriggers;
    NSSQLSaveChangesRequestContext *_saveRequest;
    struct __CFDictionary { } *_statementCachesByEntity;
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    struct __CFDictionary { } *_cachedEntityUpdateStatements;
    struct __CFDictionary { } *_cachedEntityConstrainedValuesUpdateStatements;
    double _timeOutOption;
    double _timeOutIncrement;
    void *_extraBuffersForRegisteredFunctions[5];
    NSString *_dbPathRegisteredWithBackupd;
    long long _vacuumTracker;
    NSMutableArray *_temporaryTables;
    struct __sqliteConnectionFlags { unsigned char _readyToBind : 1; unsigned char _fetchInProgress : 1; unsigned char _fileSystemType : 2; unsigned char _proxyLocking : 1; unsigned char _vacuumSetupNeeded : 1; unsigned char _usingWAL : 1; unsigned char _disallowReconnect : 1; unsigned char _isWriter : 1; unsigned char _didSnapshotRecovery : 1; unsigned char _hasTransactionStringTable : 1; unsigned char _isQueryGenTracking : 1; unsigned int _reserved : 20; } _sqliteConnectionFlags;
    unsigned long long _debugInode;
    NSMutableArray *_activeGenerations;
    NSMutableDictionary *_transactionStringName;
    NSMutableDictionary *_usedIndexes;
    long long _cachedPageSize;
}

+ (void)initialize;

- (void)execute;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (int)registerCurrentQueryGenerationWithStore:(id)a0;
- (id)sqlStatement;
- (id)adapter;
- (void)dealloc;
- (id)initAsQueryGenerationTrackingConnectionForSQLCore:(id)a0;
- (id)initForSQLCore:(id)a0;

@end
