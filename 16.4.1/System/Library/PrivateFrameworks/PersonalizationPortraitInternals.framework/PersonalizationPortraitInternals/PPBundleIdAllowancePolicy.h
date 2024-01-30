@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> _trialToken;
}

+ (id)defaultPolicy;

- (BOOL)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (id)init_;
- (BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (id)_readAssetData:(id)a0;
- (void)dealloc;
- (void)_loadAssetData;
- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (void)_resetGuardedData;
- (void).cxx_destruct;
- (BOOL)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;

@end
