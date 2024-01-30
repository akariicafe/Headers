@class NSString, NSMutableDictionary, NSHashTable, NSMutableSet, NSSet, SBApplicationDefaults;
@protocol SBApplicationRestrictionDataSource;

@interface SBApplicationRestrictionController : NSObject <STTelephonyStateObserver> {
    id<SBApplicationRestrictionDataSource> _dataSource;
    NSHashTable *_observers;
    NSMutableDictionary *_tagValidityMap;
    NSMutableDictionary *_validTagsByIdentifier;
    struct MGNotificationTokenStruct { } *_tagsNotificationToken;
    NSMutableSet *_enabledTags;
    NSMutableDictionary *_ratingRanksByIdentifier;
    NSSet *_restrictedIdentifiers;
    SBApplicationDefaults *_applicationDefaults;
    BOOL _showInternalApps;
    BOOL _hasHideNonDefaultSystemAppsCapability;
    BOOL _showAllSystemApps;
    BOOL _canPostRestrictionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void)noteApplicationIdentifiersDidChangeWithAdded:(id)a0 replaced:(id)a1 removed:(id)a2;
- (void)noteVisibilityOverridesDidChange;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)carrierBundleInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isApplicationIdentifierRestricted:(id)a0;
- (void)beginPostingChanges;
- (void)dealloc;
- (void)noteRestrictionsMayHaveChanged;

@end
