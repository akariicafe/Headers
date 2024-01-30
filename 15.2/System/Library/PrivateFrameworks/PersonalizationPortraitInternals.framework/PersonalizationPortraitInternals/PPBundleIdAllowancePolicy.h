@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> _trialToken;
}

+ (id)defaultPolicy;

- (void)_resetGuardedData;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (id)init_;
- (id)_readAssetData:(id)a0;
- (BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (void)_loadAssetData;
- (BOOL)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (void).cxx_destruct;
- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (BOOL)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;
- (void)dealloc;

@end
