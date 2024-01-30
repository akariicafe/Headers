@class NSNumber, NSSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LSApplicationRestrictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_restrictionsAccessQueue;
    NSObject<OS_dispatch_queue> *_signerIdentitySyncQueue;
    NSObject<OS_dispatch_source> *_signerIdentitySyncSource;
    NSNumber *_whitelistState;
    unsigned long long _knownSystemAppDeletionState;
}

@property (readonly, getter=isWhitelistEnabled) BOOL whitelistEnabled;
@property (readonly, getter=isOpenInRestrictionInEffect) BOOL openInRestrictionInEffect;
@property (readonly, getter=isAdTrackingEnabled) BOOL adTrackingEnabled;
@property (readonly, getter=isLimitAdTrackingForced) BOOL limitAdTrackingForced;
@property (readonly, getter=isSystemAppDeletionEnabled) BOOL systemAppDeletionEnabled;
@property (readonly) NSNumber *maximumRating;
@property (readonly) NSSet *restrictedBundleIDs;
@property (readonly) NSSet *blacklistedBundleIDs;
@property (readonly) NSSet *whitelistedBundleIDs;
@property (copy, nonatomic) NSSet *removedSystemApplicationIdentifiers;

+ (id)sharedInstance;
+ (id)activeRestrictionIdentifiers;

- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)a0 originatingAppBundleID:(id)a1 originatingAccountIsManaged:(BOOL)a2;
- (id)_MCProfileConnection;
- (void)scheduleSyncTrustedSignerIdenties;
- (id)init;
- (void)beginListeningForChanges;
- (void).cxx_destruct;
- (void)_syncTrustedSignerIdenties;
- (BOOL)isRatingAllowed:(id)a0;
- (void)clearAllValues;
- (id)_MCRestrictionManager;
- (id)blacklistedBundleID;
- (void)setWhitelistedBundleIDs:(id)a0;
- (BOOL)isFeatureAllowed:(id)a0;
- (void)setRestrictedBundleIDs:(id)a0;
- (BOOL)setApplication:(id)a0 removed:(BOOL)a1;
- (BOOL)_LSApplyRestrictedSet:(id)a0 forRestriction:(id)a1;
- (id)_LSResolveIdentifiers:(id)a0;
- (BOOL)isApplicationRestricted:(id)a0 checkFeatureRestrictions:(BOOL)a1;
- (BOOL)cleanRemovedSystemApplicationsList;
- (BOOL)isAppExtensionRestricted:(id)a0;
- (void)handleMCEffectiveSettingsChanged;
- (id)calculateSetDifference:(id)a0 and:(id)a1;
- (void)setBlacklistedBundleIDs:(id)a0;
- (BOOL)isApplicationRestricted:(id)a0 checkFlags:(unsigned long long)a1;
- (BOOL)isApplicationRestricted:(id)a0;

@end
