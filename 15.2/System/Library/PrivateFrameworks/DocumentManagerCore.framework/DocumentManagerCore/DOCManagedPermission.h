@class NSString, NSDictionary, ACAccountStore, NSCache;

@interface DOCManagedPermission : NSObject {
    BOOL _mayOpenFromManagedToUnmanaged;
    BOOL _mayOpenFromUnmanagedToManaged;
    BOOL _isManagedAppsCloudSyncDisallowed;
    BOOL _hasOpenInRestrictions;
    BOOL _isUSBAccessAllowed;
    BOOL _isNetworkDriveAccessInFilesAllowed;
    BOOL _isLocalStorageAllowed;
    BOOL _didLoadSharedConnectionValues;
}

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSCache *appContainerIDCache;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (copy, nonatomic) NSString *hostIdentifier;
@property (nonatomic) unsigned long long hostAccountDataOwnerState;
@property (copy, nonatomic) NSDictionary *personaStringForDomainID;
@property (readonly, nonatomic) BOOL hasOpenInRestrictions;
@property (readonly, nonatomic) BOOL isUSBAccessAllowed;
@property (readonly, nonatomic) BOOL isNetworkDriveAllowed;

+ (id)defaultPermission;

- (BOOL)mayOpenFromUnmanagedToManaged;
- (BOOL)isLocalStorageAllowed;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCurrentPersonaEnterprise;
- (id)queueFileDataForAcceptance:(id)a0 originalFileName:(id)a1 forBundleID:(id)a2 outError:(id *)a3;
- (void)dealloc;
- (BOOL)mayOpenFromManagedToUnmanaged;
- (BOOL)canAppWithBundleIdentifier:(id)a0 performAction:(unsigned long long)a1 bundleIdentifier:(id)a2;
- (BOOL)canCopySourceIsContentManaged:(BOOL)a0;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 fileProviderDomain:(id)a1;
- (id)defaultFileProviderForAppBundle:(id)a0;
- (BOOL)adoptPersonaliCloudPersonaAndPerformBlock:(id /* block */)a0;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 targetItem:(id)a1;
- (void)_loadSharedConnectionValues;
- (BOOL)isManagedAppsCloudSyncDisallowed;
- (void)resetAllCachedPermissions;
- (BOOL)hasAnyEffectiveRestrictions;
- (unsigned long long)dataOwnerStateForBundleIdentifier:(id)a0;
- (BOOL)canAppWithDataOwnerState:(unsigned long long)a0 performAction:(unsigned long long)a1 dataOwnerState:(unsigned long long)a2;
- (unsigned long long)dataOwnerStateForiCloudDomain:(id)a0;
- (BOOL)isManagedAppsCloudSyncAllowed;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 bundleIdentifier:(id)a1;
- (BOOL)canAppWithDataOwnerState:(unsigned long long)a0 performAction:(unsigned long long)a1 item:(id)a2;
- (BOOL)canAppWithBundleIdentifier:(id)a0 performAction:(unsigned long long)a1 accountIdentifier:(id)a2;
- (unsigned long long)dataOwnerStateForItem:(id)a0;
- (unsigned long long)dataOwnerStateForFPDomain:(id)a0;
- (unsigned long long)dataOwnerStateForAccountIdentifier:(id)a0;
- (id)appContainerBundleIDForFPItem:(id)a0;
- (id)personaStringFromItem:(id)a0;
- (BOOL)adoptPersona:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 legacyPickerExtension:(id)a1;
- (BOOL)canHostAppPerformAction:(unsigned long long)a0 accountIdentifier:(id)a1;
- (BOOL)canItem:(id)a0 performAction:(unsigned long long)a1 item:(id)a2;
- (BOOL)canItems:(id)a0 performAction:(unsigned long long)a1 fileProviderDomain:(id)a2;
- (BOOL)canAppWithBundleIdentifier:(id)a0 performAction:(unsigned long long)a1 item:(id)a2;
- (unsigned long long)dataOwnerStateForItems:(id)a0;
- (BOOL)canCopyfromContainingBundleIdentifer:(id)a0;
- (BOOL)canCopyItems:(id)a0;
- (void)cleanAppContainerBundleIDCache;
- (id)allowedFileProviderBundleIdentifiersForHostBundleIdentifier:(id)a0;
- (BOOL)adoptPersonaFromItem:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)adoptPersonaFromItems:(id)a0 andPerformBlock:(id /* block */)a1;
- (BOOL)adoptPersonaFromDomain:(id)a0 andPerformBlock:(id /* block */)a1;
- (void)cachePersonaStringForProviders:(id)a0;

@end
