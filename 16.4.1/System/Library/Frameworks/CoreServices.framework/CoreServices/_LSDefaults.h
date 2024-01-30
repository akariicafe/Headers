@class NSArray, NSMutableDictionary, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface _LSDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSURL *_systemContainerURL;
    NSURL *_systemGroupContainerURL;
    NSURL *_userContainerURL;
    NSData *_hmacSecret;
    NSMutableDictionary *_darwinNotificationNames;
    unsigned int _darwinNotificationNamesUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _darwinNotificationNamesLock;
    long long _currentDisplayGamut;
}

@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *userContainerURL;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *systemContentDatabaseStoreFileURL;
@property (readonly) NSURL *unremappableDatabaseStoreFileURL;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *identifiersFileURL;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSURL *securePeferencesFileURL;
@property (readonly) NSURL *settingsStoreFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) NSURL *dbRecoveryFileURL;
@property (readonly) NSURL *dbSyncInterruptedFileURL;
@property (readonly) NSURL *installJournalDirectoryURL;
@property (readonly) NSURL *progressProportionsStateURL;
@property (getter=isServer) BOOL server;
@property (readonly, getter=isSystemServer) BOOL systemServer;
@property (getter=isLightweightSystemServer) BOOL lightweightSystemServer;
@property BOOL hasServer;
@property (readonly, getter=isInEducationMode) BOOL inEducationMode;
@property (readonly) BOOL hasPersistentPreferences;
@property (readonly, getter=isInSyncBubble) BOOL inSyncBubble;
@property (readonly, nonatomic, getter=isInXCTestRigInsecure) BOOL inXCTestRigInsecure;
@property (readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (readonly, nonatomic) BOOL allowsAlternateIcons;
@property (readonly, nonatomic) BOOL abortIfMayNotMapDatabase;
@property (readonly, nonatomic) BOOL issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly) BOOL allowsUnentitledExtensionPointDeclaration;
@property (readonly) BOOL nsExtensionUsesLSSettingsStore;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) long long concurrentInstallOperations;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) BOOL markLocalizationsStoredInDatabase;
@property (readonly) BOOL alwaysUseDebugOpenWithMenus;
@property (readonly, getter=isRegionChina) BOOL regionChina;
@property (readonly) NSData *HMACSecret;

+ (id)sharedInstance;

- (id)preferencesUpdateNotificationName;
- (id)simulatorRootURL;
- (BOOL)markLocalizationsStoredInDatabase;
- (id)classesWithNameForXCTests:(const char *)a0;
- (id)settingsUpdateNotificationNameForUserID:(unsigned int)a0;
- (id)databaseContainerURL;
- (id)userPreferencesURL;
- (id)databaseUpdateNotificationNameForSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; })a0;
- (id)databaseStoreFileURLWithUID:(unsigned int)a0;
- (id)systemContentDatabaseStoreFileURLWithUID:(unsigned int)a0;
- (BOOL)nsExtensionUsesLSSettingsStore;
- (id)preferredLocalizations;
- (id)databaseContainerURLWithUID:(unsigned int)a0;
- (id)debugDescription;
- (BOOL)alwaysUseDebugOpenWithMenus;
- (BOOL)allowsUnentitledExtensionPointDeclaration;
- (id)preferencesFileChangeNotificationName;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (unsigned int)proxyUIDForUID:(unsigned int)a0;
- (id)serviceNameForConnectionType:(unsigned short)a0 lightweightSystemService:(BOOL)a1;
- (id)simulatorRuntimeVersion;
- (id)simulatorRuntimeBuildVersion;
- (id)init;
- (id)darwinNotificationNameForBaseName:(id)a0 optionalSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; } *)a1;
- (void).cxx_destruct;
- (id)serviceNameForConnectionType:(unsigned short)a0;

@end
