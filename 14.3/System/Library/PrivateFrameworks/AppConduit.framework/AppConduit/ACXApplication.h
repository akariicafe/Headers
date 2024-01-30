@class ACXApplicationStatus, NSArray, NSString, NSURL, NSUUID;

@interface ACXApplication : ACXRemoteApplication <ACXSyncedApp, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ACXApplicationStatus *deviceStatus;
@property (readonly, nonatomic) unsigned long long autoInstallOverride;
@property (readonly, nonatomic) NSURL *watchAppURL;
@property (readonly, nonatomic) unsigned long long lsSequenceNumber;
@property (readonly, copy, nonatomic) NSArray *clockFaceExtensionPaths;
@property (readonly, nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) NSURL *companionAppURL;
@property (readonly, copy, nonatomic) NSString *companionAppName;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic) BOOL isPurchasedReDownload;
@property (readonly, nonatomic) BOOL isEmbeddedPlaceholder;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSUUID *databaseUUID;
@property (readonly, nonatomic) unsigned long long sequenceNumber;
@property (readonly, copy, nonatomic) NSArray *counterpartIdentifiers;
@property (readonly, nonatomic) unsigned long long applicationType;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (readonly, nonatomic) BOOL isDeletable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gizmoApplicationsFromCompanionAppProxy:(id)a0 databaseUUID:(id)a1 startingSequenceNumber:(unsigned long long)a2;

- (id)serialize;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_URLOfFirstItemWithExtension:(id)a0 inDirectory:(id)a1;
- (id)initWithBundleID:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)_storeMetadataWithError:(id *)a0;
- (id)initWithApplicationProxy:(id)a0 gizmoBundleIdentifier:(id)a1 databaseUUID:(id)a2 sequenceNumber:(unsigned long long)a3;
- (id)initWithApplicationProxy:(id)a0 databaseUUID:(id)a1 sequenceNumber:(unsigned long long)a2;
- (id)_localizedAppNameFromProxy:(id)a0;
- (id)_mostCurrentWKAppURLInCompanionAppProxy:(id)a0 versionFound:(id *)a1 isPlaceholder:(BOOL *)a2;
- (id)_URLsOfExtensionsInBundleURL:(id)a0 mayNotExist:(BOOL)a1;
- (id)_infoPlistForPluginBundle:(id)a0;
- (id)_watchKitApplicationNameFromWKAppInfoPlist:(id)a0 containerProxy:(id)a1;
- (BOOL)_systemTrustsApplicationWithBundleURL:(id)a0;
- (id)_parseArchitectureSlicesForWatchKitAppBundleURL:(id)a0 executableName:(id)a1;
- (id)_buildLocalizedInfoPlistStringsDictForAppBundleURL:(id)a0 watchKitExtensionURL:(id)a1;
- (void)_populateStoreMetadata;
- (id)serializeAsRemoteApplication;
- (id)appWithReEvaluatedTrust;

@end
