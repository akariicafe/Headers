@class NSData, NSString, NSArray, NSURL, NSMutableDictionary, NSDictionary, NSMutableSet, LSRegistrationInfo, NSNumber;

@interface LSBundleRecordBuilder : LSRecordBuilder {
    unsigned int _bundleClass;
    LSRegistrationInfo *_registrationInfo;
    NSData *_bundleAlias;
    unsigned long long _bundleFlags;
    unsigned int _plistContentFlags;
    unsigned char _iconFlags;
    unsigned int _itemFlags;
    struct LSBundleMoreFlags { unsigned char isWebBrowser : 1; unsigned char isMailClient : 1; unsigned char supportsControllerUserInteraction : 1; unsigned char supportsSpotlightQueryContinuation : 1; unsigned char supportsSpotlightActions : 1; unsigned char isCodeSigningInfoNotAuthoritative : 1; unsigned char applicationQueriesSchemesTooBig : 1; unsigned char isUpdateAvailable : 1; unsigned char isPlaygroundsApp : 1; unsigned char supportsAlwaysOnDisplay : 1; unsigned char defaultsToPrivateAlwaysOnDisplayTreatment : 1; unsigned char supportsLiveActivities : 1; unsigned char supportsLiveActivitiesFrequentUpdates : 1; unsigned char requiresPostprocessing : 1; unsigned char hasShellRole : 1; unsigned char _reserved : 1; } _moreFlags;
    struct LSBundleBaseFlags { unsigned char appleInternal : 1; unsigned char requiresObjCGarbageCollection : 1; unsigned char builtWithTSan : 1; unsigned char isLinkEnabled : 1; unsigned char _reserved : 1; } _baseFlags;
    unsigned int _platform;
    unsigned int _minSystemVersionPlatform;
    unsigned int _hfsType;
    unsigned int _hfsCreator;
    unsigned long long _inode;
    BOOL _canDefineSystemExtensionPoint;
    NSMutableDictionary *_plistRarities;
    NSMutableDictionary *_commonInfoPlistEntries;
    NSArray *_supportedGameControllers;
    struct LSVersionNumber { unsigned char _opaque[32]; } _sdkVersionNumber;
}

@property (nonatomic) unsigned char retries;
@property (nonatomic) unsigned int previousInstallType;
@property (nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic) BOOL registerChildItemsTrusted;
@property (readonly, nonatomic) BOOL containerized;
@property (readonly, nonatomic) BOOL webNotificationPlaceholder;
@property (readonly, nonatomic) NSNumber *compatibilityState;
@property (readonly, nonatomic) NSNumber *installFailureReason;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *minSystemVersion;
@property (readonly, nonatomic) NSString *maxSystemVersion;
@property (readonly, nonatomic) NSString *sdkVersion;
@property (readonly, nonatomic) NSString *appStoreToolsBuildVersion;
@property (readonly, nonatomic) NSString *shortVersionString;
@property (readonly, nonatomic) NSString *execPath;
@property (readonly, nonatomic) NSArray *machOUUIDs;
@property (readonly, nonatomic) NSNumber *itemID;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSArray *activityTypes;
@property (readonly, nonatomic) NSArray *deviceFamily;
@property (readonly, nonatomic) NSNumber *installType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *shortDisplayName;
@property (readonly, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) NSArray *alternateNames;
@property (readonly, nonatomic) NSURL *dataContainerURL;
@property (readonly, nonatomic) NSURL *bundleContainerURL;
@property (readonly, nonatomic) NSString *categoryType;
@property (readonly, nonatomic) NSString *secondCategoryType;
@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) NSString *appType;
@property (readonly, nonatomic) NSString *signerIdentity;
@property (readonly, nonatomic) NSString *codeInfoIdentifier;
@property (readonly, nonatomic) NSString *signerOrganization;
@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic) NSNumber *storefront;
@property (readonly, nonatomic) NSNumber *versionID;
@property (readonly, nonatomic) NSString *sourceAppBundleID;
@property (readonly, nonatomic) NSString *appVariant;
@property (readonly, nonatomic) NSMutableSet *counterpartAppBundleIDs;
@property (readonly, nonatomic) NSArray *parentApplicationIdentifiers;
@property (readonly, nonatomic) NSString *watchKitVersion;
@property (readonly, nonatomic) NSString *complicationPrincipalClass;
@property (readonly, nonatomic) NSArray *supportedComplicationFamilies;
@property (readonly, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) NSNumber *ratingRank;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSNumber *genreID;
@property (readonly, nonatomic) NSString *primaryIconName;
@property (readonly, nonatomic) NSString *alternatePrimaryIconName;
@property (readonly, nonatomic) NSDictionary *iconsDict;
@property (readonly, nonatomic) NSArray *iconFileNames;
@property (readonly, nonatomic) NSNumber *purchaserDSID;
@property (readonly, nonatomic) NSNumber *downloaderDSID;
@property (readonly, nonatomic) NSNumber *familyID;
@property (readonly, nonatomic) NSNumber *staticDiskUsage;
@property (readonly, nonatomic) NSString *libraryPath;
@property (readonly, nonatomic) NSArray *libraryItems;
@property (readonly, nonatomic) NSArray *documentClaims;
@property (readonly, nonatomic) NSArray *URLClaims;
@property (readonly, nonatomic) NSArray *importedTypes;
@property (readonly, nonatomic) NSArray *exportedTypes;
@property (readonly, nonatomic) NSArray *queriableSchemes;
@property (readonly, nonatomic) NSDictionary *pluginPlists;
@property (readonly, nonatomic) NSDictionary *pluginMIDicts;
@property (readonly, nonatomic) NSArray *driverExtensionPaths;
@property (readonly, nonatomic) NSDictionary *groupContainers;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSDictionary *sandboxEnvironmentVariables;
@property (readonly, nonatomic) NSDictionary *extensionSDK;
@property (readonly, nonatomic) NSDictionary *intentDefinitionURLs;
@property (readonly, nonatomic) NSArray *bgPermittedIdentifiers;
@property (readonly, nonatomic) NSArray *carPlayInstrumentClusterURLSchemes;
@property (nonatomic) unsigned char profileValidationState;
@property (readonly, nonatomic) NSDictionary *localizedNames;
@property (readonly, nonatomic) NSDictionary *localizedShortNames;
@property (readonly, nonatomic) NSString *microphoneUsageDescription;
@property (readonly, nonatomic) NSDictionary *localizedMicrophoneUsageDescription;
@property (readonly, nonatomic) NSString *identityUsageDescription;
@property (readonly, nonatomic) NSDictionary *localizedIdentityUsageDescription;
@property (readonly, nonatomic) NSDictionary *localizedStrings;
@property (readonly, nonatomic) NSDictionary *unlocalizedNamesWithContext;
@property (readonly, nonatomic) NSArray *managedPersonas;
@property (readonly, nonatomic) NSNumber *directoryClass;
@property (readonly) NSDictionary *mobileInstallIDs;
@property (readonly, nonatomic) NSArray *slices;
@property (readonly) NSNumber *signatureVersion;
@property (readonly, nonatomic) NSDictionary *stashedAppInfo;
@property (readonly, nonatomic) NSString *applicationManagementDomain;
@property (readonly, nonatomic) NSString *linkedParentBundleID;

