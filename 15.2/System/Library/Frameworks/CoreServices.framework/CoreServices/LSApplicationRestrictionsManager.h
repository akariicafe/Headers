@class NSNumber, NSSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LSApplicationRestrictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_restrictionsAccessQueue;
    NSObject<OS_dispatch_queue> *_signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> *_signerIdentitySyncSource;
    NSNumber *_whitelistState;
    unsigned long long _knownSystemAppDeletionState;
    NSSet *_whitelistedBundleIDs;
    NSSet *_blacklistedBundleIDs;
    NSSet *_restrictedBundleIDs;
    NSNumber *_maximumRating;
}

- (void)handleMCEffectiveSettingsChanged;
- (id)calculateSetDifference:(id)a0 and:(id)a1;
- (BOOL)isFeatureAllowed:(id)a0;
- (id)blacklistedBundleID;
- (id)_LSResolveIdentifiers:(id)a0;
- (void)clearAllValues;
- (void)_pruneObsoleteTrustedSignerIdentities;
- (void)setWhitelistedBundleIDs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_MCProfileConnection;
- (id)_MCRestrictionManager;
- (BOOL)_LSApplyRestrictedSet:(id)a0 forRestriction:(id)a1;
- (void)setBlacklistedBundleIDs:(id)a0;
- (void)setRestrictedBundleIDs:(id)a0;

@end
