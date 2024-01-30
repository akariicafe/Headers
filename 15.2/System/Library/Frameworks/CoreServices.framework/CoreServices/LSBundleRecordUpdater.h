@class NSString, _LSDatabase;

@interface LSBundleRecordUpdater : LSRecordBuilder {
    struct LSContext { _LSDatabase *db; } _context;
    BOOL _hasContext;
    unsigned int _bundleID;
    struct LSBundleData { struct LSBundleBaseData { unsigned int bookmark; unsigned int container; unsigned int execPath; unsigned int exactIdentifier; unsigned int teamID; unsigned int platform; int registrationTime; struct LSVersionNumber { unsigned char _opaque[32]; } version; struct LSVersionNumber { unsigned char _opaque[32]; } execSDKVersion; unsigned int machOUUIDs; unsigned int dataContainerAlias; unsigned int bundleName; unsigned int localizedShortDisplayName; unsigned int displayName; unsigned int localizedDisplayName; unsigned int localizedMicrophoneUsageDescription; unsigned int codeInfoIdentifier; unsigned int signerOrganization; unsigned int signerIdentity; unsigned int infoDictionary; unsigned int entitlements; unsigned int groupContainers; unsigned char containingDirectoryClass; unsigned char profileValidationState; unsigned int intentDefinitionURLs; unsigned short _sliceMask; unsigned int signatureVersion; struct LSBundleBaseFlags { unsigned char appleInternal : 1; unsigned char requiresObjCGarbageCollection : 1; unsigned char builtWithTSan : 1; unsigned char _reserved : 1; } flags; } base; unsigned int _clas; unsigned long long _bundleFlags; unsigned int _plistContentFlags; unsigned int _itemFlags; unsigned char _iconFlags; struct LSBundleMoreFlags { unsigned char isWebBrowser : 1; unsigned char isMailClient : 1; unsigned char supportsControllerUserInteraction : 1; unsigned char supportsSpotlightQueryContinuation : 1; unsigned char supportsSpotlightActions : 1; unsigned char isCodeSigningInfoNotAuthoritative : 1; unsigned char applicationQueriesSchemesTooBig : 1; unsigned char isUpdateAvailable : 1; unsigned char isPlaygroundsApp : 1; unsigned char _reserved : 1; } moreFlags; unsigned int _hfsType; int _mtime; unsigned int minSystemVersionPlatform; struct LSVersionNumber { unsigned char _opaque[32]; } _minSystemVersion; struct LSVersionNumber { unsigned char _opaque[32]; } _maxSystemVersion; unsigned int appStoreToolsBuildVersion; unsigned long long sequenceNumber; unsigned long long compatibilityState; unsigned long long itemID; unsigned int deviceFamilies; unsigned int identifier; unsigned int counterpartIdentifiers; unsigned int filename; unsigned int bundleVersion; unsigned int shortVersionString; unsigned int installType; unsigned long long installFailureReason; unsigned int vendorName; unsigned int appType; unsigned long long staticDiskUsage; unsigned long long purchaserDSID; unsigned long long downloaderDSID; unsigned long long familyID; unsigned int itemName; unsigned long long storefront; unsigned long long versionIdentifier; unsigned int sourceAppBundleID; unsigned int appVariant; unsigned long long ratingRank; unsigned int ratingLabel; unsigned long long genreID; unsigned int genre; unsigned int primaryIconName; unsigned int alternatePrimaryIconName; unsigned int iconsDict; unsigned int iconFileNames; unsigned int libraryPath; unsigned int libraryItems; unsigned int claims; unsigned int types; unsigned int plugins; unsigned int extensionPoints; unsigned int activityTypes; unsigned int queriableSchemes; unsigned int bgPermittedIDs; unsigned int carPlayInstrumentClusterURLSchemes; unsigned int appContainerAlias; unsigned char revision; unsigned char retries; unsigned char _reserved4; unsigned int sandboxEnvironmentVariables; unsigned int localizedNameWithContext[1]; unsigned int managedPersonas; struct LSAppClipFields { unsigned int parentAppIDs; } appClipFields; int recordModificationTime; unsigned int supportedGameControllers; unsigned int mobileInstallIDs; unsigned int applicationManagementDomain; unsigned int stashedAppDict; unsigned int linkedParentBundleIdentifier; unsigned int _reserved5; } _bundleData;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0 preferPlaceholder:(BOOL)a1;
- (void)parseSINFDictionary:(id)a0;
- (void)parseiTunesMetadata:(id)a0;
- (void)parseManagedPersonaIDs:(id)a0 containsSystemPersona:(BOOL)a1;
- (void)parsePlaceholderMetadata:(id)a0;
- (BOOL)updateBundleRecord:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
