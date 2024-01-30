@class NSXPCConnection;

@interface ISIconCacheClient : ISIconCacheIOS

@property unsigned long long sandboxExtensionHandle;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)serviceName;

- (void)invalidateCacheEntriesForBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)iconBitmapDataWithResourceLocator:(id)a0 variant:(int)a1 options:(int)a2;
- (void)_fetchCacheURLAndSalt;

@end
