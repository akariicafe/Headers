@class PQLConnection, NSString, CKDContainer;

@interface CKDKeyValueDiskCache : NSObject

@property (retain, nonatomic) PQLConnection *db;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) CKDContainer *container;
@property (nonatomic) double expirationTimeout;

- (void)setCachedValue:(id)a0 forKey:(id)a1;
- (id)cachedValueForKey:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dbPath;
- (id)initWithIdentifier:(id)a0 container:(id)a1;
- (BOOL)setupCacheWithError:(id *)a0;
- (void)_garbageCollectExpiredEntries;
- (void)removeCachedValueForKey:(id)a0;
- (void)deleteCachedValuesBecauseOfLowDisk;

@end
