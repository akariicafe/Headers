@class NSArray, NSDate;

@interface CKSQLiteCacheTable : CKSQLiteTable {
    BOOL _expirationTimeEnabled;
    BOOL _entryCountLimitEnabled;
    BOOL _dataSizeLimitEnabled;
    NSDate *_cachedOldestExpirationDate;
    unsigned long long _cachedEntryCount;
    unsigned long long _dataSize;
    NSArray *_dataSizeProperties;
    long long _pendingCountChange;
    long long _pendingSizeChange;
    BOOL _isDatabaseAvailable;
    BOOL _inTransaction;
    BOOL _isExpiring;
}

@property (readonly, nonatomic) unsigned long long entryCountLimit;
@property (readonly, nonatomic) unsigned long long dataSizeLimit;
@property (readonly, nonatomic) double cacheExpirationTime;
@property (readonly, nonatomic) double expireDelay;
@property (readonly, nonatomic) NSDate *lastExpireDate;

+ (id)dbProperties;

- (id)performTransaction:(id /* block */)a0;
- (void)expire;
- (id)insertObject:(id)a0;
- (id)finishInitializing:(BOOL)a0;
- (id)newEntryObject;
- (void).cxx_destruct;
- (unsigned long long)dataSizeForEntry:(id)a0 error:(id *)a1;
- (unsigned long long)deleteEntriesMatching:(id)a0 label:(id)a1 error:(id *)a2 predicate:(id /* block */)a3;
- (unsigned long long)expireByCount;
- (unsigned long long)expireByDataSize;
- (unsigned long long)expireByTime:(id)a0;
- (id)extendExpiration:(id)a0;
- (void)fetchExpirationDate:(id)a0;
- (id)initWithLogicalTableName:(id)a0 entryCountLimit:(unsigned long long)a1 dataSizeLimit:(unsigned long long)a2 expirationTime:(double)a3 expireDelay:(double)a4;
- (id)oldestExpirationDate;
- (id)oldestFirstEnumerator;
- (void)periodicExpire;
- (void)setCacheExpirationTime:(double)a0;
- (void)setDataSizeLimit:(unsigned long long)a0;
- (void)setEntryCountLimit:(unsigned long long)a0;
- (id)setEntryExpiration:(id)a0 date:(id)a1;
- (unsigned long long)setProperties:(id)a0 valuesToStore:(id)a1 inEntriesMatching:(id)a2 label:(id)a3 error:(id *)a4 predicate:(id /* block */)a5;

@end
