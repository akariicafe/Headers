@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NEAppInfoCache : NSObject

@property (retain) NSMutableDictionary *cachedSourceAppInfo;
@property (readonly) NSObject<OS_dispatch_queue> *cacheQueue;
@property (copy, nonatomic) id /* block */ customLookupHandler;

+ (id)sharedAppInfoCache;

- (BOOL)appInfo:(id)a0 mismatchedWithUUID:(id)a1 andBundleID:(id)a2;
- (void)addAppInfoToCache:(id)a0;
- (void)performCustomLookupIfNecessaryForPid:(int)a0 UUID:(id)a1 bundleID:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)setAppInfo:(id)a0 forUUID:(id)a1;
- (BOOL)appInfo:(id)a0 shouldOverwriteAppInfo:(id)a1;
- (id)bundleIDWithoutTeamID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)bundleID:(id)a0 matchesBundleID:(id)a1;
- (id)lookupAppInfoForPid:(int)a0 bundleID:(id)a1;
- (void)appInfoForPid:(int)a0 UUID:(id)a1 bundleID:(id)a2 completionHandler:(id /* block */)a3;

@end
