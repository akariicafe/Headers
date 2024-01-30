@class _PASLock;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
}

+ (id)defaultPolicy;

- (void)_loadAssetData;
- (BOOL)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (void)_resetGuardedData;
- (void).cxx_destruct;
- (id)_readAssetData:(id)a0;
- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (BOOL)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;
- (id)init_;

@end
