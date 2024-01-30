@class WBSPerSitePreference, NSString, NSMutableDictionary, NSObject, NSURL, WBSPerSitePreferencesSQLiteStore, WBSCoalescedAsynchronousWriter;
@protocol OS_dispatch_queue;

@interface WBSUserMediaPermissionController : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSCoalescedAsynchronousWriterDelegate> {
    NSMutableDictionary *_cachedSettings;
    WBSCoalescedAsynchronousWriter *_saveUserMediaPermissionsWriter;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct atomic<LoadingStatus> { struct __cxx_atomic_impl<LoadingStatus, std::__1::__cxx_atomic_base_impl<LoadingStatus> > { _Atomic long long __a_value; } __a_; } _savedStateLoadStatus;
    NSURL *_userMediaPermissionsFileURL;
}

@property (readonly, nonatomic) WBSPerSitePreference *cameraMediaCapturePreference;
@property (readonly, nonatomic) WBSPerSitePreference *microphoneMediaCapturePreference;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedStringForPerSitePreferenceValue:(id)a0;
+ (id)sharedController;

- (id)initWithUserMediaPermissionsFileURL:(id)a0 perSitePreferencesStore:(id)a1;
- (void)_dispatchAsyncOnInternalQueue:(id /* block */)a0;
- (void)_dispatchSyncOnInternalQueue:(id /* block */)a0;
- (void)_cachedSettingsDidChange;
- (unsigned long long)_permissionForOrigin:(id)a0 topLevelOrigin:(id)a1;
- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)_validPolicyForDomainWithOrigin:(id)a0 topLevelOrigin:(id)a1;
- (unsigned long long)_permissionByApplyingDefaultsForMissingValuesInPermission:(unsigned long long)a0;
- (id)_standardizedURLForDomain:(id)a0;
- (id)_validPolicyForOrigin:(id)a0 topLevelOrigin:(id)a1;
- (BOOL)_captureDevicesAreAllDefaultsGivenPermission:(unsigned long long)a0;
- (id)_policyForOrigin:(id)a0 topLevelOrigin:(id)a1;
- (void)_invalidateCachedSettingsForOriginHash:(id)a0;
- (id)init;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_setPermission:(unsigned long long)a0 expirationPolicy:(unsigned long long)a1 forOrigin:(id)a2 topLevelOrigin:(id)a3;
- (unsigned long long)_permissionByRemovingDefaultPermissionFlagsInPermission:(unsigned long long)a0;
- (id)_saltForOrigin:(id)a0 topLevelOrigin:(id)a1 frameIdentifier:(unsigned long long)a2;
- (id)_saltWithPolicyEntry:(id)a0 computedPermission:(unsigned long long)a1 frameIdentifier:(unsigned long long)a2;
- (void)resetOriginPermissionsWithCompletionHandler:(id /* block */)a0;
- (void)_cachedSettingsDidChangeAndWriteImmediately:(BOOL)a0 completionHandler:(id /* block */)a1;
- (long long)_mediaCaptureTypeForPreference:(id)a0;
- (BOOL)_setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2;
- (unsigned long long)_permissionMaskForMediaCaptureType:(long long)a0;
- (void)_invalidateAllPermissionsForDomain:(id)a0;
- (long long)_mediaCaptureSettingForMediaCaptureType:(long long)a0 userMediaPermission:(unsigned long long)a1;
- (unsigned long long)_userMediaPermissionForMediaCaptureType:(long long)a0 mediaCaptureSetting:(long long)a1;
- (void)reloadPreferences;
- (unsigned long long)permissionForOrigin:(id)a0 topLevelOrigin:(id)a1;
- (BOOL)_removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1;
- (void)performDelayedLaunchOperations;
- (void)savePendingChangesWithCompletionHandler:(id /* block */)a0;
- (void)getPermissionForOrigin:(id)a0 topLevelOrigin:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)permissionForNonHTTPSOriginFromPermission:(unsigned long long)a0;
- (void)removeAllOriginsAddedAfterDate:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)setPermission:(unsigned long long)a0 expirationPolicy:(unsigned long long)a1 forOrigin:(id)a2 topLevelOrigin:(id)a3;
- (id)saltForOrigin:(id)a0 topLevelOrigin:(id)a1 frameIdentifier:(unsigned long long)a2;
- (void)resetOriginPermissions;
- (void)didCommitLoadForFrameWithIdentifier:(unsigned long long)a0;
- (void)checkUserMediaPermissionForURL:(id)a0 mainFrameURL:(id)a1 frameIdentifier:(unsigned long long)a2 decisionHandler:(id /* block */)a3;
- (unsigned long long)userMediaPermissionForDefaultPreferenceValues;
- (unsigned long long)permissionForDomain:(id)a0;
- (BOOL)_isPreferenceValid:(id)a0;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (id)valuesForPreference:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)removeAllPermissionsWithCompletionHandler:(id /* block */)a0;
- (id)_init;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)preferences;
- (void)_loadSavedPermissions;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (id)_dictionaryRepresentation;

@end
