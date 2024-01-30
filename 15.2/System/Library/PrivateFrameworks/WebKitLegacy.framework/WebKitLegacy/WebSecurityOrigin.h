@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
    struct WebSecurityOriginPrivate { } *_private;
    id<WebQuotaManager> _applicationCacheQuotaManager;
    id<WebQuotaManager> _databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)a0;

- (void *)_core;
- (unsigned long long)usage;
- (id)databaseQuotaManager;
- (id)applicationCacheQuotaManager;
- (id)stringValue;
- (id)databaseIdentifier;
- (id)initWithURL:(id)a0;
- (unsigned long long)quota;
- (id)toString;
- (id)host;
- (void)setQuota:(unsigned long long)a0;
- (id)_initWithWebCoreSecurityOrigin:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)protocol;
- (unsigned short)port;
- (void)dealloc;

@end
