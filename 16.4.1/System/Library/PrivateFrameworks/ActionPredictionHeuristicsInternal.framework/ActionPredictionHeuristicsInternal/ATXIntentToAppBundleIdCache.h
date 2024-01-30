@class NSMutableDictionary;

@interface ATXIntentToAppBundleIdCache : NSObject {
    NSMutableDictionary *_intentTypeToBundleIdsCache;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_appRegistrationDidChange:(id)a0;
- (void)_slowlyFetchBundleIdsForIntent:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchBundleIdsForIntent:(id)a0 completionHandler:(id /* block */)a1;

@end
