@interface DTExpiredPidCacheService : XRExpiredPidCacheServiceProtected

+ (id)defaultCache;
+ (void)disableExpiredPidCaching;

- (void)dealloc;
- (id)init;
- (id)allExpiredSignatures;
- (void)enableCaching:(BOOL)a0;
- (id)signatureForExpiredPid:(id)a0;

@end
