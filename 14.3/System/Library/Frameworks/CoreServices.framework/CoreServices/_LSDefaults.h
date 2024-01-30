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
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *identifiersFileURL;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSURL *securePeferencesFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) NSURL *installJournalDirectoryURL;
@property (readonly) NSURL *dbRecoveryFileURL;
@property (readonly) NSURL *dbSyncInterruptedFileURL;
@property (getter=isServer) BOOL server;
@property (readonly, getter=isSystemServer) BOOL systemServer;
@property BOOL hasServer;
@property (readonly, getter=isInEducationMode) BOOL inEducationMode;
@property (readonly) BOOL hasPersistentPreferences;
@property (readonly, getter=isInSyncBubble) BOOL inSyncBubble;
@property (readonly, nonatomic, getter=isInXCTestRigInsecure) BOOL inXCTestRigInsecure;
@property (readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (readonly, nonatomic) BOOL allowsAlternateIcons;
@property (readonly, nonatomic) BOOL abortIfMayNotMapDatabase;
@property (readonly, nonatomic) BOOL issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) long long concurrentInstallOperations;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) BOOL markLocalizationsStoredInDatabase;
@property (readonly) BOOL alwaysUseDebugOpenWithMenus;
@property (readonly, getter=isRegionChina) BOOL regionChina;
@property (readonly) BOOL surrogatesOnlyFindBundleContainerizedBundles;
@property (readonly) NSData *HMACSecret;

+ (id)sharedInstance;
+ (BOOL)appleInternal;
+ (BOOL)inXCTestRigInsecure;
+ (id)systemContainerURL;
+ (id)userContainerURL;
+ (BOOL)hasPersistentPreferences;
+ (BOOL)inSyncBubble;
+ (BOOL)hasServer;
+ (id)systemGroupContainerURL;

- (id)classesWithNameForXCTests:(const char *)a0;
- (id)init;
- (id)darwinNotificationNameForCurrentUser:(id)a0 userID:(const unsigned int *)a1;
- (void).cxx_destruct;
- (id)databaseStoreFileURLWithUID:(unsigned int)a0;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (id)databaseUpdateNotificationNameForUserID:(unsigned int)a0;
- (id)userPreferencesURL;
- (id)serviceNameForConnectionType:(unsigned short)a0;
- (id)preferencesUpdateNotificationName;
- (id)simulatorRuntimeBuildVersion;
- (id)simulatorRuntimeVersion;
- (id)simulatorRootURL;
- (BOOL)surrogatesOnlyFindBundleContainerizedBundles;
- (BOOL)alwaysUseDebugOpenWithMenus;
- (id)preferredLocalizations;
- (id)databaseUpdateNotificationName;
- (id)debugDescription;
- (id)preferencesFileChangeNotificationName;
- (unsigned int)proxyUIDForUID:(unsigned int)a0;
- (BOOL)markLocalizationsStoredInDatabase;

@end
