@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_bundleIDToPIDMap;
}

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasEntitlement:(id)a0 forPID:(int)a1;
- (void)cacheEntitlement:(id)a0 forPID:(int)a1 bundleID:(id)a2;

@end
