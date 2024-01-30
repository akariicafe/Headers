@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _applicationCacheQuotaManager;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (id)initWithURL:(id)a0;
- (void)setQuota:(unsigned long long)a0;
- (unsigned long long)usage;
- (id)stringValue;
- (id)databaseIdentifier;
- (unsigned short)port;
- (id)host;
- (id)_initWithString:(id)a0;
- (id)protocol;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)quota;
- (void *)_core;
- (id)applicationCacheQuotaManager;
- (id)databaseQuotaManager;
- (id)toString;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;

@end
