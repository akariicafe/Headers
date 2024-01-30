@class NSSet, NSString, MOEffectiveSettings, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LSApplicationRestrictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_restrictionsAccessQueue;
    NSObject<OS_dispatch_queue> *_signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> *_signerIdentitySyncSource;
    NSNumber *_allowlistState;
    unsigned long long _knownSystemAppDeletionState;
    BOOL _server_newsWidgetIsRestricted;
    NSSet *_allowlistedBundleIDs;
    NSSet *_restrictedBundleIDs;
    NSNumber *_maximumRating;
    NSString *_systemMode;
}

@property (retain) MOEffectiveSettings *effectiveSettings;

- (BOOL)isFeatureAllowed:(id)a0;
- (id)_LSResolveIdentifiers:(id)a0;
- (void)setAllowlistedBundleIDs:(id)a0;
- (id)_MCRestrictionManager;
- (void)clearAllValues;
- (id)_MCProfileConnection;
- (id)calculateSetDifference:(id)a0 and:(id)a1;
- (void)setRestrictedBundleIDs:(id)a0;
- (id)init;
- (BOOL)_LSApplyRestrictedSet:(id)a0 forRestriction:(id)a1;
- (void)_pruneObsoleteTrustedSignerIdentities;
- (void)handleSystemModeChangeTo:(id)a0;
- (void).cxx_destruct;
- (void)handleMCEffectiveSettingsChanged;

@end
