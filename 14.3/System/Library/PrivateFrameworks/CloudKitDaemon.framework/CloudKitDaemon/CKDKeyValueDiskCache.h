@class PQLConnection, NSString, CKDClientContext;

@interface CKDKeyValueDiskCache : NSObject

@property (retain, nonatomic) PQLConnection *db;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) CKDClientContext *context;
@property (nonatomic) double expirationTimeout;

- (id)dbPath;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCachedValue:(id)a0 forKey:(id)a1;
- (id)initWithIdentifier:(id)a0 context:(id)a1;
- (id)cachedValueForKey:(id)a0;
- (BOOL)setupCacheWithError:(id *)a0;
- (void)_garbageCollectExpiredEntries;
- (void)removeCachedValueForKey:(id)a0;
- (void)deleteCachedValuesBecauseOfLowDisk;

@end
