@class NSSet, NSDictionary;

@interface RESiriActionsDonationsWhitelist : NSObject {
    NSDictionary *_whitelist;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSSet *intentWhitelistBundleIDs;
@property (readonly, nonatomic) NSSet *userActivityWhitelistBundleIDs;

+ (id)sharedInstance;

- (BOOL)intentIsWhitelistedForBundleID:(id)a0 andTypeName:(id)a1;
- (id)intentWhitelistedRelevanceThresholdForBundleID:(id)a0 andTypeName:(id)a1;
- (id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)a0 andActivityType:(id)a1;
- (BOOL)userActivityIsWhitelistedForBundleID:(id)a0 andActivityType:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