- (void).cxx_destruct;
- (BOOL)parseInfoPlist:(id)a0;
- (id)_LSBundleFlagMap;
- (id)_LSKeyTypeMap;
- (id)_LSPlistRaritiesMap;
- (int)activateBindings:(id)a0 unitID:(unsigned int)a1 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; } x6; unsigned int x7; int x8; unsigned int x9; struct LSVersionNumber { unsigned char x0[32]; } x10; struct LSVersionNumber { unsigned char x0[32]; } x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned int x33; unsigned int x34; unsigned long long x35; unsigned int x36; unsigned long long x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned char x55; unsigned char x56; unsigned char x57; unsigned int x58; unsigned int x59[1]; unsigned int x60; unsigned int x61; struct LSAppClipFields { unsigned int x0; } x62; int x63; unsigned int x64; unsigned int x65; unsigned int x66; unsigned int x67; unsigned int x68; unsigned int x69; } *)a2;
- (void)addBundleFlag:(unsigned long long)a0;
- (void)addIconFlag:(unsigned char)a0;
- (void)addItemInfoFlag:(unsigned int)a0;
- (void)addPlistFlag:(unsigned int)a0;
- (struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; } x6; unsigned int x7; int x8; unsigned int x9; struct LSVersionNumber { unsigned char x0[32]; } x10; struct LSVersionNumber { unsigned char x0[32]; } x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned int x33; unsigned int x34; unsigned long long x35; unsigned int x36; unsigned long long x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned char x55; unsigned char x56; unsigned char x57; unsigned int x58; unsigned int x59[1]; unsigned int x60; unsigned int x61; struct LSAppClipFields { unsigned int x0; } x62; int x63; unsigned int x64; unsigned int x65; unsigned int x66; unsigned int x67; unsigned int x68; unsigned int x69; })buildBundleData:(id)a0 error:(id *)a1;
- (id)iconsDictionaryFromDict:(id)a0;
- (void)parseActivityTypesFromDictionary:(id)a0;
- (void)parseArchitecturesFromDict:(id)a0;
- (void)parseDeviceFamilyFromDict:(id)a0;
- (void)parseDocumentClaimsFromDict:(id)a0;
- (void)parseIconFilenamesFromDict:(id)a0;
- (BOOL)parseInstallationInfo:(id)a0;
- (void)parseNSExtensionSDKDefinitionsFromDictionary:(id)a0;
- (void)parseURLClaimsFromDict:(id)a0;
- (unsigned int)registerBundleRecord:(id)a0 error:(id *)a1;
- (int)registerQueriableSchemes:(id)a0 bundleData:(struct LSBundleData { struct LSBundleBaseData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct LSVersionNumber { unsigned char x0[32]; } x7; struct LSVersionNumber { unsigned char x0[32]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned char x23; unsigned char x24; unsigned int x25; unsigned short x26; unsigned int x27; struct LSBundleBaseFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x28; } x0; unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; struct LSBundleMoreFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; } x6; unsigned int x7; int x8; unsigned int x9; struct LSVersionNumber { unsigned char x0[32]; } x10; struct LSVersionNumber { unsigned char x0[32]; } x11; unsigned int x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned long long x23; unsigned int x24; unsigned int x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned int x33; unsigned int x34; unsigned long long x35; unsigned int x36; unsigned long long x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned char x55; unsigned char x56; unsigned char x57; unsigned int x58; unsigned int x59[1]; unsigned int x60; unsigned int x61; struct LSAppClipFields { unsigned int x0; } x62; int x63; unsigned int x64; unsigned int x65; unsigned int x66; unsigned int x67; unsigned int x68; unsigned int x69; } *)a1;
- (void)setCommonInfoPlistKeysFromDictionary:(id)a0;
- (void)setFlagsFromDictionary:(id)a0;
- (void)setRaritiesFromDictionary:(id)a0;
- (void)setRegistrationInfo:(id)a0 alias:(id)a1;
- (id)truncate:(BOOL *)a0 queriableSchemesIfNeeded:(id)a1;

@end
